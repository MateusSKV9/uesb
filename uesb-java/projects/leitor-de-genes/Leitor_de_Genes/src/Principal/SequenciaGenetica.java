package Principal;

import java.io.*;
import java.util.*;

public class SequenciaGenetica {
    public static void main(String[] args) {
        
    	String arquivoEntrada = "Leitor_de_Genes/src/principal/Animais.txt";
        String arquivoSaida = "Leitor_de_Genes/src/principal/Animais_saida.txt";

        try {
            Map<String, String> sequencias = lerAsSequencias(arquivoEntrada);
            List<String> resultados = new ArrayList<>();

            List<String> especies = new ArrayList<>(sequencias.keySet());

            for (int i = 0; i < especies.size(); i++) {
                for (int j = i + 1; j < especies.size(); j++) {
                    String especie1 = especies.get(i);
                    String especie2 = especies.get(j);

                    String seq1 = sequencias.get(especie1);
                    String seq2 = sequencias.get(especie2);

                    int min = Math.min(seq1.length(), seq2.length());
                    int iguais = 0, diferentes = 0;

                    for (int k = 0; k < min; k++) {
                        if (seq1.charAt(k) == seq2.charAt(k)) {
                            iguais++;
                        } else {
                            diferentes++;
                        }
                    }                   
              
                    diferentes += Math.abs(seq1.length() - seq2.length());
                    double porcentagem = (iguais / (double) min) * 100;
                    
                    resultados.add(String.format(
                        "Comparação entre %s e %s:\n- Iguais: %d\n- Diferentes: %d\n- Porcentagem de semelhanca: %f.2\n",
                        especie1, especie2, iguais, diferentes, porcentagem
                    ));
                }
            }

            salvarResultado(arquivoSaida, String.join("\n", resultados));
            System.out.println("Comparações salvas em: " + arquivoSaida);

        } catch (IOException e) {
            System.err.println("Erro ao processar o arquivo: " + e.getMessage());
        }
    }

    public static Map<String, String> lerAsSequencias(String nomeArquivo) throws IOException {
        Map<String, String> mapa = new LinkedHashMap<>();
        try (BufferedReader br = new BufferedReader(new FileReader(nomeArquivo))) {
            String linha;
            while ((linha = br.readLine()) != null) {
                linha = linha.trim();
                if (!linha.isEmpty()) {
                	String[] partes = linha.split("[;\\s]+");
                    if (partes.length >= 2) {
                        mapa.put(partes[0], partes[1]);
                    }
                }
            }
        }
        return mapa;
    }

    public static void salvarResultado(String nomeArquivo, String conteudo) throws IOException {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(nomeArquivo))) {
            bw.write(conteudo);
        }
    }
}
