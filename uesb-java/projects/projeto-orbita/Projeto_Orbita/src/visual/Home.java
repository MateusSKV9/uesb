package visual;

import javax.swing.JPanel;
import java.awt.Color;
import java.awt.Dimension;

import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JLabel;
import java.awt.Font;

public class Home extends JPanel {
	private JLabel lblTitulo;
	private JButton btnOrbitar;
	
	public Home() {
		setBackground(new Color(42, 42, 42));
		this.setSize(800, 800);
		setLayout(null);
		add(getBtnOrbitar());
		add(getLblTitulo());
	}
	
	public JLabel getLblTitulo() {
		if (lblTitulo == null) {
			lblTitulo = new JLabel("A ÓRBITA");
			lblTitulo.setForeground(new Color(255, 255, 255));
			lblTitulo.setBackground(new Color(255, 255, 255));
			lblTitulo.setFont(new Font("Segoe UI Black", Font.PLAIN, 40));
			lblTitulo.setBounds(301, 94, 197, 55);
		}
		return lblTitulo;
	}
	
	public JButton getBtnOrbitar() {
		if (btnOrbitar == null) {
			btnOrbitar = new JButton("Orbitar");
			btnOrbitar.setFont(new Font("Tahoma", Font.PLAIN, 25));
			btnOrbitar.setBounds(329, 372, 141, 55);
		
		}
		return btnOrbitar;
	}
}
