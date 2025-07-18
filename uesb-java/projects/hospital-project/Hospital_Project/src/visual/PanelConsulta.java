package visual;

import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.border.LineBorder;
import javax.swing.JComboBox;
import javax.swing.JTextField;
import javax.swing.JTextArea;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.DefaultComboBoxModel;

public class PanelConsulta extends JPanel {
	private JLabel lblCadastroConsultas;
	private JLabel lblDadosConsulta;
	private JPanel panelDadosPessoais;
	private JTextField textFieldMedico;
	private JLabel lblMedico;
	private JLabel lblTipoConsulta;
	private JTextField textFieldQueixaPaciente;
	private JLabel lblQueixaPaciente;
	private JLabel lblTipoConvenio;
	private JLabel lblObservacoes;
	private JTextArea textAreaObservacoes;
	private JComboBox comboBoxTipoConvenio;
	private JTextField textFieldPaciente;
	private JLabel lblPaciente;
	private JComboBox comboBoxTipoConsulta;
	private JTextArea textAreaMateriaisUtilizados;
	private JLabel lblMateriaisUtilizados;
	private JButton btnLimpar;
	private JButton btnCadastrar;
	private JTextField textFieldData;
	private JLabel lblData;
	private JTextField textFieldHora;
	private JLabel lblHora;
	
	
	private JComboBox<String> Medico;
	private JComboBox<String> Paciente;
	private JComboBox<String> comboBoxMateriaisUtilizados;


	public PanelConsulta() {
		setBackground(new Color(83, 169, 255));
		this.setSize(940, 920);
		setLayout(null);
		add(getLblCadastroConsultas());
		add(getLblDadosConsulta());
		add(getPanelDadosPessoais());
		add(getBtnLimpar());
		add(getBtnCadastrar());
	}
	public JLabel getLblCadastroConsultas() {
		if (lblCadastroConsultas == null) {
			lblCadastroConsultas = new JLabel("Cadastro de Consultas");
			lblCadastroConsultas.setForeground(Color.WHITE);
			lblCadastroConsultas.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblCadastroConsultas.setBounds(300, 33, 340, 37);
		}
		return lblCadastroConsultas;
	}
	public JLabel getLblDadosConsulta() {
		if (lblDadosConsulta == null) {
			lblDadosConsulta = new JLabel("Dados da consulta");
			lblDadosConsulta.setForeground(Color.WHITE);
			lblDadosConsulta.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosConsulta.setBounds(69, 128, 229, 31);
		}
		return lblDadosConsulta;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(69, 169, 800, 459);
			panelDadosPessoais.add(getMedico());
			panelDadosPessoais.add(getLblMedico());
			panelDadosPessoais.add(getLblTipoConsulta());
			panelDadosPessoais.add(getTextFieldQueixaPaciente());
			panelDadosPessoais.add(getLblQueixaPaciente());
			panelDadosPessoais.add(getLblTipoConvenio());
			panelDadosPessoais.add(getLblObservacoes());
			panelDadosPessoais.add(getComboBoxTipoConvenio());
			panelDadosPessoais.add(getPaciente());
			panelDadosPessoais.add(getLblPaciente());
			panelDadosPessoais.add(getComboBoxTipoConsulta());
			panelDadosPessoais.add(getTextAreaMateriaisUtilizados());
			//panelDadosPessoais.add(getLblMateriaisUtilizados());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getTextFieldHora());
			panelDadosPessoais.add(getLblHora());
	        panelDadosPessoais.add(getComboBoxMateriaisUtilizados());
			panelDadosPessoais.add(getTextAreaObservacoes());
			

		}
		return panelDadosPessoais;
	}
	public JComboBox<String> getMedico(){
		if(Medico == null) {
			Medico = new JComboBox<>();
			Medico.setBackground(new Color(255, 255, 255));
			Medico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Medico.setModel(new DefaultComboBoxModel<>(new String[] {"Selecione um médico"}));
			Medico.setBounds(10, 37, 370, 32);
		}
	
		return Medico;
	}
	public JLabel getLblMedico() {
		if (lblMedico == null) {
			lblMedico = new JLabel("Médico:");
			lblMedico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblMedico.setBounds(10, 10, 200, 32);
		}
		return lblMedico;
	}
	public JLabel getLblTipoConsulta() {
		if (lblTipoConsulta == null) {
			lblTipoConsulta = new JLabel("Tipo de Consulta");
			lblTipoConsulta.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoConsulta.setBounds(10, 82, 128, 32);
		}
		return lblTipoConsulta;
	}
	public JTextField getTextFieldQueixaPaciente() {
		if (textFieldQueixaPaciente == null) {
			textFieldQueixaPaciente = new JTextField();
			textFieldQueixaPaciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldQueixaPaciente.setBounds(198, 112, 371, 32);
		}
		return textFieldQueixaPaciente;
	}
	public JLabel getLblQueixaPaciente() {
		if (lblQueixaPaciente == null) {
			lblQueixaPaciente = new JLabel("Queixa do paciente");
			lblQueixaPaciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblQueixaPaciente.setBounds(198, 82, 200, 32);
		}
		return lblQueixaPaciente;
	}
	public JLabel getLblTipoConvenio() {
		if (lblTipoConvenio == null) {
			lblTipoConvenio = new JLabel("Convênio:");
			lblTipoConvenio.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoConvenio.setBounds(579, 82, 211, 32);
		}
		return lblTipoConvenio;
	}
	public JLabel getLblObservacoes() {
		if (lblObservacoes == null) {
			lblObservacoes = new JLabel("Observações");
			lblObservacoes.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblObservacoes.setBounds(10, 254, 150, 32);
		}
		return lblObservacoes;
	}
	public JTextArea getTextAreaObservacoes() {
		if (textAreaObservacoes == null) {
			textAreaObservacoes = new JTextArea();
			textAreaObservacoes.setBounds(10, 286, 373, 163);
			textAreaObservacoes.setFont(new Font("Monospaced", Font.PLAIN, 15));
		}
		return textAreaObservacoes;
	}
	public JComboBox getComboBoxTipoConvenio() {
		if (comboBoxTipoConvenio == null) {
			comboBoxTipoConvenio = new JComboBox();
			comboBoxTipoConvenio.setModel(new DefaultComboBoxModel(new String[] {"Selecione um plano", "Plano Básico", "Plano Bronze", "Plano Prata", "Plano Ouro", "Plano Diamante"}));
			comboBoxTipoConvenio.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoConvenio.setBackground(Color.WHITE);
			comboBoxTipoConvenio.setBounds(579, 112, 211, 32);
		}
		return comboBoxTipoConvenio;
	}
	public JComboBox<String> getPaciente(){
		if(Paciente == null) {
			Paciente = new JComboBox<>();
			Paciente.setBackground(new Color(255, 255, 255));
			Paciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Paciente.setModel(new DefaultComboBoxModel<>(new String[] {"Selecione um paciente"}));
			Paciente.setBounds(390, 37, 400, 32);
		}
	
		return Paciente;
	}
	public JLabel getLblPaciente() {
		if (lblPaciente == null) {
			lblPaciente = new JLabel("Paciente:");
			lblPaciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPaciente.setBounds(390, 10, 397, 32);
		}
		return lblPaciente;
	}
	public JComboBox getComboBoxTipoConsulta() {
		if (comboBoxTipoConsulta == null) {
			comboBoxTipoConsulta = new JComboBox();
			comboBoxTipoConsulta.setModel(new DefaultComboBoxModel(new String[] {"Selecione um tipo de consulta", "Consulta 1", "Consulta 2", "Consulta 3"}));
			comboBoxTipoConsulta.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoConsulta.setBackground(Color.WHITE);
			comboBoxTipoConsulta.setBounds(10, 112, 178, 32);
		}
		return comboBoxTipoConsulta;
	}
	public JTextArea getTextAreaMateriaisUtilizados() {
		if (textAreaMateriaisUtilizados == null) {
			textAreaMateriaisUtilizados = new JTextArea();
			textAreaMateriaisUtilizados.setFont(new Font("Monospaced", Font.PLAIN, 15));
			textAreaMateriaisUtilizados.setBounds(396, 286, 394, 163);
			textAreaMateriaisUtilizados.setVisible(false);
		}
		return textAreaMateriaisUtilizados;
	}
	
	/*public JLabel getLblMateriaisUtilizados() {
		if (lblMateriaisUtilizados == null) {
			lblMateriaisUtilizados = new JLabel("Materiais utilizados");
			lblMateriaisUtilizados.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblMateriaisUtilizados.setBounds(396, 254, 150, 32);
		}
		return lblMateriaisUtilizados;
	}*/
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(531, 638, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnCadastrar() {
		if (btnCadastrar == null) {
			btnCadastrar = new JButton();
			btnCadastrar.setText("CADASTRAR");
			btnCadastrar.setForeground(new Color(0, 0, 205));
			btnCadastrar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnCadastrar.setBounds(722, 638, 147, 40);
		}
		return btnCadastrar;
	}
	public JTextField getTextFieldData() {
		if (textFieldData == null) {
			textFieldData = new JTextField();
			textFieldData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldData.setBounds(12, 184, 126, 32);
		}
		return textFieldData;
	}
	public JLabel getLblData() {
		if (lblData == null) {
			lblData = new JLabel("Data");
			lblData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblData.setBounds(12, 154, 47, 32);
		}
		return lblData;
	}
	public JTextField getTextFieldHora() {
		if (textFieldHora == null) {
			textFieldHora = new JTextField();
			textFieldHora.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldHora.setBounds(148, 184, 126, 32);
		}
		return textFieldHora;
	}
	public JLabel getLblHora() {
		if (lblHora == null) {
			lblHora = new JLabel("Horário");
			lblHora.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblHora.setBounds(150, 161, 49, 19);
		}
		return lblHora;
	}
	
	public JComboBox<String> getComboBoxMateriaisUtilizados() {
		if (comboBoxMateriaisUtilizados == null) {
			comboBoxMateriaisUtilizados = new JComboBox();
			comboBoxMateriaisUtilizados.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxMateriaisUtilizados.setModel(new DefaultComboBoxModel(new String[] {"Selecione um material"}));
			comboBoxMateriaisUtilizados.setBounds(284, 183, 298, 32);
			comboBoxMateriaisUtilizados.setBackground(Color.WHITE);

			
		}
		return comboBoxMateriaisUtilizados;
	}
	
	
}
