package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.net.URISyntaxException;
import java.net.URL;
import java.util.ArrayList;

import javax.swing.JOptionPane;

import modelo.Material;
import modelo.Medico;
import visual.PanelCadastrarMaterial;

public class ControladorCadastrarMaterial implements ActionListener {
	PanelCadastrarMaterial panelCadastrarMaterial;
	ArrayList<Material> materiaisCadastrados;

	public ControladorCadastrarMaterial(PanelCadastrarMaterial panelCadastrarMaterial) {
		this.panelCadastrarMaterial = panelCadastrarMaterial;
		materiaisCadastrados = new ArrayList<Material>();
		addEventos();
	}
	

	private void addEventos() {
		panelCadastrarMaterial.getBtnCadastrar().addActionListener(this);
		panelCadastrarMaterial.getBtnLimpar().addActionListener(this);
	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelCadastrarMaterial.getBtnCadastrar()) {
			cadastrarMaterial();
		} else if (e.getSource() == panelCadastrarMaterial.getBtnLimpar()) {
			limparCampos();
		}
	}

	public void cadastrarMaterial() {
		try {
			String nomeMaterial = panelCadastrarMaterial.getTextFieldNomeMaterial().getText().trim();
			String fornecedor = panelCadastrarMaterial.getNomeFornecedor().getText().trim();
			String precoText = panelCadastrarMaterial.getPreco().getText().trim();
			String quantEstoqueText = panelCadastrarMaterial.getQuantEstoque().getText().trim();
			String quantMinimaEstoqueText = panelCadastrarMaterial.getQuantMimEstoque().getText().trim();

			if (nomeMaterial.isEmpty() || fornecedor.isEmpty() || precoText.isEmpty() || quantEstoqueText.isEmpty()
					|| quantMinimaEstoqueText.isEmpty()) {
				throw new Exception("Todos os campos devem ser preenchidos!");
			}

			if (!nomeMaterial.matches("^[A-Za-zÀ-ÿ][A-Za-zÀ-ÿ0-9\\s]*$")) {
				throw new Exception("O nome do material deve conter apenas letras e espaços.");
			}

			if (!fornecedor.matches("^[A-Za-zÀ-ÿ][A-Za-zÀ-ÿ0-9\\s]*$")) {
				throw new Exception("O nome do fornecedor deve conter apenas letras e espaços.");
			}

			int quantEstoque = Integer.parseInt(quantEstoqueText);
			int quantMinimaEstoque = Integer.parseInt(quantMinimaEstoqueText);
			float preco = Float.parseFloat(precoText);

			if (quantMinimaEstoque <= 0) {
				throw new Exception("A quantidade mínima em estoque deve ser maior que zero.");
			}

			if (preco <= 0) {
				throw new Exception("O preço deve ser maior que zero.");
			}

			if (quantEstoque <= 0) {
				throw new Exception("A quantidade em estoque deve ser maior que zero.");
			}

			Material material = new Material(nomeMaterial, quantEstoque, quantMinimaEstoque, fornecedor, preco);
			materiaisCadastrados.add(material);
			
			gravarDados(material);

			JOptionPane.showMessageDialog(panelCadastrarMaterial, "[SUCESSO ✅ ]: Material cadastrado com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
			limparCampos();

		} catch (NumberFormatException ex) {
			JOptionPane.showMessageDialog(panelCadastrarMaterial,
					"Por favor, insira valores numéricos válidos para quantidade e preço.", "Erro de Formato",
					JOptionPane.WARNING_MESSAGE);
		} catch (Exception ex) {
			JOptionPane.showMessageDialog(panelCadastrarMaterial, "[ERRO ❌ ]: " + ex.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}
	
	private void gravarDados(Material material) {
	    System.out.println("Diretório atual: " + System.getProperty("user.dir"));
	    
	   
	    
	    // Gravação no arquivo
	    try (BufferedWriter writer = new BufferedWriter(new FileWriter("./dados/dadosMaterial.txt", true))) {
	        writer.write(material.toString());
	        writer.newLine();
	        System.out.println("Dados gravados com sucesso em dadosMaterial.txt:");
	        System.out.println(material.toString());
	    } catch (IOException e) {
	        System.out.println("Erro ao gravar os dados no arquivo:");
	        e.printStackTrace();
	    }
	   
	}

	private void limparCampos() {
		panelCadastrarMaterial.getTextFieldNomeMaterial().setText("");
		panelCadastrarMaterial.getQuantEstoque().setText("");
		panelCadastrarMaterial.getQuantMimEstoque().setText("");
		panelCadastrarMaterial.getNomeFornecedor().setText("");
		panelCadastrarMaterial.getPreco().setText("");
	}
}
