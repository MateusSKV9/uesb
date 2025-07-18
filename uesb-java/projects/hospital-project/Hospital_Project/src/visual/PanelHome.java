package visual;

import java.awt.Color;
import java.awt.Font;

import javax.swing.ImageIcon;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class PanelHome extends JPanel {
	private JLabel lblBemVindo;
	private JLabel lblClinicaMaisSaude;
	private JLabel lblImagem;
	public PanelHome() {
		setBackground(new Color(89, 169, 255));
		this.setSize(960, 790);
		setLayout(null);
		add(getLblBemVindo());
		add(getLblClinicaMaisSaude());
		add(getLblImagem());
	}

	public JLabel getLblBemVindo() {
		if (lblBemVindo == null) {
			lblBemVindo = new JLabel("Bem-Vindo(a)!");
			lblBemVindo.setForeground(Color.WHITE);
			lblBemVindo.setFont(new Font("Dialog", Font.PLAIN, 38));
			lblBemVindo.setBounds(355, 48, 249, 49);
		}
		return lblBemVindo;
	}
	public JLabel getLblClinicaMaisSaude() {
		if (lblClinicaMaisSaude == null) {
			lblClinicaMaisSaude = new JLabel("Clínica Mais Saúde");
			lblClinicaMaisSaude.setForeground(Color.WHITE);
			lblClinicaMaisSaude.setFont(new Font("Arial Black", Font.PLAIN, 60));
			lblClinicaMaisSaude.setBounds(168, 307, 623, 85);
		}
		return lblClinicaMaisSaude;
	}
	public JLabel getLblImagem() {
		if (lblImagem == null) {
			lblImagem = new JLabel("");
			lblImagem.setIcon(new ImageIcon("C:\\Users\\mateu\\Downloads\\cuidados-de-saude.png"));
			lblImagem.setBounds(416, 390, 128, 128);
		}
		return lblImagem;
	}
}
