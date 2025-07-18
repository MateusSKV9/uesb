package controle;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Timer;
import java.util.TimerTask;
import visual.Frame;

public class ControladorFrame implements ActionListener {
    Frame frame;
    Timer timer;
    
    int posicaoY = 60;
    double velocidade = 0;
    double aceleracao = 10;
    double fatorRebote = 0.8;
    long tempoIntervalo = 10;
    int limiteInferior = 715;

    public ControladorFrame(Frame frame) {
        this.frame = frame;
        addEventos();
    }

    public void addEventos() {
        frame.getButtonLancar().addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == frame.getButtonLancar()) {
            iniciarSimulacao(); // Inicia a simulação quando o botão é pressionado
        }
    }

    private void iniciarSimulacao() {
    	posicaoY = 60;
        velocidade = 0;
    	
        if (timer != null) {
            timer.cancel(); // Cancela qualquer timer anterior para evitar conflitos
        }
        
        timer = new Timer();
        timer.scheduleAtFixedRate(new TimerTask() {
            public void run() {
                atualizarPosicao(); // Chama a função de atualização da posição
            }
        }, 0, tempoIntervalo); // Intervalo definido para cada 10ms
    }

    private void atualizarPosicao() {
        posicaoY += (int) velocidade;
        velocidade += (aceleracao * tempoIntervalo) / 10;

        if (posicaoY >= limiteInferior) {
            posicaoY = limiteInferior;
            velocidade = -velocidade * fatorRebote;
        }

        frame.getBola().setBounds(150, posicaoY, 40, 40); // Atualiza a posição no frame
    }

    public static void main(String[] args) {
        Frame frame = new Frame();
    	new ControladorFrame(frame);
    }
}
