package text_reader;

import java.awt.EventQueue;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JButton;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Interface_Text_Reader {
    private JFrame frame;
    private JTextField txtPalavra;
    private JLabel lblResultado;
    private File arquivoSelecionado;

    public static void main(String[] args) {
    	Interface_Text_Reader window = new Interface_Text_Reader();
        window.frame.setVisible(true);    	
    }

    public Interface_Text_Reader() {
        initialize();
    }

    private void initialize() {
        frame = new JFrame();
        frame.setTitle("Buscador de palavra");
        frame.setBounds(100, 100, 450, 250);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setLayout(null);

        JButton btnSelecionarArquivo = new JButton("Selecionar Arquivo");
        btnSelecionarArquivo.setBounds(30, 30, 160, 25);
        frame.getContentPane().add(btnSelecionarArquivo);

        JLabel lblPalavra = new JLabel("Palavra a buscar:");
        lblPalavra.setBounds(30, 70, 120, 25);
        frame.getContentPane().add(lblPalavra);

        txtPalavra = new JTextField();
        txtPalavra.setBounds(150, 70, 200, 25);
        frame.getContentPane().add(txtPalavra);
        txtPalavra.setColumns(10);

        JButton btnBuscar = new JButton("Buscar");
        btnBuscar.setBounds(150, 110, 100, 25);
        frame.getContentPane().add(btnBuscar);

        lblResultado = new JLabel("");
        lblResultado.setBounds(30, 150, 380, 25);
        frame.getContentPane().add(lblResultado);

        btnSelecionarArquivo.addActionListener(e -> {
            JFileChooser fileChooser = new JFileChooser();
            int resultado = fileChooser.showOpenDialog(null);
            if (resultado == JFileChooser.APPROVE_OPTION) {
                arquivoSelecionado = fileChooser.getSelectedFile();
                JOptionPane.showMessageDialog(frame, "Arquivo selecionado: " + arquivoSelecionado.getName());
            }
        });

        btnBuscar.addActionListener(e -> {
            if (arquivoSelecionado == null) {
                JOptionPane.showMessageDialog(frame, "Por favor, selecione um arquivo primeiro.");
                return;
            }

            String palavra = txtPalavra.getText().trim();
            if (palavra.isEmpty()) {
                JOptionPane.showMessageDialog(frame, "Por favor, insira uma palavra para buscar.");
                return;
            }

            int ocorrencias = contarOcorrencias(arquivoSelecionado, palavra);
            lblResultado.setText("A palavra \"" + palavra + "\" aparece " + ocorrencias + " vez(es).");
        });
    }

    private int contarOcorrencias(File arquivo, String palavra) {
        int contador = 0;
        try (BufferedReader br = new BufferedReader(new FileReader(arquivo))) {
            String linha;
            
            // Enquanto ainda houver linhas, ele vai ler
            while ((linha = br.readLine()) != null) {
                // Divide a linha em palavras usando separadores comuns
                String[] palavras = linha.split("[;\\s\\.\\,]+");

                for (String p : palavras) {
                    if (p.equalsIgnoreCase(palavra)) {
                        contador++;
                    }
                }
            }
        } catch (IOException e) {
            JOptionPane.showMessageDialog(frame, "Erro ao ler o arquivo: " + e.getMessage());
        }
        return contador;
    }

}
