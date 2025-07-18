package visual;

import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.ImageIcon;
import java.awt.Color;
import javax.swing.JPanel;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Frame extends JFrame {
	private JLabel labelTitlePanel;
	private JButton buttonLancar;
	private JLabel bola;
	private JPanel panel;
	
	public Frame(){
		setSize(600, 800);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
		getContentPane().setLayout(null);
		getContentPane().add(getLabelTitlePanel());
		getContentPane().add(getButtonLancar());
		getContentPane().add(getBola());
		getContentPane().add(getPanel());
		setVisible(true);
	}
	
	public JLabel getLabelTitlePanel() {
		if (labelTitlePanel == null) {
			labelTitlePanel = new JLabel("Desafio Bola Caindo");
			labelTitlePanel.setFont(new Font("Tahoma", Font.PLAIN, 25));
			labelTitlePanel.setBounds(181, 10, 222, 35);
		}
		return labelTitlePanel;
	}
	
	public JButton getButtonLancar() {
		if (buttonLancar == null) {
			buttonLancar = new JButton("COMEÇAR ");
			buttonLancar.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
				}
			});
			buttonLancar.setFont(new Font("Tahoma", Font.PLAIN, 14));
			buttonLancar.setBounds(371, 64, 118, 35);
		}
		return buttonLancar;
	}
	public JLabel getBola() {
		if (bola == null) {
			bola = new JLabel("");
			bola.setIcon(new ImageIcon(Frame.class.getResource("/assets/bola (1).png")));
			bola.setBounds(150, 60, 32, 32);
		}
		return bola;
	}
	private JPanel getPanel() {
		if (panel == null) {
			panel = new JPanel();
			panel.setBackground(new Color(0, 255, 64));
			panel.setBounds(64, 753, 457, 10);
		}
		return panel;
	}
}
