package visual;

import java.awt.Color;
import java.awt.Font;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.border.LineBorder;
import javax.swing.GroupLayout;
import javax.swing.GroupLayout.Alignment;

public class PanelCadastrarMaterial extends JPanel {
	
	private JTextField nomeMaterial;
	
	private JLabel lblNomeMaterial;
	private JTextField quantEstoque;
	private JLabel lblQuantidadeEstoque;
	private JTextField quantMimEstoque;
	private JLabel lblQuantidadeMinimaEstoque;
	private JTextField nomeFornecedor;
	private JLabel lblFornecedor;
	private JTextField preco;
	private JLabel lblPreco;
	private JButton btnLimpar;
	private JButton btnCadastrar;
	private JLabel lblDadosCadastro;
	
	public PanelCadastrarMaterial() {
		setBackground(new Color(83, 169, 255));
		this.setSize(940, 790);
		setLayout(null);
		add(PanelInformacoesMateriais());
		
		
		JLabel lblPanelCadastrarMateriais = new JLabel("Cadastro dos Materiais");
		lblPanelCadastrarMateriais.setBounds(295, 33, 349, 33);
		lblPanelCadastrarMateriais.setForeground(new Color(255, 255, 255));
		lblPanelCadastrarMateriais.setFont(new Font("Tahoma", Font.BOLD, 30));
	    add(lblPanelCadastrarMateriais);
	    add(getBtnLimpar());
	    add(getBtnCadastrar());
	    add(getLblDadosCadastro());
	}
	
	public JPanel PanelInformacoesMateriais() {
		JPanel PanelInformacoesMateriais = new JPanel();
		PanelInformacoesMateriais.setBounds(134, 169, 696, 385);
		PanelInformacoesMateriais.setBorder(new LineBorder(new Color(192, 192, 192), 1, true));
		PanelInformacoesMateriais.setLayout(null);
		PanelInformacoesMateriais.add(getLblNomeMaterial());
		PanelInformacoesMateriais.add(getTextFieldNomeMaterial());
		PanelInformacoesMateriais.add(getLblQuantidadeEstoque());
		PanelInformacoesMateriais.add(getQuantEstoque());
		PanelInformacoesMateriais.add(getLblQuantidadeMinimaEstoque());
		PanelInformacoesMateriais.add(getQuantMimEstoque());
		PanelInformacoesMateriais.add(getLblFornecedor());
		PanelInformacoesMateriais.add(getNomeFornecedor());
		PanelInformacoesMateriais.add(getLblPreco());
		PanelInformacoesMateriais.add(getPreco());
		
		return PanelInformacoesMateriais;
	}
	
	public JTextField getTextFieldNomeMaterial() {
	    if (nomeMaterial == null) {
	        nomeMaterial = new JTextField();
	        nomeMaterial.setBounds(11, 41, 675, 32);
	        nomeMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
	    }
	    return nomeMaterial;
	}

	public JLabel getLblNomeMaterial() {
	    if (lblNomeMaterial == null) {
	        lblNomeMaterial = new JLabel("Nome do Material:");
	        lblNomeMaterial.setBounds(11, 11, 200, 32);
	        lblNomeMaterial.setFont(new Font("Tahoma", Font.PLAIN, 15));
	    }
	    return lblNomeMaterial;
	}
	public JTextField getQuantEstoque() {
		if (quantEstoque == null) {
			quantEstoque = new JTextField();
			quantEstoque.setBounds(11, 113, 675, 32);
			quantEstoque.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return quantEstoque;
	}
	public JLabel getLblQuantidadeEstoque() {
		if (lblQuantidadeEstoque == null) {
			lblQuantidadeEstoque = new JLabel("Quantidade em Estoque:");
			lblQuantidadeEstoque.setBounds(11, 83, 200, 32);
			lblQuantidadeEstoque.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return lblQuantidadeEstoque;
	}
	public JTextField getQuantMimEstoque() {
		if (quantMimEstoque == null) {
			quantMimEstoque = new JTextField();
			quantMimEstoque.setBounds(11, 185, 675, 32);
			quantMimEstoque.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return quantMimEstoque;
	}
	public JLabel getLblQuantidadeMinimaEstoque() {
		if (lblQuantidadeMinimaEstoque == null) {
			lblQuantidadeMinimaEstoque = new JLabel("Quantidade Mínima em Estoque:");
			lblQuantidadeMinimaEstoque.setBounds(11, 155, 220, 32);
			lblQuantidadeMinimaEstoque.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return lblQuantidadeMinimaEstoque;
	}
	public JTextField getNomeFornecedor() {
		if (nomeFornecedor == null) {
			nomeFornecedor = new JTextField();
			nomeFornecedor.setBounds(11, 257, 675, 32);
			nomeFornecedor.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return nomeFornecedor;
	}
	public JLabel getLblFornecedor() {
		if (lblFornecedor == null) {
			lblFornecedor = new JLabel("Fornecedor:");
			lblFornecedor.setBounds(11, 227, 220, 32);
			lblFornecedor.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return lblFornecedor;
	}
	public JTextField getPreco() {
		if (preco == null) {
			preco = new JTextField();
			preco.setBounds(11, 329, 675, 32);
			preco.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return preco;
	}
	public JLabel getLblPreco() {
		if (lblPreco == null) {
			lblPreco = new JLabel("Preço:");
			lblPreco.setBounds(11, 299, 220, 32);
			lblPreco.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return lblPreco;
	}
	public JButton getBtnLimpar() {
		if (btnLimpar == null) {
			btnLimpar = new JButton();
			btnLimpar.setBounds(493, 564, 156, 40);
			btnLimpar.setText("LIMPAR");
			btnLimpar.setForeground(new Color(0, 0, 205));
			btnLimpar.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return btnLimpar;
	}
	public JButton getBtnCadastrar() {
		if (btnCadastrar == null) {
			btnCadastrar = new JButton();
			btnCadastrar.setBounds(684, 564, 147, 40);
			btnCadastrar.setText("CADASTRAR");
			btnCadastrar.setForeground(new Color(0, 0, 205));
			btnCadastrar.setFont(new Font("Tahoma", Font.PLAIN, 15));
		}
		return btnCadastrar;
	}
	public JLabel getLblDadosCadastro() {
		if (lblDadosCadastro == null) {
			lblDadosCadastro = new JLabel("Dados do cadastro");
			lblDadosCadastro.setForeground(Color.WHITE);
			lblDadosCadastro.setFont(new Font("Tahoma", Font.BOLD, 25));
			lblDadosCadastro.setBounds(134, 128, 296, 31);
		}
		return lblDadosCadastro;
	}
}
