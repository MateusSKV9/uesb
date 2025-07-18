package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JOptionPane;
import javax.swing.JTextPane;

import visual.PanelCancelamentoReagendamento;

public class ControladorCancelamentoReagendamento implements ActionListener {
	PanelCancelamentoReagendamento panelCancelamentoReagendamento;

	public ControladorCancelamentoReagendamento(PanelCancelamentoReagendamento panelCancelamentoReagendamento) {
		this.panelCancelamentoReagendamento = panelCancelamentoReagendamento;
		addEventos();
	}

	private void addEventos() {
		panelCancelamentoReagendamento.getBtnConfirmar().addActionListener(this);
		panelCancelamentoReagendamento.getBtnLimpar().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if (e.getSource() == panelCancelamentoReagendamento.getBtnConfirmar()) {
			inserirDadosNoTextPane(panelCancelamentoReagendamento.getTextPainelCancelamentoReagendamento());
		} else if (e.getSource() == panelCancelamentoReagendamento.getBtnLimpar()) {
			limparCampos();
		}
	}

	private void inserirDadosNoTextPane(JTextPane textPane) {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosAgendamentoConsulta.txt"));
			BufferedReader br2 = new BufferedReader(new FileReader("./dados/dadosAgendamentoExame.txt"));
			StringBuilder conteudo = new StringBuilder();
			String linhaConsulta, linhaExame;

			conteudo.append("========================> CONSULTAS <========================\n").append("\n");
			while ((linhaConsulta = br.readLine()) != null) {
				String[] dadosConsultasAgendadas = linhaConsulta.split(";");

				if (dadosConsultasAgendadas.length >= 3) {
					String medico = dadosConsultasAgendadas[0].trim();
					String paciente = dadosConsultasAgendadas[1].trim();
					String data = dadosConsultasAgendadas[2].trim();
					String hora = dadosConsultasAgendadas[3].trim();
					String consultaAgendadaFormatada = "Medico: " + medico + " - Paciente: " + paciente + " - Data:"
							+ data + " - Hora: " + hora;
					conteudo.append(consultaAgendadaFormatada).append("\n");
				}

			}
			conteudo.append("\n========================> EXAMES <========================\n").append("\n");
			while ((linhaExame = br2.readLine()) != null) {
				String[] dadosExamesAgendados = linhaExame.split(";");

				if (dadosExamesAgendados.length >= 3) {
					String paciente = dadosExamesAgendados[0].trim();
					String tipoExame = dadosExamesAgendados[1].trim();
					String data = dadosExamesAgendados[2].trim();
					String hora = dadosExamesAgendados[3].trim();
					String ExameFormatado = "Paciente: " + paciente + " - Tipo exame: " + tipoExame + " - Data:" + data
							+ " - Hora: " + hora;
					conteudo.append(ExameFormatado).append("\n");
				}

			}

			// Atualizar o texto no JTextPane
			textPane.setText(conteudo.toString());
			br.close();
			br2.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(null, "Erro ao carregar médicos: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}
	}

	public void limparCampos() {
		panelCancelamentoReagendamento.getTextPainelCancelamentoReagendamento().setText("");
	}
}
