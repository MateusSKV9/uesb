package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JOptionPane;
import javax.swing.JTextPane;

import modelo.Agendamento;
import visual.PanelPesquisaHorario;

public class ControladorPesquisaHorario implements ActionListener {
	PanelPesquisaHorario panelPesquisaHorario;

	public ControladorPesquisaHorario(PanelPesquisaHorario panelPesquisaHorario) {
		this.panelPesquisaHorario = panelPesquisaHorario;
		addEventos();

		carregarMedicos();
	}

	private void addEventos() {
		panelPesquisaHorario.getBtnPesquisar().addActionListener(this);
		panelPesquisaHorario.getBtnLimpar().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelPesquisaHorario.getBtnPesquisar()) {
			pesquisarHorario();
		} else if (e.getSource() == panelPesquisaHorario.getBtnLimpar()) {
			limparCampos();
		}
	}

	public void pesquisarHorario() {
		try {
			String medico = (String) panelPesquisaHorario.getMedico().getSelectedItem();
			String tipoExame = (String) panelPesquisaHorario.getComboBoxTipoExame().getSelectedItem();
			String data = panelPesquisaHorario.getTextFieldData().getText().trim();

			if (medico.isEmpty()) {
				throw new IllegalArgumentException("Todos os campos devem ser preenchidos.");
			}

//			if (panelPesquisaHorario.getComboBoxTipoExame().getSelectedIndex() == 0) {
//				throw new IllegalArgumentException("Selecione um tipo de exame.");
//			}

			if (panelPesquisaHorario.getMedico().getSelectedIndex() == 0) {
				throw new Exception("Selecione um médico.");
			}

//			if (panelPesquisaHorario.getComboBoxTipoExame().getSelectedIndex() == 0) {
//				throw new Exception("Selecione um tipo de exame.");
//			}

			if (!data.isEmpty() && !data.matches("\\d{2}/\\d{2}/\\d{4}")) {
				throw new IllegalArgumentException("Data deve estar no formato DD/MM/AAAA.");
			}

			
			inserirDadosNoTextPane(panelPesquisaHorario.getTextPainelHorario());

			JOptionPane.showMessageDialog(panelPesquisaHorario, "[SUCESSO ✅ ]: Pesquisado com sucesso!", "Sucesso!",
					JOptionPane.INFORMATION_MESSAGE);
//			limparCampos();

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelPesquisaHorario, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void carregarMedicos() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosMedico.txt"));
			String linha;
			panelPesquisaHorario.getMedico().removeAllItems();
			panelPesquisaHorario.getMedico().addItem("Selecionar Médico");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 3) {
					String nome = dados[0].trim();
					String crm = dados[1].trim();
					String especialidade = dados[2].trim();
					String medicoFormatado = nome + " - CRM: " + crm + " (" + especialidade + ")";
					panelPesquisaHorario.getMedico().addItem(medicoFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelPesquisaHorario, "Erro ao carregar médicos: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
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

				if (dadosExamesCadastrados[5].trim().equals(panelPesquisaHorario.getMedico().getSelectedItem().toString()) &&
						panelPesquisaHorario.getComboBoxTipoExame().getSelectedIndex()==0) {
					
					if (dadosExamesCadastrados.length >= 2) {
						String nomeExame = dadosExamesCadastrados[0].trim();
						String tipoExame = dadosExamesCadastrados[2].trim();
						String exameFormatado = "Nome do exame: " + nomeExame + " - Tipo do exame: " + tipoExame;
						conteudo.append(exameFormatado).append("\n");
					}
				}
				
				if (dadosExamesCadastrados[5].trim()
						.equals(panelPesquisaHorario.getMedico().getSelectedItem().toString()) &&
						dadosExamesCadastrados[2].trim()
						.equals(panelPesquisaHorario.getComboBoxTipoExame().getSelectedItem().toString())
						) {
					if (dadosExamesCadastrados.length >= 2) {
						String nomeExame = dadosExamesCadastrados[0].trim();
						String tipoExame = dadosExamesCadastrados[2].trim();
						String exameFormatado = "Nome do exame: " + nomeExame + " - Tipo do exame: " + tipoExame;
						conteudo.append(exameFormatado).append("\n");
					}
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
		panelPesquisaHorario.getMedico().setSelectedIndex(0);
		panelPesquisaHorario.getTextPainelHorario().setText("");
		panelPesquisaHorario.getComboBoxTipoExame().setSelectedIndex(0);
		panelPesquisaHorario.getTextFieldData().setText("");
	}
	
	
}
