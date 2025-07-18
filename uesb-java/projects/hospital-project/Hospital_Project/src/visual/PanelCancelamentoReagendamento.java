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

public class PanelCancelamentoReagendamento extends JPanel {
	private JLabel lblDados;
	private JPanel panelDadosPessoais;
	private JTextPane textPainelCancelamentoReagendamento;
	private JLabel lblPainel;
	private JLabel lblCancelamentoEReagendamento;
	private JButton btnLimpar;
	private JButton btnConfirmar;
	public PanelCancelamentoReagendamento() {
		setBackground(new Color(89, 169, 255));
		this.setSize(960, 790);
		setLayout(null);
		add(getLblDados());
		add(getPanelDadosPessoais());
		add(getLblCancelamentoEReagendamento());
		add(getBtnLimpar());
		add(getBtnConfirmar());
	}

	public JLabel getLblDados() {
		if (lblDados == null) {
			lblDados = new JLabel("Dados");
			lblDados.setForeground(Color.WHITE);
			lblDados.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDados.setBounds(80, 128, 296, 31);
		}
		return lblDados;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(80, 169, 800, 464);
			panelDadosPessoais.add(getTextPainelCancelamentoReagendamento());
			panelDadosPessoais.add(getLblPainel());
		}
		return panelDadosPessoais;
	}
	public JTextPane getTextPainelCancelamentoReagendamento() {
		if (textPainelCancelamentoReagendamento == null) {
			textPainelCancelamentoReagendamento = new JTextPane();
			textPainelCancelamentoReagendamento.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textPainelCancelamentoReagendamento.setBounds(10, 41, 780, 413);
		}
		return textPainelCancelamentoReagendamento;
	}
	public JLabel getLblPainel() {
		if (lblPainel == null) {
			lblPainel = new JLabel("Painel");
			lblPainel.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPainel.setBounds(10, 10, 109, 32);
		}
		return lblPainel;
	}
	public JLabel getLblCancelamentoEReagendamento() {
		if (lblCancelamentoEReagendamento == null) {
			lblCancelamentoEReagendamento = new JLabel("Cancelamento e Reagendamento");
			lblCancelamentoEReagendamento.setForeground(Color.WHITE);
			lblCancelamentoEReagendamento.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblCancelamentoEReagendamento.setBounds(228, 33, 504, 37);
		}
		return lblCancelamentoEReagendamento;
	}
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(542, 643, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnConfirmar() {
		if (btnConfirmar == null) {
			btnConfirmar = new JButton();
			btnConfirmar.setText("CONFIRMAR");
			btnConfirmar.setForeground(new Color(0, 0, 205));
			btnConfirmar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnConfirmar.setBounds(733, 643, 147, 40);
		}
		return btnConfirmar;
	}
}
