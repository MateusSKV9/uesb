package visual;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JPanel;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JSeparator;
import javax.swing.border.LineBorder;
import java.awt.Color;
import javax.swing.UIManager;
import javax.swing.border.CompoundBorder;
import javax.swing.JTextField;
import javax.swing.JRadioButton;
import javax.swing.JButton;

public class PanelCadastrarProfessor extends JPanel implements ActionListener {
	private JLabel lblProfessorDaUesb;
	private JSeparator separator;
	private JPanel panel;
	private JTextField textField;
	private JLabel lblNewLabel_2_1;
	private JTextField textField_1;
	private JLabel lblNewLabel_2_1_1;
	private JTextField textField_2;
	private JLabel lblNewLabel_2_1_2;
	private JTextField textField_3;
	private JLabel lblNewLabel_2_1_3;
	private JTextField textField_4;
	private JLabel lblNewLabel_2_1_4;
	private JTextField textField_5;
	private JLabel lblNewLabel_2_1_8;
	private JTextField textField_6;
	private JLabel lblNewLabel_2_1_9;
	private JLabel lblDadosPessoais;
	private JRadioButton rdbtnNewRadioButton;
	private JLabel lblNewLabel_2_1_10;
	private JRadioButton rdbtnFeminino;
	private JSeparator separator_2_2;
	private JPanel panel_2;
	private JLabel lblEndereo;
	private JLabel lblNewLabel_2_1_7;
	private JTextField textField_7;
	private JTextField textField_8;
	private JLabel lblNewLabel_2_1_7_1;
	private JTextField textField_9;
	private JLabel lblNewLabel_2_1_7_4;
	private JTextField textField_10;
	private JLabel lblNewLabel_2_1_7_5;
	private JTextField textField_11;
	private JLabel lblNewLabel_2_1_7_2;
	private JTextField textField_12;
	private JLabel lblNewLabel_2_1_7_3;
	private JSeparator separator_2_1;
	private JTextField textField_13;
	private JLabel lblNewLabel_2_1_7_2_1;
	private JPanel panel_1;
	private JLabel lblDadosAcadmicos;
	private JSeparator separator_1;
	private JLabel lblNewLabel_2_1_5;
	private JTextField textField_14;
	private JTextField textField_15;
	private JLabel lblNewLabel_2_1_6;
	private JSeparator separator_2;
	private JButton btnLimpar;
	private JButton botaoCadastrar;
	public PanelCadastrarProfessor() {
		setBackground(new Color(255, 255, 255));
		setBorder(new LineBorder(new Color(0, 0, 0)));
		setLayout(null);
		add(getLblProfessorDaUesb());
		add(getSeparator());
		add(getPanel());
		add(getPanel_2());
		add(getPanel_1());
		add(getBtnLimpar());
		add(getBotaoCadastrar());
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		
	}
	private JLabel getLblProfessorDaUesb() {
		if (lblProfessorDaUesb == null) {
			lblProfessorDaUesb = new JLabel("Professor da UESB");
			lblProfessorDaUesb.setFont(new Font("Tahoma", Font.PLAIN, 20));
			lblProfessorDaUesb.setBounds(339, 38, 172, 25);
		}
		return lblProfessorDaUesb;
	}
	private JSeparator getSeparator() {
		if (separator == null) {
			separator = new JSeparator();
			separator.setBounds(0, 87, 860, 2);
		}
		return separator;
	}
	private JPanel getPanel() {
		if (panel == null) {
			panel = new JPanel();
			panel.setLayout(null);
			panel.setBorder(new CompoundBorder());
			panel.setBackground(UIManager.getColor("Button.background"));
			panel.setBounds(10, 109, 390, 490);
			panel.add(getTextField());
			panel.add(getLblNewLabel_2_1());
			panel.add(getTextField_1());
			panel.add(getLblNewLabel_2_1_1());
			panel.add(getTextField_2());
			panel.add(getLblNewLabel_2_1_2());
			panel.add(getTextField_3());
			panel.add(getLblNewLabel_2_1_3());
			panel.add(getTextField_4());
			panel.add(getLblNewLabel_2_1_4());
			panel.add(getTextField_5());
			panel.add(getLblNewLabel_2_1_8());
			panel.add(getTextField_6());
			panel.add(getLblNewLabel_2_1_9());
			panel.add(getLblDadosPessoais());
			panel.add(getRdbtnNewRadioButton());
			panel.add(getLblNewLabel_2_1_10());
			panel.add(getRdbtnFeminino());
			panel.add(getSeparator_2_2());
		}
		return panel;
	}
	private JTextField getTextField() {
		if (textField == null) {
			textField = new JTextField();
			textField.setColumns(10);
			textField.setBounds(25, 74, 150, 25);
		}
		return textField;
	}
	private JLabel getLblNewLabel_2_1() {
		if (lblNewLabel_2_1 == null) {
			lblNewLabel_2_1 = new JLabel("Nome");
			lblNewLabel_2_1.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1.setBounds(25, 56, 96, 13);
		}
		return lblNewLabel_2_1;
	}
	private JTextField getTextField_1() {
		if (textField_1 == null) {
			textField_1 = new JTextField();
			textField_1.setColumns(10);
			textField_1.setBounds(25, 127, 150, 25);
		}
		return textField_1;
	}
	private JLabel getLblNewLabel_2_1_1() {
		if (lblNewLabel_2_1_1 == null) {
			lblNewLabel_2_1_1 = new JLabel("CPF");
			lblNewLabel_2_1_1.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_1.setBounds(25, 109, 96, 13);
		}
		return lblNewLabel_2_1_1;
	}
	private JTextField getTextField_2() {
		if (textField_2 == null) {
			textField_2 = new JTextField();
			textField_2.setColumns(10);
			textField_2.setBounds(25, 180, 150, 25);
		}
		return textField_2;
	}
	private JLabel getLblNewLabel_2_1_2() {
		if (lblNewLabel_2_1_2 == null) {
			lblNewLabel_2_1_2 = new JLabel("RG");
			lblNewLabel_2_1_2.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_2.setBounds(25, 162, 96, 13);
		}
		return lblNewLabel_2_1_2;
	}
	private JTextField getTextField_3() {
		if (textField_3 == null) {
			textField_3 = new JTextField();
			textField_3.setColumns(10);
			textField_3.setBounds(25, 233, 150, 25);
		}
		return textField_3;
	}
	private JLabel getLblNewLabel_2_1_3() {
		if (lblNewLabel_2_1_3 == null) {
			lblNewLabel_2_1_3 = new JLabel("Matrícula");
			lblNewLabel_2_1_3.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_3.setBounds(25, 215, 96, 13);
		}
		return lblNewLabel_2_1_3;
	}
	private JTextField getTextField_4() {
		if (textField_4 == null) {
			textField_4 = new JTextField();
			textField_4.setColumns(10);
			textField_4.setBounds(25, 286, 150, 25);
		}
		return textField_4;
	}
	private JLabel getLblNewLabel_2_1_4() {
		if (lblNewLabel_2_1_4 == null) {
			lblNewLabel_2_1_4 = new JLabel("Título de eleitor");
			lblNewLabel_2_1_4.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_4.setBounds(25, 268, 114, 13);
		}
		return lblNewLabel_2_1_4;
	}
	private JTextField getTextField_5() {
		if (textField_5 == null) {
			textField_5 = new JTextField();
			textField_5.setColumns(10);
			textField_5.setBounds(149, 339, 220, 25);
		}
		return textField_5;
	}
	private JLabel getLblNewLabel_2_1_8() {
		if (lblNewLabel_2_1_8 == null) {
			lblNewLabel_2_1_8 = new JLabel("Email");
			lblNewLabel_2_1_8.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_8.setBounds(149, 321, 187, 13);
		}
		return lblNewLabel_2_1_8;
	}
	private JTextField getTextField_6() {
		if (textField_6 == null) {
			textField_6 = new JTextField();
			textField_6.setColumns(10);
			textField_6.setBounds(25, 339, 114, 25);
		}
		return textField_6;
	}
	private JLabel getLblNewLabel_2_1_9() {
		if (lblNewLabel_2_1_9 == null) {
			lblNewLabel_2_1_9 = new JLabel("Telefone");
			lblNewLabel_2_1_9.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_9.setBounds(25, 321, 96, 13);
		}
		return lblNewLabel_2_1_9;
	}
	private JLabel getLblDadosPessoais() {
		if (lblDadosPessoais == null) {
			lblDadosPessoais = new JLabel("Dados pessoais");
			lblDadosPessoais.setFont(new Font("Tahoma", Font.PLAIN, 20));
			lblDadosPessoais.setBounds(122, 10, 143, 25);
		}
		return lblDadosPessoais;
	}
	private JRadioButton getRdbtnNewRadioButton() {
		if (rdbtnNewRadioButton == null) {
			rdbtnNewRadioButton = new JRadioButton("Masculino");
			rdbtnNewRadioButton.setSelected(true);
			rdbtnNewRadioButton.setFont(new Font("Tahoma", Font.PLAIN, 15));
			rdbtnNewRadioButton.setBounds(195, 71, 96, 27);
		}
		return rdbtnNewRadioButton;
	}
	private JLabel getLblNewLabel_2_1_10() {
		if (lblNewLabel_2_1_10 == null) {
			lblNewLabel_2_1_10 = new JLabel("Gênero");
			lblNewLabel_2_1_10.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_10.setBounds(266, 56, 55, 13);
		}
		return lblNewLabel_2_1_10;
	}
	private JRadioButton getRdbtnFeminino() {
		if (rdbtnFeminino == null) {
			rdbtnFeminino = new JRadioButton("Feminino");
			rdbtnFeminino.setFont(new Font("Tahoma", Font.PLAIN, 15));
			rdbtnFeminino.setBounds(293, 71, 91, 27);
		}
		return rdbtnFeminino;
	}
	private JSeparator getSeparator_2_2() {
		if (separator_2_2 == null) {
			separator_2_2 = new JSeparator();
			separator_2_2.setBounds(0, 45, 390, 2);
		}
		return separator_2_2;
	}
	private JPanel getPanel_2() {
		if (panel_2 == null) {
			panel_2 = new JPanel();
			panel_2.setLayout(null);
			panel_2.setBorder(new CompoundBorder());
			panel_2.setBounds(425, 373, 425, 277);
			panel_2.add(getLblEndereo());
			panel_2.add(getLblNewLabel_2_1_7());
			panel_2.add(getTextField_7());
			panel_2.add(getTextField_8());
			panel_2.add(getLblNewLabel_2_1_7_1());
			panel_2.add(getTextField_9());
			panel_2.add(getLblNewLabel_2_1_7_4());
			panel_2.add(getTextField_10());
			panel_2.add(getLblNewLabel_2_1_7_5());
			panel_2.add(getTextField_11());
			panel_2.add(getLblNewLabel_2_1_7_2());
			panel_2.add(getTextField_12());
			panel_2.add(getLblNewLabel_2_1_7_3());
			panel_2.add(getSeparator_2_1());
			panel_2.add(getTextField_13());
			panel_2.add(getLblNewLabel_2_1_7_2_1());
		}
		return panel_2;
	}
	private JLabel getLblEndereo() {
		if (lblEndereo == null) {
			lblEndereo = new JLabel("Endereço");
			lblEndereo.setFont(new Font("Tahoma", Font.PLAIN, 20));
			lblEndereo.setBounds(161, 10, 88, 25);
		}
		return lblEndereo;
	}
	private JLabel getLblNewLabel_2_1_7() {
		if (lblNewLabel_2_1_7 == null) {
			lblNewLabel_2_1_7 = new JLabel("Cidade");
			lblNewLabel_2_1_7.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7.setBounds(20, 111, 96, 13);
		}
		return lblNewLabel_2_1_7;
	}
	private JTextField getTextField_7() {
		if (textField_7 == null) {
			textField_7 = new JTextField();
			textField_7.setColumns(10);
			textField_7.setBounds(20, 129, 156, 25);
		}
		return textField_7;
	}
	private JTextField getTextField_8() {
		if (textField_8 == null) {
			textField_8 = new JTextField();
			textField_8.setColumns(10);
			textField_8.setBounds(186, 129, 156, 25);
		}
		return textField_8;
	}
	private JLabel getLblNewLabel_2_1_7_1() {
		if (lblNewLabel_2_1_7_1 == null) {
			lblNewLabel_2_1_7_1 = new JLabel("Estado");
			lblNewLabel_2_1_7_1.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7_1.setBounds(186, 111, 96, 13);
		}
		return lblNewLabel_2_1_7_1;
	}
	private JTextField getTextField_9() {
		if (textField_9 == null) {
			textField_9 = new JTextField();
			textField_9.setColumns(10);
			textField_9.setBounds(20, 76, 383, 25);
		}
		return textField_9;
	}
	private JLabel getLblNewLabel_2_1_7_4() {
		if (lblNewLabel_2_1_7_4 == null) {
			lblNewLabel_2_1_7_4 = new JLabel("Logradouro");
			lblNewLabel_2_1_7_4.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7_4.setBounds(20, 58, 96, 13);
		}
		return lblNewLabel_2_1_7_4;
	}
	private JTextField getTextField_10() {
		if (textField_10 == null) {
			textField_10 = new JTextField();
			textField_10.setColumns(10);
			textField_10.setBounds(352, 129, 51, 25);
		}
		return textField_10;
	}
	private JLabel getLblNewLabel_2_1_7_5() {
		if (lblNewLabel_2_1_7_5 == null) {
			lblNewLabel_2_1_7_5 = new JLabel("Nº");
			lblNewLabel_2_1_7_5.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7_5.setBounds(352, 111, 96, 13);
		}
		return lblNewLabel_2_1_7_5;
	}
	private JTextField getTextField_11() {
		if (textField_11 == null) {
			textField_11 = new JTextField();
			textField_11.setColumns(10);
			textField_11.setBounds(20, 182, 239, 25);
		}
		return textField_11;
	}
	private JLabel getLblNewLabel_2_1_7_2() {
		if (lblNewLabel_2_1_7_2 == null) {
			lblNewLabel_2_1_7_2 = new JLabel("Bairro");
			lblNewLabel_2_1_7_2.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7_2.setBounds(20, 164, 96, 13);
		}
		return lblNewLabel_2_1_7_2;
	}
	private JTextField getTextField_12() {
		if (textField_12 == null) {
			textField_12 = new JTextField();
			textField_12.setColumns(10);
			textField_12.setBounds(269, 182, 134, 25);
		}
		return textField_12;
	}
	private JLabel getLblNewLabel_2_1_7_3() {
		if (lblNewLabel_2_1_7_3 == null) {
			lblNewLabel_2_1_7_3 = new JLabel("CEP");
			lblNewLabel_2_1_7_3.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7_3.setBounds(269, 164, 134, 13);
		}
		return lblNewLabel_2_1_7_3;
	}
	private JSeparator getSeparator_2_1() {
		if (separator_2_1 == null) {
			separator_2_1 = new JSeparator();
			separator_2_1.setBounds(0, 46, 425, 2);
		}
		return separator_2_1;
	}
	private JTextField getTextField_13() {
		if (textField_13 == null) {
			textField_13 = new JTextField();
			textField_13.setColumns(10);
			textField_13.setBounds(20, 235, 383, 25);
		}
		return textField_13;
	}
	private JLabel getLblNewLabel_2_1_7_2_1() {
		if (lblNewLabel_2_1_7_2_1 == null) {
			lblNewLabel_2_1_7_2_1 = new JLabel("Complemento");
			lblNewLabel_2_1_7_2_1.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_7_2_1.setBounds(20, 217, 383, 13);
		}
		return lblNewLabel_2_1_7_2_1;
	}
	private JPanel getPanel_1() {
		if (panel_1 == null) {
			panel_1 = new JPanel();
			panel_1.setLayout(null);
			panel_1.setBorder(new CompoundBorder());
			panel_1.setBounds(425, 109, 425, 254);
			panel_1.add(getLblDadosAcadmicos());
			panel_1.add(getSeparator_1());
			panel_1.add(getLblNewLabel_2_1_5());
			panel_1.add(getTextField_14());
			panel_1.add(getTextField_15());
			panel_1.add(getLblNewLabel_2_1_6());
			panel_1.add(getSeparator_2());
		}
		return panel_1;
	}
	private JLabel getLblDadosAcadmicos() {
		if (lblDadosAcadmicos == null) {
			lblDadosAcadmicos = new JLabel("Dados acadêmicos");
			lblDadosAcadmicos.setFont(new Font("Tahoma", Font.PLAIN, 20));
			lblDadosAcadmicos.setBounds(123, 12, 188, 25);
		}
		return lblDadosAcadmicos;
	}
	private JSeparator getSeparator_1() {
		if (separator_1 == null) {
			separator_1 = new JSeparator();
			separator_1.setBounds(0, 279, 425, 2);
		}
		return separator_1;
	}
	private JLabel getLblNewLabel_2_1_5() {
		if (lblNewLabel_2_1_5 == null) {
			lblNewLabel_2_1_5 = new JLabel("Formação");
			lblNewLabel_2_1_5.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_5.setBounds(25, 58, 96, 13);
		}
		return lblNewLabel_2_1_5;
	}
	private JTextField getTextField_14() {
		if (textField_14 == null) {
			textField_14 = new JTextField();
			textField_14.setColumns(10);
			textField_14.setBounds(25, 76, 177, 25);
		}
		return textField_14;
	}
	private JTextField getTextField_15() {
		if (textField_15 == null) {
			textField_15 = new JTextField();
			textField_15.setColumns(10);
			textField_15.setBounds(25, 129, 177, 25);
		}
		return textField_15;
	}
	private JLabel getLblNewLabel_2_1_6() {
		if (lblNewLabel_2_1_6 == null) {
			lblNewLabel_2_1_6 = new JLabel("Período");
			lblNewLabel_2_1_6.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNewLabel_2_1_6.setBounds(25, 111, 96, 13);
		}
		return lblNewLabel_2_1_6;
	}
	private JSeparator getSeparator_2() {
		if (separator_2 == null) {
			separator_2 = new JSeparator();
			separator_2.setBounds(0, 47, 425, 2);
		}
		return separator_2;
	}
	private JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton("Limpar");
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(634, 672, 103, 32);
		}
		return btnLimpar;
	}
	public JButton getBotaoCadastrar() {
		if (botaoCadastrar == null) {
			botaoCadastrar = new JButton("Cadastrar");
			botaoCadastrar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			botaoCadastrar.setBounds(747, 672, 103, 32);
		}
		return botaoCadastrar;
	}
}
