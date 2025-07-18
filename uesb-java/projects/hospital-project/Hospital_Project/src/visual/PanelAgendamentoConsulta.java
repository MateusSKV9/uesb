package visual;

import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.border.LineBorder;
import javax.swing.JTextField;
import java.awt.Font;
import javax.swing.JLabel;
import javax.swing.JTextArea;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;

public class PanelAgendamentoConsulta extends JPanel {
	private JPanel panelDadosPessoais;
	private JLabel lblMedico;
	private JTextField textFieldData;
	private JLabel lblData;
	private JLabel lblPaciente;
	private JLabel lblDadosDoAgendamento;
	private JLabel lblAgendamentoDeConsultas;
	private JLabel lblHorario;
	private JTextField textFieldHorario;
	private JButton btnLimpar;
	private JButton btnAgendar;
	
	private JComboBox<String> Medico;
	private JComboBox<String> Paciente;
	
	public PanelAgendamentoConsulta() {
		setBackground(new Color(89, 169, 255));
		this.setSize(960, 790);
		setLayout(null);
		add(getPanelDadosPessoais());
		add(getLblDadosDoAgendamento());
		add(getLblAgendamentoDeConsultas());
		add(getBtnLimpar());
		add(getBtnAgendar());
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(79, 169, 800, 167);
			panelDadosPessoais.add(getLblMedico());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getPaciente());
			panelDadosPessoais.add(getMedico());
			panelDadosPessoais.add(getLblPaciente());
			panelDadosPessoais.add(getLblHorario());
			panelDadosPessoais.add(getTextFieldHorario());
		}
		return panelDadosPessoais;
	}
	
	public JComboBox<String> getMedico(){
		if(Medico == null) {
			Medico = new JComboBox<>();
			Medico.setBackground(new Color(255, 255, 255));
			Medico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Medico.setModel(new DefaultComboBoxModel<>(new String[] {"Selecione um médico"}));
			Medico.setBounds(10, 40, 373, 32);
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
	public JTextField getTextFieldData() {
		if (textFieldData == null) {
			textFieldData = new JTextField();
			textFieldData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldData.setBounds(10, 112, 109, 32);
		}
		return textFieldData;
	}
	public JLabel getLblData() {
		if (lblData == null) {
			lblData = new JLabel("Data");
			lblData.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblData.setBounds(10, 82, 109, 32);
		}
		return lblData;
	}
	
	
	public JComboBox<String> getPaciente(){
		if(Paciente == null) {
			Paciente = new JComboBox<>();
			Paciente.setBackground(new Color(255, 255, 255));
			Paciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Paciente.setModel(new DefaultComboBoxModel<>(new String[] {"Selecione um paciente"}));
			Paciente.setBounds(393, 40, 397, 32);
		}
	
		return Paciente;
	}
	
	
	
	public JLabel getLblPaciente() {
		if (lblPaciente == null) {
			lblPaciente = new JLabel("Paciente:");
			lblPaciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPaciente.setBounds(393, 10, 397, 32);
		}
		return lblPaciente;
	}
	public JLabel getLblDadosDoAgendamento() {
		if (lblDadosDoAgendamento == null) {
			lblDadosDoAgendamento = new JLabel("Dados do agendamento");
			lblDadosDoAgendamento.setForeground(Color.WHITE);
			lblDadosDoAgendamento.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosDoAgendamento.setBounds(79, 128, 296, 31);
		}
		return lblDadosDoAgendamento;
	}
	public JLabel getLblAgendamentoDeConsultas() {
		if (lblAgendamentoDeConsultas == null) {
			lblAgendamentoDeConsultas = new JLabel("Agendamento de Consultas");
			lblAgendamentoDeConsultas.setForeground(Color.WHITE);
			lblAgendamentoDeConsultas.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblAgendamentoDeConsultas.setBounds(271, 35, 417, 37);
		}
		return lblAgendamentoDeConsultas;
	}
	public JLabel getLblHorario() {
		if (lblHorario == null) {
			lblHorario = new JLabel("Horário");
			lblHorario.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblHorario.setBounds(129, 82, 109, 32);
		}
		return lblHorario;
	}
	public JTextField getTextFieldHorario() {
		if (textFieldHorario == null) {
			textFieldHorario = new JTextField();
			textFieldHorario.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldHorario.setBounds(129, 112, 109, 32);
		}
		return textFieldHorario;
	}
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(541, 346, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnAgendar() {
		if (btnAgendar == null) {
			btnAgendar = new JButton();
			btnAgendar.setText("AGENDAR");
			btnAgendar.setForeground(new Color(0, 0, 205));
			btnAgendar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnAgendar.setBounds(732, 346, 147, 40);
		}
		return btnAgendar;
	}
}
