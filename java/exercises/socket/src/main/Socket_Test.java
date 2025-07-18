package main;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.net.Socket;

public class Socket_Test {
    public static void main(String[] args) {
        String servidorIP = "192.168.1.35"; 
        int porta = 50001; 

        try (
            Socket socket = new Socket(servidorIP, porta);
            PrintWriter saida = new PrintWriter(new OutputStreamWriter(socket.getOutputStream()), true);
            BufferedReader entrada = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        ) {
           
            saida.println("Mateus Santos");

            String resposta = entrada.readLine();
            System.out.println("Resposta do servidor: " + resposta);

        } catch (Exception e) {
            System.out.println("Erro ao conectar: " + e.getMessage());
        }
    }
}
