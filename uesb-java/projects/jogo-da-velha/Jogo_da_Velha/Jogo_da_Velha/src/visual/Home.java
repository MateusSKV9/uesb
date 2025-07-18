package visual;

import javax.swing.JPanel;
import javax.swing.JButton;
import java.awt.Font;
import javax.swing.JLabel;

public class Home extends JPanel {
	private JButton btnJogar;
	private JLabel lblNewLabel;
	public Home() {
		setLayout(null);
		add(getBtnJogar());
		add(getLblNewLabel());
		
	}
	public JButton getBtnJogar() {
		if (btnJogar == null) {
			btnJogar = new JButton("Jogar");
			btnJogar.setFont(new Font("Comic Sans MS", Font.PLAIN, 25));
			btnJogar.setBounds(160, 234, 179, 132);
		}
		return btnJogar;
	}
	private JLabel getLblNewLabel() {
		if (lblNewLabel == null) {
			lblNewLabel = new JLabel("Jogo da Velha");
			lblNewLabel.setFont(new Font("Comic Sans MS", Font.BOLD, 30));
			lblNewLabel.setBounds(143, 70, 213, 56);
		}
		return lblNewLabel;
	}
}
