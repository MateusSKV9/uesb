package visual;

import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.border.LineBorder;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JTextPane;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;

public class PanelRelatorioFinanceiro extends JPanel {
	private JLabel lblRelatorioFinanceiro;
	private JLabel lblDadosRelatrio;
	private JPanel panelDadosPessoais;
	private JLabel lblPeriodo;
	private JTextField textFieldData;
	private JLabel lblData;
	private JTextPane textPainelFinanceiro;
	private JLabel lblPainelFinanceiro;
	private JComboBox comboBoxTipoFormato;
	private JComboBox comboBoxPeriodo;

	private JLabel lblTipoFormato;
	private JButton btnLimpar;
	private JButton btnGerar;
	private JButton btnImprimir;

	
	public PanelRelatorioFinanceiro() {
		this.setSize(960, 790);
		setBackground(new Color(83, 169, 255));
		setLayout(null);
		add(getLblRelatorioFinanceiro());
		add(getLblDadosRelatrio());
		add(getPanelDadosPessoais());
		add(getBtnLimpar());
		add(getBtnGerar());
		add(getBtnImprimir());
	}

	public JLabel getLblRelatorioFinanceiro() {
		if (lblRelatorioFinanceiro == null) {
			lblRelatorioFinanceiro = new JLabel("Relatório Financeiro");
			lblRelatorioFinanceiro.setForeground(Color.WHITE);
			lblRelatorioFinanceiro.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblRelatorioFinanceiro.setBounds(323, 33, 313, 37);
		}
		return lblRelatorioFinanceiro;
	}
	public JLabel getLblDadosRelatrio() {
		if (lblDadosRelatrio == null) {
			lblDadosRelatrio = new JLabel("Dados do relatório");
			lblDadosRelatrio.setForeground(Color.WHITE);
			lblDadosRelatrio.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosRelatrio.setBounds(80, 128, 296, 31);
		}
		return lblDadosRelatrio;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(80, 169, 800, 461);
			panelDadosPessoais.add(getComboBoxPeriodo());
			panelDadosPessoais.add(getLblPeriodo());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getTextPainelFinanceiro());
			panelDadosPessoais.add(getLblPainelFinanceiro());
			panelDadosPessoais.add(getComboBoxTipoFormato());
			panelDadosPessoais.add(getLblTipoFormato());
		}
		return panelDadosPessoais;
	}
	
	public JLabel getLblPeriodo() {
		if (lblPeriodo == null) {
			lblPeriodo = new JLabel("Período");
			lblPeriodo.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPeriodo.setBounds(10, 10, 299, 32);
		}
		return lblPeriodo;
	}
	public JTextField getTextFieldData() {
		if (textFieldData == null) {
			textFieldData = new JTextField();
			textFieldData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldData.setBounds(319, 40, 109, 32);
		}
		return textFieldData;
	}
	public JLabel getLblData() {
		if (lblData == null) {
			lblData = new JLabel("Data");
			lblData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblData.setBounds(319, 9, 109, 32);
		}
		return lblData;
	}
	public JTextPane getTextPainelFinanceiro() {
		if (textPainelFinanceiro == null) {
			textPainelFinanceiro = new JTextPane();
			textPainelFinanceiro.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textPainelFinanceiro.setBounds(10, 113, 780, 344);
		}
		return textPainelFinanceiro;
	}
	public JLabel getLblPainelFinanceiro() {
		if (lblPainelFinanceiro == null) {
			lblPainelFinanceiro = new JLabel("Painel");
			lblPainelFinanceiro.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPainelFinanceiro.setBounds(10, 82, 109, 32);
		}
		return lblPainelFinanceiro;
	}
	public JComboBox getComboBoxTipoFormato() {
		if (comboBoxTipoFormato == null) {
			comboBoxTipoFormato = new JComboBox();
			comboBoxTipoFormato.setModel(new DefaultComboBoxModel(new String[] {"Selelcione um formato", "PDF", "Excel"}));
			comboBoxTipoFormato.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoFormato.setBackground(Color.WHITE);
			comboBoxTipoFormato.setBounds(438, 40, 247, 32);
		}
		return comboBoxTipoFormato;
	}
	public JLabel getLblTipoFormato() {
		if (lblTipoFormato == null) {
			lblTipoFormato = new JLabel("Formato");
			lblTipoFormato.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoFormato.setBounds(438, 10, 103, 32);
		}
		return lblTipoFormato;
	}
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(542, 640, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnGerar() {
		if (btnGerar == null) {
			btnGerar = new JButton();
			btnGerar.setText("GERAR");
			btnGerar.setForeground(new Color(0, 0, 205));
			btnGerar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnGerar.setBounds(733, 640, 147, 40);
		}
		return btnGerar;
	}
	
	public JButton getBtnImprimir() {
		if (btnImprimir == null) {
			btnImprimir = new JButton();
			btnImprimir.setText("IMPRIMIR");
			btnImprimir.setForeground(new Color(0, 0, 205));
			btnImprimir.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnImprimir.setBounds(80, 640, 147, 40);
		}
		return btnImprimir;
	}
	
	public JComboBox getComboBoxPeriodo() {
		if (comboBoxPeriodo == null) {
			comboBoxPeriodo = new JComboBox();
			comboBoxPeriodo.setModel(new DefaultComboBoxModel(new String[] {"Selecione um período", "I semestre", "II semestre"}));
			comboBoxPeriodo.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxPeriodo.setBackground(Color.WHITE);
			comboBoxPeriodo.setBounds(10, 40, 299, 32);
		}
		return comboBoxPeriodo;
	}
}
