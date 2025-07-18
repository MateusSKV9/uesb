package visual;

import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.border.LineBorder;

import java.awt.Color;

import javax.swing.BorderFactory;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JLabel;
import java.awt.Font;

public class PanelExame extends JPanel {
	private JLabel lblPanelCadastrarExame;
	private JLabel lblNomeExame;
	private JLabel lblDescricao;
	private JLabel lblValorParticular;
	private JLabel lblMateriaisUtilizados;
	private JLabel lblMedico; 
	private JLabel lblDadosExame;
	private JLabel lblTipoExame;
	
	private JComboBox<String> TipoExame;
	private JComboBox<String> Medico;
	
	private JTextField textFieldNomeExame;
	private JTextArea textAreaDescricao;
	private JTextField textFieldValorParticular;
	//private JTextField textFieldMedico;
	
	private JPanel panelDadosExame;
	
	private JButton btnLimpar;
	private JButton btnCadastrar;
	private JComboBox<String> comboBoxMateriaisUtilizados;
	
	
	public PanelExame() {
		setBackground(new Color(83, 169, 255));
		this.setSize(940, 920);
		setLayout(null);
		add(getLblPanelCadastrarExame());
		add(getLblDadosExame());
		add(getPanelDadosExame());
		add(getBtnLimpar());
		add(getBtnCadastrar());
	}
		
	public JPanel getPanelDadosExame() {
	    if (panelDadosExame == null) {
	        panelDadosExame = new JPanel();
	        panelDadosExame.setLayout(null);
	        panelDadosExame.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
	        panelDadosExame.setBounds(69, 169, 800, 375);

	        panelDadosExame.add(getLblNomeExame());
	        panelDadosExame.add(getLblDescricao());
	        panelDadosExame.add(getLblValorParticular());
	        panelDadosExame.add(getLblMateriaisUtilizados());
	        panelDadosExame.add(getLblMedico());
	        panelDadosExame.add(getLblTipoExame());
	       
	        panelDadosExame.add(getTipoExame());
	       
	        panelDadosExame.add(getTextFieldNomeExame());
	        panelDadosExame.add(getTextAreaDescricao());
	        panelDadosExame.add(getTextFieldValorParticular());
	        panelDadosExame.add(getMedico());
	        panelDadosExame.add(getComboBoxMateriaisUtilizados());
	        //panelDadosExame.add(getTextFieldMedico());
	    }
	    return panelDadosExame;
	}

	public JLabel getLblPanelCadastrarExame() {
		if (lblPanelCadastrarExame == null) {
			lblPanelCadastrarExame = new JLabel("Cadastro de Exames");
			lblPanelCadastrarExame.setBounds(313, 33, 314, 37);
			lblPanelCadastrarExame.setForeground(Color.WHITE);
			lblPanelCadastrarExame.setFont(new Font("Tahoma", Font.BOLD, 30));
		}
		return lblPanelCadastrarExame;
	}
	
	public JLabel getLblDadosExame() {
		if (lblDadosExame == null) {
			lblDadosExame = new JLabel("Dados do exame");
			lblDadosExame.setForeground(Color.WHITE);
			lblDadosExame.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosExame.setBounds(69, 128, 229, 31);
		}
		return lblDadosExame;
	}
	
	public JLabel getLblNomeExame() {
		if (lblNomeExame == null) {
			lblNomeExame = new JLabel("Nome do Exame:");
			lblNomeExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			lblNomeExame.setBounds(420, 11, 200, 32);
		}
		return lblNomeExame;
	}
	
	public JLabel getLblDescricao() {
	    if (lblDescricao == null) {
	        lblDescricao = new JLabel("Descrição:");
	        lblDescricao.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        lblDescricao.setBounds(10, 159, 200, 32);
	    }
	    return lblDescricao;
	}

	public JLabel getLblValorParticular() {
	    if (lblValorParticular == null) {
	        lblValorParticular = new JLabel("Valor Particular:");
	        lblValorParticular.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        lblValorParticular.setBounds(420, 81, 200, 32);
	    }
	    return lblValorParticular;
	}

	public JLabel getLblMateriaisUtilizados() {
	    if (lblMateriaisUtilizados == null) {
	        lblMateriaisUtilizados = new JLabel("Materiais Utilizados:");
	        lblMateriaisUtilizados.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        lblMateriaisUtilizados.setBounds(420, 159, 200, 32);
	    }
	    return lblMateriaisUtilizados;
	}

	public JLabel getLblMedico() {
	    if (lblMedico == null) {
	        lblMedico = new JLabel("Médico:");
	        lblMedico.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        lblMedico.setBounds(10, 11, 200, 32);
	    }
	    return lblMedico;
	}
	
	public JLabel getLblTipoExame() {
	    if (lblTipoExame == null) {
	    	lblTipoExame = new JLabel("Tipo de Exame");
	        lblTipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        lblTipoExame.setBounds(10, 81, 200, 32);
	    }
	    return lblTipoExame;
	}

	public JTextField getTextFieldNomeExame() {
	    if (textFieldNomeExame == null) {
	        textFieldNomeExame = new JTextField();
	        textFieldNomeExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        textFieldNomeExame.setBounds(420, 37, 370, 32);
	    }
	    return textFieldNomeExame;
	}

	public JTextArea getTextAreaDescricao() {
	    if (textAreaDescricao == null) {
	        textAreaDescricao = new JTextArea();
	        textAreaDescricao.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        textAreaDescricao.setLineWrap(true);
	        textAreaDescricao.setWrapStyleWord(true);
	        textAreaDescricao.setBounds(10, 189, 370, 175);
	        textAreaDescricao.setBorder(BorderFactory.createLineBorder(Color.GRAY));
	    }
	    return textAreaDescricao;
	}

	public JTextField getTextFieldValorParticular() {
	    if (textFieldValorParticular == null) {
	        textFieldValorParticular = new JTextField();
	        textFieldValorParticular.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        textFieldValorParticular.setBounds(420, 116, 370, 32);
	    }
	    return textFieldValorParticular;
	}

	/*public JTextField getTextFieldMedico() {
	    if (textFieldMedico == null) {
	        textFieldMedico = new JTextField();
	        textFieldMedico.setFont(new Font("Tahoma", Font.PLAIN, 15));
	        textFieldMedico.setBounds(10, 37, 370, 32);
	    }
	    return textFieldMedico;
	}*/
	
	public JComboBox<String> getMedico(){
		if(Medico == null) {
			Medico = new JComboBox<>();
			Medico.setBackground(new Color(255, 255, 255));
			Medico.setFont(new Font("Tahoma", Font.PLAIN, 15));
			Medico.setModel(new DefaultComboBoxModel<>(new String[] {}));
			Medico.setBounds(10, 37, 370, 32);
		}
	
		return Medico;
	}
	
	public JComboBox<String> getTipoExame(){
		if(TipoExame == null) {
			TipoExame = new JComboBox();
			TipoExame.setBackground(new Color(255, 255, 255));
			TipoExame.setFont(new Font("Tahoma", Font.PLAIN, 15));
			TipoExame.setModel(new DefaultComboBoxModel(new String[] {"Selecione um tipo de exame", "Exames físicos", "Exames laboratoriais", "Imagens", "Biópsia", "Patologia e análise clínica"}));
			TipoExame.setBounds(10, 117, 370, 32);
		}
	
		return TipoExame;
	}

	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnLimpar.setBounds(531, 554, 156, 40);
		}
		return btnLimpar;
	}
	public JButton getBtnCadastrar() {
		if (btnCadastrar == null) {
			btnCadastrar = new JButton();
			btnCadastrar.setText("CADASTRAR");
			btnCadastrar.setForeground(new Color(0, 0, 205));
			btnCadastrar.setFont(new Font("Tahoma", Font.PLAIN, 15));
			btnCadastrar.setBounds(722, 554, 147, 40);
		}
		return btnCadastrar;
	}
	public JComboBox<String> getComboBoxMateriaisUtilizados() {
		if (comboBoxMateriaisUtilizados == null) {
			comboBoxMateriaisUtilizados = new JComboBox();
			comboBoxMateriaisUtilizados.setFont(new Font("Tahoma", Font.PLAIN, 15));
			comboBoxMateriaisUtilizados.setModel(new DefaultComboBoxModel(new String[] {"Selecione um material"}));
			comboBoxMateriaisUtilizados.setBounds(420, 189, 298, 32);
			comboBoxMateriaisUtilizados.setBackground(Color.WHITE);

		}
		return comboBoxMateriaisUtilizados;
	}
}
