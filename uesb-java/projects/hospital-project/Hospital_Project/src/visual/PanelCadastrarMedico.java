package visual;

import java.awt.Color;
import java.awt.Font;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextField;
import javax.swing.border.LineBorder;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JSpinner;
import javax.swing.SpinnerDateModel;
import java.util.Date;
import java.util.Calendar;
import javax.swing.JTextArea;
import java.awt.Component;
import java.awt.Dimension;

import javax.swing.Box;

public class PanelCadastrarMedico extends JPanel {
	
	private JButton btnCadastrar;
	private JButton btnLimpar; 
	private JLabel lblNomeMaterial;
	private JTextField textFieldNome;
	private JTextField textFieldCRM;
	private JLabel lblCRM;
	private JTextField textFieldEspecialidade;
	private JLabel lblEspecialidade;
	private JLabel lblHorarioAtendimento;
	private JTextField textFieldValorConsulta;
	private JLabel lblValorConsultaParticular;
	private JTextArea textAreaContato;
	private JLabel lblValorConsultaParticular_2;
	private JLabel tituloEndereco;
	private JLabel lblDadosPessoais;
	
	private JScrollPane scrollPane;
    private JPanel innerPanel;
    private JTextField textFieldHorarioAtendimento;
    private JPanel panelEndereco;
    private JTextField textFieldLogradouro;
    private JLabel lblLogradouro;
    private JTextField textFieldNumero;
    private JLabel lblNumero;
    private JTextField textFieldComplemento;
    private JLabel lblComplemento;
    private JTextField textFieldBairro;
    private JLabel lblBairro;
    private JTextField textFieldCidade;
    private JLabel lblCidade;
    private JTextField textFieldCEP;
    private JLabel lblCEP;
    private JLabel lblEstado;
    private JTextField textFieldEstado;
	
	public PanelCadastrarMedico() {
		setBackground(new Color(83, 169, 255));
		this.setLayout(null);
		this.setSize(940, 790);
		//add(PanelInformacoes());
		
		innerPanel = new JPanel();
		innerPanel.setLayout(null);
		innerPanel.setBackground(new Color(83, 169, 255));
		innerPanel.setPreferredSize(new Dimension(940, 1200));//innerPanel.setPreferredSize(getSize()); 
	    
	    innerPanel.add(PanelInformacoes());
	    innerPanel.add(getbtnCadastrar());
		innerPanel.add(getbtnLimpar());
		innerPanel.add(getLblDadosPessoais());
		innerPanel.add(getTituloEndereco());
	   
	    
	    
	    //Criação do ScrollPanee adicionando o "innerPanel"
	    scrollPane = new JScrollPane(innerPanel);
        scrollPane.setBounds(0, 0, 940, 932);
        add(scrollPane);
		
		
		JLabel lblPanelCadastrarMedico = new JLabel("Cadastro dos Médicos");
		lblPanelCadastrarMedico.setForeground(new Color(255, 255, 255));
		lblPanelCadastrarMedico.setFont(new Font("Tahoma", Font.BOLD, 30));
		lblPanelCadastrarMedico.setSize(331, 33);
		lblPanelCadastrarMedico.setLocation(304, 33); 
	    //add(titlePanelCadastrarMedico);
		
		innerPanel.add(lblPanelCadastrarMedico);
		innerPanel.add(getPanelEndereco_1());

		
		
	}
	
	public JPanel PanelInformacoes() {
		JPanel PanelInformacoes = new JPanel();
		PanelInformacoes.setBorder(new LineBorder(new Color(192, 192, 192)));
		PanelInformacoes.setLayout(null);
		PanelInformacoes.setSize(800, 235);
		PanelInformacoes.setLocation(70, 169);
		PanelInformacoes.add(getLblNomeMaterial());
		PanelInformacoes.add(getTextFieldNome());
		PanelInformacoes.add(getTextFieldCRM());
		PanelInformacoes.add(getLblCRM());
		PanelInformacoes.add(getTextFieldEspecialidade());
		PanelInformacoes.add(getLblEspecialidade());
		PanelInformacoes.add(getLblHorarioAtendimento());
		PanelInformacoes.add(getTextFieldValorConsulta());
		PanelInformacoes.add(getLblValorConsultaParticular());
		PanelInformacoes.add(getTextAreaContato());
		PanelInformacoes.add(getLblValorConsultaParticular_2());
		PanelInformacoes.add(getTextFieldHorarioAtendimento());
		
		return PanelInformacoes;
	}
	
	public JButton getbtnCadastrar() {
		if(btnCadastrar == null) {
			btnCadastrar = new JButton();
			btnCadastrar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnCadastrar.setForeground(new Color(0, 0, 205));
			btnCadastrar.setSize(147,40);
			btnCadastrar.setLocation(723,700);
			btnCadastrar.setText("CADASTRAR");
		}
		return btnCadastrar; 
	}
	public JButton getbtnLimpar() {
		if(btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
				}
			});
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setSize(156,40);
			btnLimpar.setLocation(532,700);
			btnLimpar.setText("LIMPAR");

			
		}
		return btnLimpar; 
	}
	public JLabel getLblNomeMaterial() {
		if (lblNomeMaterial == null) {
			lblNomeMaterial = new JLabel("Nome");
			lblNomeMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNomeMaterial.setBounds(10, 10, 200, 32);
		}
		return lblNomeMaterial;
	}
	public JTextField getTextFieldNome() {
		if (textFieldNome == null) {
			textFieldNome = new JTextField();
			textFieldNome.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldNome.setBounds(10, 40, 372, 32);
		}
		return textFieldNome;
	}
	public JTextField getTextFieldCRM() {
		if (textFieldCRM == null) {
			textFieldCRM = new JTextField();
			textFieldCRM.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldCRM.setBounds(10, 112, 372, 32);
		}
		return textFieldCRM;
	}
	public JLabel getLblCRM() {
		if (lblCRM == null) {
			lblCRM = new JLabel("CRM:");
			lblCRM.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblCRM.setBounds(10, 82, 200, 32);
		}
		return lblCRM;
	}
	public JTextField getTextFieldEspecialidade() {
		if (textFieldEspecialidade == null) {
			textFieldEspecialidade = new JTextField();
			textFieldEspecialidade.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldEspecialidade.setBounds(392, 40, 398, 32);
		}
		return textFieldEspecialidade;
	}
	public JLabel getLblEspecialidade() {
		if (lblEspecialidade == null) {
			lblEspecialidade = new JLabel("Especialidade");
			lblEspecialidade.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblEspecialidade.setBounds(392, 10, 364, 32);
		}
		return lblEspecialidade;
	}
	public JLabel getLblHorarioAtendimento() {
		if (lblHorarioAtendimento == null) {
			lblHorarioAtendimento = new JLabel("Horários de Atendimento:");
			lblHorarioAtendimento.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblHorarioAtendimento.setBounds(10, 154, 200, 32);
		}
		return lblHorarioAtendimento;
	}
	public JTextField getTextFieldValorConsulta() {
		if (textFieldValorConsulta == null) {
			textFieldValorConsulta = new JTextField();
			textFieldValorConsulta.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldValorConsulta.setBounds(220, 184, 162, 32);
		}
		return textFieldValorConsulta;
	}
	public JLabel getLblValorConsultaParticular() {
		if (lblValorConsultaParticular == null) {
			lblValorConsultaParticular = new JLabel("Valor Consulta Particular:");
			lblValorConsultaParticular.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblValorConsultaParticular.setBounds(220, 154, 162, 32);
		}
		return lblValorConsultaParticular;
	}
	public JTextArea getTextAreaContato() {
		if (textAreaContato == null) {
			textAreaContato = new JTextArea();
			textAreaContato.setFont(new Font("Monospaced", Font.PLAIN, 15));
			textAreaContato.setBounds(392, 115, 398, 102);
		}
		return textAreaContato;
	}
	public JLabel getLblValorConsultaParticular_2() {
		if (lblValorConsultaParticular_2 == null) {
			lblValorConsultaParticular_2 = new JLabel("Contato");
			lblValorConsultaParticular_2.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblValorConsultaParticular_2.setBounds(392, 82, 200, 32);
		}
		return lblValorConsultaParticular_2;
	}
	public JLabel getTituloEndereco() {
		if (tituloEndereco == null) {
			tituloEndereco = new JLabel("Endereço");
			tituloEndereco.setForeground(Color.WHITE);
			tituloEndereco.setFont(new Font("Tahoma", Font.BOLD, 25));
			tituloEndereco.setBounds(70, 414, 119, 31);
		}
		return tituloEndereco;
	}
	public JLabel getLblDadosPessoais() {
		if (lblDadosPessoais == null) {
			lblDadosPessoais = new JLabel("Dados Pessoais");
			lblDadosPessoais.setForeground(Color.WHITE);
			lblDadosPessoais.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosPessoais.setBounds(70, 128, 198, 31);
		}
		return lblDadosPessoais;
	}
	public JTextField getTextFieldHorarioAtendimento() {
		if (textFieldHorarioAtendimento == null) {
			textFieldHorarioAtendimento = new JTextField();
			textFieldHorarioAtendimento.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldHorarioAtendimento.setBounds(10, 184, 200, 32);
		}
		return textFieldHorarioAtendimento;
	}
	public JPanel getPanelEndereco_1() {
		if (panelEndereco == null) {
			panelEndereco = new JPanel();
			panelEndereco.setLayout(null);
			panelEndereco.setBorder(new LineBorder(new Color(192, 192, 192)));
			panelEndereco.setBounds(70, 455, 800, 235);
			panelEndereco.add(getTextFieldLogradouro());
			panelEndereco.add(getLblLogradouro_1());
			panelEndereco.add(getTextFieldNumero());
			panelEndereco.add(getLblNmero_1());
			panelEndereco.add(getTextFieldComplemento());
			panelEndereco.add(getLblComplemento_1());
			panelEndereco.add(getTextFieldBairro());
			panelEndereco.add(getLblBairro_1());
			panelEndereco.add(getTextFieldCidade());
			panelEndereco.add(getLblCidade_1());
			panelEndereco.add(getTextFieldCEP());
			panelEndereco.add(getLblCep_1());
			panelEndereco.add(getLblEstado_1());
			panelEndereco.add(getTextFieldEstado());
		}
		return panelEndereco;
	}
	public JTextField getTextFieldLogradouro() {
		if (textFieldLogradouro == null) {
			textFieldLogradouro = new JTextField();
			textFieldLogradouro.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldLogradouro.setBounds(10, 40, 553, 32);
		}
		return textFieldLogradouro;
	}
	public JLabel getLblLogradouro_1() {
		if (lblLogradouro == null) {
			lblLogradouro = new JLabel("Logradouro:");
			lblLogradouro.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblLogradouro.setBounds(10, 10, 200, 32);
		}
		return lblLogradouro;
	}
	public JTextField getTextFieldNumero() {
		if (textFieldNumero == null) {
			textFieldNumero = new JTextField();
			textFieldNumero.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldNumero.setBounds(573, 40, 217, 32);
		}
		return textFieldNumero;
	}
	public JLabel getLblNmero_1() {
		if (lblNumero == null) {
			lblNumero = new JLabel("Número:");
			lblNumero.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNumero.setBounds(573, 10, 201, 32);
		}
		return lblNumero;
	}
	public JTextField getTextFieldComplemento() {
		if (textFieldComplemento == null) {
			textFieldComplemento = new JTextField();
			textFieldComplemento.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldComplemento.setBounds(438, 112, 352, 32);
		}
		return textFieldComplemento;
	}
	public JLabel getLblComplemento_1() {
		if (lblComplemento == null) {
			lblComplemento = new JLabel("Complemento:");
			lblComplemento.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblComplemento.setBounds(438, 82, 201, 32);
		}
		return lblComplemento;
	}
	public JTextField getTextFieldBairro() {
		if (textFieldBairro == null) {
			textFieldBairro = new JTextField();
			textFieldBairro.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldBairro.setBounds(10, 112, 418, 32);
		}
		return textFieldBairro;
	}
	public JLabel getLblBairro_1() {
		if (lblBairro == null) {
			lblBairro = new JLabel("Bairro:");
			lblBairro.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblBairro.setBounds(10, 82, 201, 32);
		}
		return lblBairro;
	}
	public JTextField getTextFieldCidade() {
		if (textFieldCidade == null) {
			textFieldCidade = new JTextField();
			textFieldCidade.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldCidade.setBounds(10, 183, 286, 32);
		}
		return textFieldCidade;
	}
	public JLabel getLblCidade_1() {
		if (lblCidade == null) {
			lblCidade = new JLabel("Cidade:");
			lblCidade.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblCidade.setBounds(10, 153, 201, 32);
		}
		return lblCidade;
	}
	public JTextField getTextFieldCEP() {
		if (textFieldCEP == null) {
			textFieldCEP = new JTextField();
			textFieldCEP.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldCEP.setBounds(306, 183, 189, 32);
		}
		return textFieldCEP;
	}
	public JLabel getLblCep_1() {
		if (lblCEP == null) {
			lblCEP = new JLabel("CEP:");
			lblCEP.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblCEP.setBounds(306, 153, 189, 32);
		}
		return lblCEP;
	}
	public JLabel getLblEstado_1() {
		if (lblEstado == null) {
			lblEstado = new JLabel("Estado:");
			lblEstado.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblEstado.setBounds(504, 153, 189, 32);
		}
		return lblEstado;
	}
	public JTextField getTextFieldEstado() {
		if (textFieldEstado == null) {
			textFieldEstado = new JTextField();
			textFieldEstado.setFont(new Font("Tahoma", Font.PLAIN, 15));
			textFieldEstado.setBounds(504, 183, 286, 32);
		}
		return textFieldEstado;
	}
}
