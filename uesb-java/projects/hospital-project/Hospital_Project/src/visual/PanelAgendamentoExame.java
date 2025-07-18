package visual;

import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.border.LineBorder;
import javax.swing.JTextField;
import javax.swing.JTextArea;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;

public class PanelAgendamentoExame extends JPanel {
	private JLabel lblAgendamentoDeExames;
	private JLabel lblDadosDoAgendamento;
	private JPanel panelDadosPessoais;
	private JLabel lblTipoExame;
	//private JTextField textFieldPaciente;
	private JLabel lblPaciente;
	private JComboBox comboBoxTipoExame;
	private JTextField textFieldData;
	private JLabel lblData;
	private JTextField textFieldHorario;
	private JLabel lblHorario;
	private JButton btnLimpar;
	private JButton btnAgendar;
	
	private JComboBox<String> Paciente;
	
	
	public PanelAgendamentoExame() {
		setBackground(new Color(89, 169, 255));
		this.setSize(960, 790);
		setLayout(null);
		add(getLblAgendamentoDeExames());
		add(getLblDadosDoAgendamento());
		add(getPanelDadosPessoais());
		add(getBtnLimpar());
		add(getBtnAgendar());
	}

	public JLabel getLblAgendamentoDeExames() {
		if (lblAgendamentoDeExames == null) {
			lblAgendamentoDeExames = new JLabel("Agendamento de Exames");
			lblAgendamentoDeExames.setForeground(Color.WHITE);
			lblAgendamentoDeExames.setFont(new Font("Tahoma", Font.BOLD, 30));
			lblAgendamentoDeExames.setBounds(287, 35, 386, 37);
		}
		return lblAgendamentoDeExames;
	}
	public JLabel getLblDadosDoAgendamento() {
		if (lblDadosDoAgendamento == null) {
			lblDadosDoAgendamento = new JLabel("Dados do agendamento");
			lblDadosDoAgendamento.setForeground(Color.WHITE);
			lblDadosDoAgendamento.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosDoAgendamento.setBounds(80, 128, 296, 31);
		}
		return lblDadosDoAgendamento;
	}
	public JPanel getPanelDadosPessoais() {
		if (panelDadosPessoais == null) {
			panelDadosPessoais = new JPanel();
			panelDadosPessoais.setLayout(null);
			panelDadosPessoais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
			panelDadosPessoais.setBounds(80, 169, 800, 167);
			panelDadosPessoais.add(getLblTipoExame());
			panelDadosPessoais.add(getPaciente());
			panelDadosPessoais.add(getLblPaciente());
			panelDadosPessoais.add(getComboBoxTipoExame());
			panelDadosPessoais.add(getTextFieldData());
			panelDadosPessoais.add(getLblData());
			panelDadosPessoais.add(getTextFieldHorario());
			panelDadosPessoais.add(getLblHorario());
		}
		return panelDadosPessoais;
	}
	public JLabel getLblTipoExame() {
		if (lblTipoExame == null) {
			lblTipoExame = new JLabel("Tipo de Exame");
			lblTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblTipoExame.setBounds(531, 10, 128, 32);
		}
		return lblTipoExame;
	}
	
	
	public JComboBox<String> getPaciente() {
		if(Paciente == null) {
			Paciente = new JComboBox<>();
			Paciente.setBackground(new Color(255, 255, 255));
			Paciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Paciente.setModel(new DefaultComboBoxModel<>(new String[] {}));
			Paciente.setBounds(10, 40, 511, 32);
		}
	
		return Paciente;
	}
	
	
	public JLabel getLblPaciente() {
		if (lblPaciente == null) {
			lblPaciente = new JLabel("Paciente:");
			lblPaciente.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblPaciente.setBounds(10, 10, 397, 32);
		}
		return lblPaciente;
	}
	public JComboBox getComboBoxTipoExame() {
		if (comboBoxTipoExame == null) {
			comboBoxTipoExame = new JComboBox();
			comboBoxTipoExame.setModel(new DefaultComboBoxModel(new String[] {"Selelcione um tipo de exame", "Exames físicos", "Exames laboratoriais", "Imagens", "Biópsia", "Patologia e análise clínica"}));
			comboBoxTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxTipoExame.setBackground(Color.WHITE);
			comboBoxTipoExame.setBounds(531, 40, 259, 32);
		}
		return comboBoxTipoExame;
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
	public JTextField getTextFieldHorario() {
		if (textFieldHorario == null) {
			textFieldHorario = new JTextField();
			textFieldHorario.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldHorario.setBounds(129, 112, 109, 32);
		}
		return textFieldHorario;
	}
	public JLabel getLblHorario() {
		if (lblHorario == null) {
			lblHorario = new JLabel("Horário");
			lblHorario.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblHorario.setBounds(129, 82, 109, 32);
		}
		return lblHorario;
	}
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(542, 346, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnAgendar() {
		if (btnAgendar == null) {
			btnAgendar = new JButton();
			btnAgendar.setText("AGENDAR");
			btnAgendar.setForeground(new Color(0, 0, 205));
			btnAgendar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnAgendar.setBounds(733, 346, 147, 40);
		}
		return btnAgendar;
	}
}
