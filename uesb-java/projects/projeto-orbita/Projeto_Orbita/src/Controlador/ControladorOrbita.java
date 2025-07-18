package Controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.Timer;
import javax.swing.SwingUtilities;
import visual.Espaco;

public class ControladorOrbita {
    Espaco espaco; 
    Timer timer; 
    private double angulo = 0;
    private int raio = 300; 

    public ControladorOrbita(Espaco espaco) {
        this.espaco = espaco;
        iniciarOrbita();
    }

    private void iniciarOrbita() {
        timer = new Timer(1, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                atualizarPosicao();
            }
        });
        timer.start();
    }

    private void atualizarPosicao() {
        // Centro do Sol
        int centroX = espaco.getLblSol().getX() + espaco.getLblSol().getWidth() / 2;
        int centroY = espaco.getLblSol().getY() + espaco.getLblSol().getHeight() / 2;

        // Calcula nova posição da Terra
        int x = (int) (centroX + raio * Math.cos(angulo)) - espaco.getLblTerra().getWidth() / 2;
        int y = (int) (centroY + raio * Math.sin(angulo)) - espaco.getLblTerra().getHeight() / 2;
        

        // Atualiza posição da Terra
        espaco.getLblTerra().setBounds(x, y, espaco.getLblTerra().getWidth(), espaco.getLblTerra().getHeight());

        // Incrementa o ângulo para criar o movimento
        angulo += 0.003;
    }
}