package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JOptionPane;
import javax.swing.JTextPane;

import modelo.Agendamento;
import visual.PanelRelatorioExame;

public class ControladorRelatorioExame implements ActionListener {
	PanelRelatorioExame panelRelatorioExame;

	public ControladorRelatorioExame(PanelRelatorioExame panelRelatorioExame) {
		this.panelRelatorioExame = panelRelatorioExame;
		addEventos();
	}

	private void addEventos() {
		panelRelatorioExame.getBtnGerar().addActionListener(this);
		panelRelatorioExame.getBtnLimpar().addActionListener(this);
		panelRelatorioExame.getBtnImprimir().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelRelatorioExame.getBtnGerar()) {
			gerarRelatorioExame();

		} else if (e.getSource() == panelRelatorioExame.getBtnLimpar()) {
			limparCampos();
		} else if (e.getSource() == panelRelatorioExame.getBtnImprimir()) {
			try {
				if (panelRelatorioExame.getComboBoxTipoFormato().getSelectedIndex() == 0) {
					throw new IllegalArgumentException("Selecione um tipo de formato.");
				}

				JOptionPane.showMessageDialog(panelRelatorioExame, "[SUCESSO ✅ ]:Relatorio imprimido com sucesso!",
						"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
				panelRelatorioExame.getComboBoxTipoFormato().setSelectedIndex(0);
			} catch (Exception e2) {
				// TODO: handle exception
				JOptionPane.showMessageDialog(panelRelatorioExame, "[ERRO ❌ ]: " + e2.getMessage(), "Erro",
						JOptionPane.WARNING_MESSAGE);
			}

		}
	}

	public void gerarRelatorioExame() {
		try {
			String periodo = (String) panelRelatorioExame.getComboBoxTipoExame().getSelectedItem();
			String tipoExame = (String) panelRelatorioExame.getComboBoxPeriodo().getSelectedItem();
			String data = panelRelatorioExame.getTextFieldData().getText().trim();

			if (periodo.isEmpty() || tipoExame.isEmpty() || data.isEmpty()) {
				throw new IllegalArgumentException("Todos os campos devem ser preenchidos.");
			}

			if (panelRelatorioExame.getComboBoxTipoExame().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um tipo de exame.");
			}

			if (panelRelatorioExame.getComboBoxPeriodo().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um período.");
			}

			if (!data.matches("\\d{2}/\\d{2}/\\d{4}")) {
				throw new IllegalArgumentException("Data deve estar no formato DD/MM/AAAA.");
			}

			inserirDadosNoTextPane(panelRelatorioExame.getTextPainelExame());
			JOptionPane.showMessageDialog(panelRelatorioExame, "[SUCESSO ✅ ]: Relatorio gerado com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelRelatorioExame, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void inserirDadosNoTextPane(JTextPane textPane) {
		try {
			BufferedReader br3 = new BufferedReader(new FileReader("./dados/dadosExame.txt"));

			StringBuilder conteudo = new StringBuilder();

			String linhaExame;

//	         Exibição de Exames 
			conteudo.append("\n========================> EXAMES CADASTRADOS <========================\n").append("\n");
			while ((linhaExame = br3.readLine()) != null) {
				String[] dadosExamesCadastrados = linhaExame.split(";");

				if (dadosExamesCadastrados.length >= 2) {
					String nomeExame = dadosExamesCadastrados[0].trim();
					String tipoExame = dadosExamesCadastrados[2].trim();
					String exameFormatado = "Nome do exame: " + nomeExame + " - Tipo do exame: " + tipoExame;
					conteudo.append(exameFormatado).append("\n");
				}

			}

			// Atualizar o texto no JTextPane
			textPane.setText(conteudo.toString());
			br3.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(null, "Erro ao carregar médicos: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}
	}

	public void limparCampos() {
		panelRelatorioExame.getComboBoxPeriodo().setSelectedIndex(0);
		panelRelatorioExame.getComboBoxTipoExame().setSelectedIndex(0);
		panelRelatorioExame.getTextFieldData().setText("");
		panelRelatorioExame.getComboBoxTipoFormato().setSelectedIndex(0);
		panelRelatorioExame.getTextPainelExame().setText("");
	}
}
