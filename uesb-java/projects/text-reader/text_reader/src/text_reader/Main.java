package text_reader;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;

public class Main {
	public static void main(String[] args) {
        String arquivo = "src/text_reader/name_list.txt"; 
        String palavraPesquisada = "mateus"; 
        int cont = 0;

        try {
            File file = new File(arquivo);
            if (!file.exists()) {
                System.out.println("Arquivo não encontrado: " + file.getAbsolutePath());
                return;
            }

            FileReader fr = new FileReader(file);
            BufferedReader br = new BufferedReader(fr);
            String linha;

            while ((linha = br.readLine()) != null) {
                // Divide a linha por ponto e vírgula ou espaços
                String[] palavras = linha.split("[;\\s\\.\\,]+");

                for (String palavra : palavras) {
                    if (palavra.equalsIgnoreCase(palavraPesquisada)) {
                        cont++;
                    }
                }
            }

            br.close();
            fr.close();

            System.out.println("A palavra '" + palavraPesquisada + "' está presente " + cont + " vezes no arquivo.");

        } catch (IOException e) {
            System.out.println("Erro ao ler o arquivo: " + e.getMessage());
        }
    }

}
