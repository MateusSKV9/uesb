package visual;

import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.border.LineBorder;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JTextPane;
import javax.swing.JButton;

public class PanelPesquisaHorario extends JPanel {
	private JLabel lblPesquisaDeHorarios;
	private JPanel panelDadosPessoais;
	private JLabel lblTipoExame;
	private JLabel lblMedico;
	private JComboBox comboBoxTipoExame;
	private JTextField textFieldData;
	private JLabel lblData;
	private JLabel lblDadosPesquisa;
	private JTextPane textPainelHorario;
	private JLabel lblPainelHorarios;
	private JButton btnLimpar;
	private JButton btnPesquisar;
	private JComboBox<String> Medico;
	public PanelPesquisaHorario() {
		this.setSize(960, 790);
		setBackground(new Color(89, 169, 255));
		setLayout(null);
		add(getLblPesquisaDeHorarios());
		add(getPanelDadosPessoais());
		add(getLblDadosPesquisa());
		add(getBtnLimpar());
		add(getBtnPesquisar());
	}

	public JLabel getLblPesquisaDeHorarios() {
		if (lblPesquisaDeHorarios == null) {
			lblPesquisaDeHorarios = new JLabel("Pesquisa de Horários");
			lblPesquisaDeHorarios.setForeground(Color.WHITE);
			lblPesquisaDeHorarios.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblPesquisaDeHorarios.setBounds(320, 33, 320, 37);
		}
		return lblPesquisaDeHorarios;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(80, 169, 800, 461);
			panelDadosPessoais.add(getLblTipoExame());
			panelDadosPessoais.add(getLblMedico());
			panelDadosPessoais.add(getComboBoxTipoExame());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getTextPainelHorario());
			panelDadosPessoais.add(getLblPainelHorarios());
			panelDadosPessoais.add(getMedico());
		}
		return panelDadosPessoais;
	}
	public JLabel getLblTipoExame() {
		if (lblTipoExame == null) {
			lblTipoExame = new JLabel("Tipo de Exame");
			lblTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoExame.setBounds(447, 10, 128, 32);
		}
		return lblTipoExame;
	}
	public JLabel getLblMedico() {
		if (lblMedico == null) {
			lblMedico = new JLabel("Médico:");
			lblMedico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblMedico.setBounds(10, 10, 397, 32);
		}
		return lblMedico;
	}
	public JComboBox getComboBoxTipoExame() {
		if (comboBoxTipoExame == null) {
			comboBoxTipoExame = new JComboBox();
			comboBoxTipoExame.setModel(new DefaultComboBoxModel(new String[] {"Selelcione um tipo de exame", "Exames físicos", "Exames laboratoriais", "Imagens", "Biópsia", "Patologia e análise clínica"}));
			comboBoxTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoExame.setBackground(Color.WHITE);
			comboBoxTipoExame.setBounds(447, 40, 224, 32);
		}
		return comboBoxTipoExame;
	}
	public JTextField getTextFieldData() {
		if (textFieldData == null) {
			textFieldData = new JTextField();
			textFieldData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldData.setBounds(681, 40, 109, 32);
		}
		return textFieldData;
	}
	public JLabel getLblData() {
		if (lblData == null) {
			lblData = new JLabel("Data");
			lblData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblData.setBounds(681, 10, 109, 32);
		}
		return lblData;
	}
	public JLabel getLblDadosPesquisa() {
		if (lblDadosPesquisa == null) {
			lblDadosPesquisa = new JLabel("Dados da pesquisa");
			lblDadosPesquisa.setForeground(Color.WHITE);
			lblDadosPesquisa.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosPesquisa.setBounds(80, 128, 296, 31);
		}
		return lblDadosPesquisa;
	}
	public JTextPane getTextPainelHorario() {
		if (textPainelHorario == null) {
			textPainelHorario = new JTextPane();
			textPainelHorario.setBounds(10, 113, 780, 344);
		}
		return textPainelHorario;
	}
	public JLabel getLblPainelHorarios() {
		if (lblPainelHorarios == null) {
			lblPainelHorarios = new JLabel("Horários");
			lblPainelHorarios.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPainelHorarios.setBounds(10, 82, 109, 32);
		}
		return lblPainelHorarios;
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
	public JButton getBtnPesquisar() {
		if (btnPesquisar == null) {
			btnPesquisar = new JButton();
			btnPesquisar.setText("PESQUISAR");
			btnPesquisar.setForeground(new Color(0, 0, 205));
			btnPesquisar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnPesquisar.setBounds(733, 640, 147, 40);
		}
		return btnPesquisar;
	}
	public JComboBox<String> getMedico() {
		if (Medico == null) {
			Medico = new JComboBox<String>();
			Medico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Medico.setBackground(Color.WHITE);
			Medico.setBounds(10, 40, 427, 32);
		}
		return Medico;
	}
}
