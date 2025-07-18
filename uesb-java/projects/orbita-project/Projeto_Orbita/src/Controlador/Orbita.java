package Controlador;

import javax.swing.*;
import java.awt.*;

public class Orbita extends JPanel implements Runnable {
    private int raioOrbita;    // Raio da órbita
    private int centroX;       // Coordenada X do centro da órbita (Sol)
    private int centroY;       // Coordenada Y do centro da órbita
    private double angulo = 0; // Ângulo inicial para a órbita
    
    private JLabel labelTerra; // Label da Terra
    private JLabel labelSol;   // Label do Sol

    public Orbita() {
        setLayout(null); // Layout nulo para controle manual da posição

        // Definindo as imagens para os ícones
        labelSol = new JLabel(new ImageIcon(getClass().getResource("/Controlador/imagens/sol.png")));
        labelTerra = new JLabel(new ImageIcon(getClass().getResource("/Controlador/imagens/planeta-terra.png")));

        add(labelSol);  
        add(labelTerra); 

       
        Thread thread = new Thread(this);
        thread.start();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        
        
        centroX = getWidth() / 2;
        centroY = getHeight() / 2;
        raioOrbita = Math.min(getWidth(), getHeight()) / 3; 

        // Define o Sol no centro da órbita
        labelSol.setBounds(centroX - 20, centroY - 20, 64, 64); 
    }

    @Override
    public void run() {
        while (true) { 
            int x = (int) (centroX + raioOrbita * Math.cos(angulo));
            int y = (int) (centroY + raioOrbita * Math.sin(angulo));

            //Posição da terra
            labelTerra.setBounds(x - 20, y - 20, 32, 32); 

            
            angulo += 0.01;

            
            try {
                Thread.sleep(30); 
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

           
            repaint();
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Simulação da Órbita da Terra (Feito por um aluno)");
        Orbita painel = new Orbita();
        frame.setSize(800, 800); 
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(painel);
        frame.setVisible(true);
    }
}
