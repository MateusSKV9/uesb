package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JOptionPane;
import javax.swing.JTextPane;

import visual.PanelRelatorioMaterial;

public class ControladorRelatorioMaterial implements ActionListener {
	PanelRelatorioMaterial panelRelatorioMaterial;

	public ControladorRelatorioMaterial(PanelRelatorioMaterial panelRelatorioMaterial) {
		this.panelRelatorioMaterial = panelRelatorioMaterial;
		addEventos();
	}

	private void addEventos() {
		panelRelatorioMaterial.getBtnGerar().addActionListener(this);
		panelRelatorioMaterial.getBtnLimpar().addActionListener(this);
		panelRelatorioMaterial.getBtnImprimir().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelRelatorioMaterial.getBtnGerar()) {
			gerarRelatorioConsulta();
			listarMateriais(panelRelatorioMaterial.getTextPainelMaterial());
		} else if (e.getSource() == panelRelatorioMaterial.getBtnLimpar()) {
			limparCampos();
		} else if (e.getSource() == panelRelatorioMaterial.getBtnImprimir()) {
			try {
				if (panelRelatorioMaterial.getComboBoxTipoFormato().getSelectedIndex() == 0) {
					throw new IllegalArgumentException("Selecione um tipo de formato.");
				}

				JOptionPane.showMessageDialog(panelRelatorioMaterial, "[SUCESSO ✅ ]:Relatorio imprimido com sucesso!",
						"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
				panelRelatorioMaterial.getComboBoxTipoFormato().setSelectedIndex(0);
			} catch (Exception e2) {
				// TODO: handle exception
				JOptionPane.showMessageDialog(panelRelatorioMaterial, "[ERRO ❌ ]: " + e2.getMessage(), "Erro",
						JOptionPane.WARNING_MESSAGE);
			}

		}
	}

	public void gerarRelatorioConsulta() {
		try {
			String periodo = (String) panelRelatorioMaterial.getComboBoxPeriodo().getSelectedItem();
			String tipoExame = (String) panelRelatorioMaterial.getComboBoxTipoMaterial().getSelectedItem();
			String data = panelRelatorioMaterial.getTextFieldData().getText().trim();
			String formato = (String) panelRelatorioMaterial.getComboBoxTipoFormato().getSelectedItem();

			if (periodo.isEmpty() || tipoExame.isEmpty() || data.isEmpty()) {
				throw new IllegalArgumentException("Os campos  período, tipo e data devem ser preenchidos.");
			}

			if (panelRelatorioMaterial.getComboBoxPeriodo().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um período.");
			}

			if (panelRelatorioMaterial.getComboBoxTipoMaterial().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um tipo de material.");
			}

			if (!data.matches("\\d{2}/\\d{2}/\\d{4}")) {
				throw new IllegalArgumentException("Data deve estar no formato DD/MM/AAAA; Hora: HH:MM.");
			}

			JOptionPane.showMessageDialog(panelRelatorioMaterial, "[SUCESSO ✅ ]:Relatorio gerado com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelRelatorioMaterial, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void listarMateriais(JTextPane textPane) {
		try {

			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosMaterial.txt"));

			StringBuilder conteudo = new StringBuilder();
			String linha;

			while ((linha = br.readLine()) != null) {
				String[] dadosMaterial = linha.split(";");

				if (dadosMaterial.length >= 4) {
					String nomeMaterial = dadosMaterial[0].trim();
					int quantEstoque = Integer.parseInt(dadosMaterial[1].trim());
					int quantMinimaEstoque = Integer.parseInt(dadosMaterial[2].trim());
					String fornecedor = dadosMaterial[3].trim();

					String statusEstoque = quantEstoque < quantMinimaEstoque ? " Estoque Baixo (Mínimo:" + quantMinimaEstoque + ")"  : " Estoque Adequado";

					String materialFormatado = "Material: " + nomeMaterial + " - Quantidade Estoque: " + quantEstoque
							+ " - Fornecedor:" + fornecedor + " - Status:" + statusEstoque;
					conteudo.append(materialFormatado).append("\n");
				}

			}

			// Atualizar o texto no JTextPane
			textPane.setText(conteudo.toString());

			br.close();

		} catch (IOException e) {
			JOptionPane.showMessageDialog(null, "Erro ao carregar materiais: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}

	}

	public void limparCampos() {
		panelRelatorioMaterial.getComboBoxPeriodo().setSelectedIndex(0);
		panelRelatorioMaterial.getComboBoxTipoMaterial().setSelectedIndex(0);
		panelRelatorioMaterial.getTextFieldData().setText("");
		panelRelatorioMaterial.getComboBoxTipoFormato().setSelectedIndex(0);
		panelRelatorioMaterial.getTextPainelMaterial().setText("");
	}
}
