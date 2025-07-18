package controlador;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton; 
import visual.PaneljogoVelha;

public class ControladorjogoVelha implements ActionListener {
    PaneljogoVelha paneljogoVelha;
    private JButton btn1, btn2, btn3, btn4, btn5, btn6, btn7, btn8, btn9, btnJogarNovamente;
    private boolean isJogador1Turno = true; // Controla quem está jogando
    private boolean empate = false;
    private int contVez = 0;

    public ControladorjogoVelha(PaneljogoVelha paneljogoVelha) {
        this.paneljogoVelha = paneljogoVelha;
        
        this.btn1 = paneljogoVelha.getBtn1();
        this.btn2 = paneljogoVelha.getBtn2();
        this.btn3 = paneljogoVelha.getBtn3();
        this.btn4 = paneljogoVelha.getBtn4();
        this.btn5 = paneljogoVelha.getBtn5();
        this.btn6 = paneljogoVelha.getBtn6();
        this.btn7 = paneljogoVelha.getBtn7();
        this.btn8 = paneljogoVelha.getBtn8();
        this.btn9 = paneljogoVelha.getBtn9();
        this.btnJogarNovamente = paneljogoVelha.getBtnJogarNovamente();

        addEventos();
    }

    private void addEventos() {
        btn1.addActionListener(this);
        btn2.addActionListener(this);
        btn3.addActionListener(this);
        btn4.addActionListener(this);
        btn5.addActionListener(this);
        btn6.addActionListener(this);
        btn7.addActionListener(this);
        btn8.addActionListener(this);
        btn9.addActionListener(this);
        btnJogarNovamente.addActionListener(this);
        paneljogoVelha.getLblResultado();
        paneljogoVelha.getLblVez();
    }
    
    
    /* ===============================> EVENTOS (LÓGICA DO JOGO) <=============================== */
    
    
    public void actionPerformed(ActionEvent e) {
        JButton btnClicado = (JButton) e.getSource(); // armazena o botão que foi acionado 
        
        if (isJogador1Turno) {
        	paneljogoVelha.getLblVez().setText("Vez do jogador 2 (O)."); // após clicar, muda para jogador 2
            btnClicado.setText("X"); // Jogador 1
            jogada(btnClicado, "X");       
        } else  {
        	paneljogoVelha.getLblVez().setText("Vez do jogador 1 (X)."); // após clicar, muda para jogador 1
        	btnClicado.setText("O"); // Jogador 2
        	jogada(btnClicado, "O");
        }
        
        if(e.getSource() == paneljogoVelha.getBtnJogarNovamente()) {
        	jogarNovamente();
        	return; 
        }
        
        btnClicado.setEnabled(false);
        isJogador1Turno = !isJogador1Turno;
        contVez++;
        
        verificarVitoria(); // Verifica condições de vitória
    }
    
    
    /* =====================================> FUNÇÕES <===================================== */
    
    
    private void jogada(JButton btnClicado, String simbolo) {
    	if (btnClicado == btn1) {
    		btn1.setText(simbolo);
        } else if (btnClicado == btn2) {
        	btn2.setText(simbolo);
        } else if (btnClicado == btn3) {
        	btn3.setText(simbolo);
        } else if (btnClicado == btn4) {
        	btn4.setText(simbolo);
        } else if (btnClicado == btn5) {
        	btn5.setText(simbolo);
        } else if (btnClicado == btn6) {
        	btn6.setText(simbolo);
        } else if (btnClicado == btn7) {
        	btn7.setText(simbolo);
        } else if (btnClicado == btn8) {
        	btn8.setText(simbolo);
        } else if (btnClicado == btn9) {
        	btn9.setText(simbolo);
        }
    }
    
    private void verificarVitoria() {  
        if (btn1.getText() != "\0" &&
        	btn1.getText() == btn2.getText() && btn2.getText() == btn3.getText()) { 
        	pintarVitoria(btn1, btn2, btn3);
        	finalizarJogo();
        } else if (btn4.getText() != "\0" &&
        	btn4.getText() == btn5.getText() && btn5.getText() == btn6.getText()) { 
        	pintarVitoria(btn4, btn5, btn6);
        	finalizarJogo();
        } else if (btn7.getText() != "\0" &&
        	btn7.getText() == btn8.getText() && btn8.getText() == btn9.getText()) {	
        	pintarVitoria(btn7, btn8, btn9);
        	finalizarJogo();
        } else if (btn1.getText() != "\0" &&
        	btn1.getText() == btn4.getText() && btn4.getText() == btn7.getText()) { 
        	pintarVitoria(btn1, btn4, btn7);
        	finalizarJogo();
        } else if (btn2.getText() != "\0" &&
        	btn2.getText() == btn5.getText() && btn5.getText() == btn8.getText()) { 
        	pintarVitoria(btn2, btn5, btn8);
        	finalizarJogo();
        } else if (btn3.getText() != "\0" &&
        	btn3.getText() == btn6.getText() && btn6.getText() == btn9.getText()) { 
        	pintarVitoria(btn3, btn6, btn9);
        	finalizarJogo();
        } else if (btn1.getText() != "\0" &&
        	btn1.getText() == btn5.getText() && btn5.getText() == btn9.getText()) { 
        	pintarVitoria(btn1, btn5, btn9);
        	finalizarJogo();
        } else if (btn3.getText() != "\0" &&
        	btn3.getText() == btn5.getText() && btn5.getText() == btn7.getText()) { 
        	pintarVitoria(btn3, btn5, btn7);
        	finalizarJogo();
        } else if(contVez==9) {
        	empate=true;
       		finalizarJogo();
        }
    }
    
    private void finalizarJogo() {
    	btn1.setEnabled(false);
    	btn2.setEnabled(false);
    	btn3.setEnabled(false);
    	btn4.setEnabled(false);
    	btn5.setEnabled(false);
    	btn6.setEnabled(false);
    	btn7.setEnabled(false);
    	btn8.setEnabled(false);
    	btn9.setEnabled(false);

    	paneljogoVelha.getLblVez().setText("FIM DE JOGO!");
    	if(!empate) {
    		if(contVez%2!=0) {
    			paneljogoVelha.getLblResultado().setText("Vitória! Jogador 1 ganhou.");
    		} else {
    			paneljogoVelha.getLblResultado().setText("Vitória! Jogador 2 ganhou.");
    		}    		
    	} else {
    		paneljogoVelha.getLblResultado().setText("Empate. Deu velha!");
    	}
    	
    	paneljogoVelha.getBtnJogarNovamente().setVisible(true);
    }
    
    private void pintarVitoria(JButton btnA, JButton btnB, JButton btnC) {
    	btnA.setBackground(Color.GREEN); 
    	btnB.setBackground(Color.GREEN); 
    	btnC.setBackground(Color.GREEN); 
    }
    
    private void jogarNovamente() {
        btn1.setText("1"); btn1.setBackground(null); btn1.setEnabled(true);
        btn2.setText("2"); btn2.setBackground(null); btn2.setEnabled(true);
        btn3.setText("3"); btn3.setBackground(null); btn3.setEnabled(true);
        btn4.setText("4"); btn4.setBackground(null); btn4.setEnabled(true);
        btn5.setText("5"); btn5.setBackground(null); btn5.setEnabled(true);
        btn6.setText("6"); btn6.setBackground(null); btn6.setEnabled(true);
        btn7.setText("7"); btn7.setBackground(null); btn7.setEnabled(true);
        btn8.setText("8"); btn8.setBackground(null); btn8.setEnabled(true);
        btn9.setText("9"); btn9.setBackground(null); btn9.setEnabled(true);

        isJogador1Turno = true;
        empate = false;
        contVez = 0;
      
        paneljogoVelha.getBtnJogarNovamente().setText("Jogar Novamente");
        paneljogoVelha.getLblResultado().setText("");
    	paneljogoVelha.getBtnJogarNovamente().setVisible(false);
    }   
}
