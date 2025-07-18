package visual;

import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.border.LineBorder;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JTextPane;
import javax.swing.JButton;

public class PanelVisualizacaoAgenda extends JPanel {
	private JLabel lblVisualizacaoAgenda;
	private JPanel panelDadosPessoais;
	private JLabel lblPesquisarData;
	private JLabel lblPesquisarMedico;
	private JLabel lblPainelAgenda;
	private JLabel lblAgenda;
	private JTextField textFieldPesquisarData;
	private JTextPane textPainelAgenda;
	private JButton btnLimpar;
	private JButton btnVisualizar;
	private JComboBox<String> Medico;
	public PanelVisualizacaoAgenda() {
		this.setSize(960, 790);
		setBackground(new Color(89, 169, 255));
		setLayout(null);
		add(getLblVisualizacaoAgenda());
		add(getPanelDadosPessoais());
		add(getLblAgenda());
		add(getBtnLimpar());
		add(getBtnVisualizar());
	}

	public JLabel getLblVisualizacaoAgenda() {
		if (lblVisualizacaoAgenda == null) {
			lblVisualizacaoAgenda = new JLabel("Visualização de Agenda");
			lblVisualizacaoAgenda.setForeground(Color.WHITE);
			lblVisualizacaoAgenda.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblVisualizacaoAgenda.setBounds(301, 33, 358, 37);
		}
		return lblVisualizacaoAgenda;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(80, 153, 800, 472);
			panelDadosPessoais.add(getLblPesquisarData());
			panelDadosPessoais.add(getLblPesquisarMedico());
			panelDadosPessoais.add(getLblPainelAgenda());
			panelDadosPessoais.add(getTextFieldPesquisarData());
			panelDadosPessoais.add(getTextPainelAgenda());
			panelDadosPessoais.add(getMedico());
		}
		return panelDadosPessoais;
	}
	public JLabel getLblPesquisarData() {
		if (lblPesquisarData == null) {
			lblPesquisarData = new JLabel("Pesquisar Data");
			lblPesquisarData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPesquisarData.setBounds(559, 10, 128, 32);
		}
		return lblPesquisarData;
	}
	public JLabel getLblPesquisarMedico() {
		if (lblPesquisarMedico == null) {
			lblPesquisarMedico = new JLabel("Pesquisar Médico");
			lblPesquisarMedico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPesquisarMedico.setBounds(10, 10, 397, 32);
		}
		return lblPesquisarMedico;
	}
	public JLabel getLblPainelAgenda() {
		if (lblPainelAgenda == null) {
			lblPainelAgenda = new JLabel("Agenda");
			lblPainelAgenda.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPainelAgenda.setBounds(10, 82, 109, 32);
		}
		return lblPainelAgenda;
	}
	public JLabel getLblAgenda() {
		if (lblAgenda == null) {
			lblAgenda = new JLabel("Agenda");
			lblAgenda.setForeground(Color.WHITE);
			lblAgenda.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblAgenda.setBounds(80, 114, 94, 31);
		}
		return lblAgenda;
	}
	public JTextField getTextFieldPesquisarData() {
		if (textFieldPesquisarData == null) {
			textFieldPesquisarData = new JTextField();
			textFieldPesquisarData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldPesquisarData.setBounds(559, 40, 231, 32);
		}
		return textFieldPesquisarData;
	}
	public JTextPane getTextPainelAgenda() {
		if (textPainelAgenda == null) {
			textPainelAgenda = new JTextPane();
			textPainelAgenda.setBounds(10, 113, 780, 344);
		}
		return textPainelAgenda;
	}
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(542, 635, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnVisualizar() {
		if (btnVisualizar == null) {
			btnVisualizar = new JButton();
			btnVisualizar.setText("VISUALIZAR");
			btnVisualizar.setForeground(new Color(0, 0, 205));
			btnVisualizar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnVisualizar.setBounds(733, 635, 147, 40);
		}
		return btnVisualizar;
	}
	public JComboBox<String> getMedico() {
		if (Medico == null) {
			Medico = new JComboBox<String>();
			Medico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Medico.setBackground(Color.WHITE);
			Medico.setBounds(10, 40, 539, 32);
		}
		return Medico;
	}
}
