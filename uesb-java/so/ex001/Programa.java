import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

// Importações da biblioteca Gson
import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

public class Programa {
    // Usando Generics <String> para deixar a lista tipada
    List<String> dados = new ArrayList<>();

    public Programa() {
        // 1. Criar e disparar uma nova thread para buscar os dados
        Thread threadBusca = new Thread(new Runnable() {
            @Override
            public void run() {
                buscarDadosIBGE();
            }
        });
        
        threadBusca.start(); // Inicia a execução da thread paralela

        try {
            // 2. Fazer a thread principal (main) esperar até que a threadBusca termine
            threadBusca.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // 3. Imprimir cada uma das siglas cadastradas
        System.out.println("--- SIGLAS DOS ESTADOS BRASILEIROS ---");
        for (String sigla : dados) {
            System.out.println(sigla);
        }
    }

    private void buscarDadosIBGE() {
        try {
            // Criar a conexão HTTP com o endpoint do IBGE
            URL url = new URL("https://servicodados.ibge.gov.br/api/v1/localidades/estados/");
            HttpURLConnection conexao = (HttpURLConnection) url.openConnection();
            conexao.setRequestMethod("GET");

            // Ler a resposta do servidor
            BufferedReader leitor = new BufferedReader(new InputStreamReader(conexao.getInputStream()));
            StringBuilder resultadoJson = new StringBuilder();
            String linha;
            
            while ((linha = leitor.readLine()) != null) {
                resultadoJson.append(linha);
            }
            leitor.close();

            // Usar o Gson para converter o texto da resposta em elementos JSON
            // A API do IBGE retorna um Array de objetos: [ {"id": 11, "sigla": "RO", ...}, {...} ]
            JsonArray jsonArray = JsonParser.parseString(resultadoJson.toString()).getAsJsonArray();

            // Filtrar as siglas e adicionar na lista "dados"
            for (JsonElement elemento : jsonArray) {
                JsonObject estado = elemento.getAsJsonObject();
                String sigla = estado.get("sigla").getAsString(); // Captura a propriedade "sigla"
                dados.add(sigla);
            }

        } catch (Exception e) {
            System.out.println("Erro ao buscar ou processar os dados: " + e.getMessage());
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        new Programa();
    }
}