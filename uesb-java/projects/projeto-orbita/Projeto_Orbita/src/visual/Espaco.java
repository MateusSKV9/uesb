package visual;

import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Font;

import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

import java.awt.BorderLayout;
import javax.swing.ImageIcon;
import java.awt.Dimension;

public class Espaco extends JPanel {
	private JLabel lblSol;
	private JLabel lblTerra;
	
	public Espaco() {
		this.setBackground(new Color(42, 42, 42));
		this.setLayout(null);
		add(getLblSol());
		add(getLblTerra());
		this.setSize(800, 800);
		
		this.setVisible(true);
		this.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Orbitando...");
		lblNewLabel.setFont(new Font("Segoe UI Black", Font.PLAIN, 30));
		lblNewLabel.setForeground(new Color(255, 255, 255));
		lblNewLabel.setBounds(309, 32, 182, 42);
		add(lblNewLabel);
	}
	
	public JLabel getLblSol() {
		if (lblSol == null) {
			lblSol = new JLabel("");
			lblSol.setIcon(new ImageIcon(Espaco.class.getResource("/Controlador/imagens/sol.png")));
			lblSol.setBounds(361, 349, 64, 64);
		}
		return lblSol;
	}
	
	public JLabel getLblTerra() {
		if (lblTerra == null) {
			lblTerra = new JLabel("");
			lblTerra.setIcon(new ImageIcon(Espaco.class.getResource("/Controlador/imagens/planeta-terra.png")));
			lblTerra.setBounds(158, 375, 32, 32);
		}
		return lblTerra;
	}
}
