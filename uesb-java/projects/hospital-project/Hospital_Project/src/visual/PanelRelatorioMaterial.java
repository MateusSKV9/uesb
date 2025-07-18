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

public class PanelRelatorioMaterial extends JPanel {
	private JLabel lblRelatorioMaterial;
	private JLabel lblDadosRelatrio;
	private JPanel panelDadosPessoais;
	private JTextPane textPainelMaterial;
	private JLabel lblPainelMaterial;
	private JTextField textFieldPeriodo;
	private JLabel lblPeriodo;
	private JLabel lblTipoMaterial;
	private JComboBox comboBoxTipoMaterial;
	private JTextField textFieldData;
	private JLabel lblData;
	private JLabel lblTipoFormato;
	private JComboBox comboBoxTipoFormato;
	private JButton btnLimpar;
	private JButton btnGerar;
	private JButton btnImprimir;
	
	private JComboBox comboBoxPeriodo;

	
	public PanelRelatorioMaterial() {
		setBackground(new Color(83, 169, 255));
		this.setSize(960, 790);
		setLayout(null);
		add(getLblRelatorioMaterial());
		add(getLblDadosRelatrio());
		add(getPanelDadosPessoais());
		add(getBtnLimpar());
		add(getBtnGerar());
		add(getBtnImprimir());

	}

	public JLabel getLblRelatorioMaterial() {
		if (lblRelatorioMaterial == null) {
			lblRelatorioMaterial = new JLabel("Relatório de Material");
			lblRelatorioMaterial.setForeground(Color.WHITE);
			lblRelatorioMaterial.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblRelatorioMaterial.setBounds(320, 33, 320, 37);
		}
		return lblRelatorioMaterial;
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
			panelDadosPessoais.add(getTextPainelMaterial());
			panelDadosPessoais.add(getLblPainelMaterial());
			panelDadosPessoais.add(getLblPeriodo());
			panelDadosPessoais.add(getLblTipoMaterial());
			panelDadosPessoais.add(getComboBoxTipoMaterial());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getLblTipoFormato());
			panelDadosPessoais.add(getComboBoxTipoFormato());
			panelDadosPessoais.add(getComboBoxPeriodo());
		}
		return panelDadosPessoais;
	}
	public JTextPane getTextPainelMaterial() {
		if (textPainelMaterial == null) {
			textPainelMaterial = new JTextPane();
			textPainelMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textPainelMaterial.setBounds(10, 113, 780, 344);
		}
		return textPainelMaterial;
	}
	private JLabel getLblPainelMaterial() {
		if (lblPainelMaterial == null) {
			lblPainelMaterial = new JLabel("Painel");
			lblPainelMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPainelMaterial.setBounds(10, 82, 109, 32);
		}
		return lblPainelMaterial;
	}
	public JTextField getTextFieldPeriodo() {
		if (textFieldPeriodo == null) {
			textFieldPeriodo = new JTextField();
			textFieldPeriodo.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldPeriodo.setBounds(10, 40, 249, 32);
		}
		return textFieldPeriodo;
	}
	public JLabel getLblPeriodo() {
		if (lblPeriodo == null) {
			lblPeriodo = new JLabel("Período");
			lblPeriodo.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPeriodo.setBounds(10, 10, 249, 32);
		}
		return lblPeriodo;
	}
	public JLabel getLblTipoMaterial() {
		if (lblTipoMaterial == null) {
			lblTipoMaterial = new JLabel("Tipo de Material");
			lblTipoMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoMaterial.setBounds(269, 10, 128, 32);
		}
		return lblTipoMaterial;
	}
	public JComboBox getComboBoxTipoMaterial() {
		if (comboBoxTipoMaterial == null) {
			comboBoxTipoMaterial = new JComboBox();
			comboBoxTipoMaterial.setModel(new DefaultComboBoxModel(new String[] {"Selecione um tipo de material", "Material A", "Material B", "Material C"}));
			comboBoxTipoMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoMaterial.setBackground(Color.WHITE);
			comboBoxTipoMaterial.setBounds(269, 40, 224, 32);
		}
		return comboBoxTipoMaterial;
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
	public JLabel getLblTipoFormato() {
		if (lblTipoFormato == null) {
			lblTipoFormato = new JLabel("Formato");
			lblTipoFormato.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoFormato.setBounds(622, 10, 103, 32);
		}
		return lblTipoFormato;
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
