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

public class PanelRelatorioExame extends JPanel {
	private JLabel lblRelatorioExames;
	private JLabel lblDadosRelatorio;
	private JPanel panelDadosPessoais;
	private JLabel lblTipoExame;
	private JLabel lblPeriodo;
	private JComboBox comboBoxTipoExame;
	private JTextField textFieldData;
	private JLabel lblData;
	private JTextPane textPainelExame;
	private JLabel lblPainelExame;
	private JComboBox comboBoxTipoFormato;
	private JLabel lblTipoFormato;
	private JButton btnLimpar;
	private JButton btnGerar;
	private JButton btnImprimir;
	private JComboBox comboBoxPeriodo;
	
	public PanelRelatorioExame() {
		setBackground(new Color(83, 169, 255));
		this.setSize(960, 790);
		setLayout(null);
		add(getLblRelatorioExames());
		add(getLblDadosRelatorio());
		add(getPanelDadosPessoais());
		add(getBtnLimpar());
		add(getBtnGerar());
		add(getBtnImprimir());
		panelDadosPessoais.add(getComboBoxPeriodo());
	}
	public JLabel getLblRelatorioExames() {
		if (lblRelatorioExames == null) {
			lblRelatorioExames = new JLabel("Relatório de Exames");
			lblRelatorioExames.setForeground(Color.WHITE);
			lblRelatorioExames.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblRelatorioExames.setBounds(323, 33, 313, 37);
		}
		return lblRelatorioExames;
	}
	public JLabel getLblDadosRelatorio() {
		if (lblDadosRelatorio == null) {
			lblDadosRelatorio = new JLabel("Dados do relatório");
			lblDadosRelatorio.setForeground(Color.WHITE);
			lblDadosRelatorio.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosRelatorio.setBounds(80, 128, 296, 31);
		}
		return lblDadosRelatorio;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(80, 169, 800, 461);
			panelDadosPessoais.add(getLblTipoExame());
			panelDadosPessoais.add(getLblPeriodo());
			panelDadosPessoais.add(getComboBoxTipoExame());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getTextPainelExame());
			panelDadosPessoais.add(getLblPainelExame());
			panelDadosPessoais.add(getComboBoxTipoFormato());
			panelDadosPessoais.add(getLblTipoFormato());
		}
		return panelDadosPessoais;
	}
	public JLabel getLblTipoExame() {
		if (lblTipoExame == null) {
			lblTipoExame = new JLabel("Tipo de Exame");
			lblTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoExame.setBounds(269, 10, 128, 32);
		}
		return lblTipoExame;
	}
	public JLabel getLblPeriodo() {
		if (lblPeriodo == null) {
			lblPeriodo = new JLabel("Período");
			lblPeriodo.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPeriodo.setBounds(10, 10, 249, 32);
		}
		return lblPeriodo;
	}
	public JComboBox getComboBoxTipoExame() {
		if (comboBoxTipoExame == null) {
			comboBoxTipoExame = new JComboBox();
			comboBoxTipoExame.setModel(new DefaultComboBoxModel(new String[] {"Selelcione um tipo de exame", "Exames físicos", "Exames laboratoriais", "Imagens", "Biópsia", "Patologia e análise clínica"}));
			comboBoxTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoExame.setBackground(Color.WHITE);
			comboBoxTipoExame.setBounds(269, 40, 224, 32);
		}
		return comboBoxTipoExame;
	}
	public JTextField getTextFieldData() {
		if (textFieldData == null) {
			textFieldData = new JTextField();
			textFieldData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldData.setBounds(503, 40, 109, 32);
		}
		return textFieldData;
	}
	public JLabel getLblData() {
		if (lblData == null) {
			lblData = new JLabel("Data");
			lblData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblData.setBounds(503, 10, 109, 32);
		}
		return lblData;
	}
	public JTextPane getTextPainelExame() {
		if (textPainelExame == null) {
			textPainelExame = new JTextPane();
			textPainelExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textPainelExame.setBounds(10, 113, 780, 344);
		}
		return textPainelExame;
	}
	public JLabel getLblPainelExame() {
		if (lblPainelExame == null) {
			lblPainelExame = new JLabel("Painel");
			lblPainelExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPainelExame.setBounds(10, 82, 109, 32);
		}
		return lblPainelExame;
	}
	public JComboBox getComboBoxTipoFormato() {
		if (comboBoxTipoFormato == null) {
			comboBoxTipoFormato = new JComboBox();
			comboBoxTipoFormato.setModel(new DefaultComboBoxModel(new String[] {"Selelcione um formato", "PDF", "Excel"}));
			comboBoxTipoFormato.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoFormato.setBackground(Color.WHITE);
			comboBoxTipoFormato.setBounds(622, 40, 168, 32);
		}
		return comboBoxTipoFormato;
	}
	public JLabel getLblTipoFormato() {
		if (lblTipoFormato == null) {
			lblTipoFormato = new JLabel("Formato");
			lblTipoFormato.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoFormato.setBounds(622, 10, 103, 32);
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
			comboBoxPeriodo.setBounds(10, 40, 249, 32);
		}
		return comboBoxPeriodo;
	}
}
