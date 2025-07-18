package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import javax.swing.JOptionPane;
import javax.swing.JTextPane;

import visual.PanelRelatorioConsulta;

public class ControladorRelatorioConsulta implements ActionListener {
	PanelRelatorioConsulta panelRelatorioConsulta;

	public ControladorRelatorioConsulta(PanelRelatorioConsulta panelRelatorioConsulta) {
		this.panelRelatorioConsulta = panelRelatorioConsulta;
		addEventos();
	}

	private void addEventos() {
		panelRelatorioConsulta.getBtnImprimir().addActionListener(this);
		panelRelatorioConsulta.getBtnLimpar().addActionListener(this);
		panelRelatorioConsulta.getBtnGerar().addActionListener(this);

	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelRelatorioConsulta.getBtnGerar()) {
			gerarRelatorioConsulta();
		} else if (e.getSource() == panelRelatorioConsulta.getBtnLimpar()) {
			limparCampos();
		} else if (e.getSource() == panelRelatorioConsulta.getBtnImprimir()) {
			try {
				if (panelRelatorioConsulta.getComboBoxTipoFormato().getSelectedIndex() == 0) {
					throw new IllegalArgumentException("Selecione um tipo de formato.");
				}			

				JOptionPane.showMessageDialog(panelRelatorioConsulta, "[SUCESSO ✅ ]:Relatorio imprimido com sucesso!",
						"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
				panelRelatorioConsulta.getComboBoxTipoFormato().setSelectedIndex(0);
			} catch (Exception e2) {
				// TODO: handle exception
				JOptionPane.showMessageDialog(panelRelatorioConsulta, "[ERRO ❌ ]: " + e2.getMessage(), "Erro",
						JOptionPane.WARNING_MESSAGE);
			}
			
		}
	}

	public void gerarRelatorioConsulta() {
		try {
			String periodo = (String) panelRelatorioConsulta.getComboBoxPeriodo().getSelectedItem();
			String tipoExame = (String) panelRelatorioConsulta.getComboBoxTipoConsulta().getSelectedItem();
			String data = panelRelatorioConsulta.getTextFieldData().getText().trim();
			String formato = (String) panelRelatorioConsulta.getComboBoxTipoFormato().getSelectedItem();

			if (periodo.isEmpty() || tipoExame.isEmpty() || data.isEmpty()) {
				throw new IllegalArgumentException("Os campos periodo, tipo e data devem ser preenchidos.");
			}

			if (panelRelatorioConsulta.getComboBoxTipoConsulta().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um tipo de consulta.");
			}

			if (panelRelatorioConsulta.getComboBoxPeriodo().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um período.");
			}

			if (!data.matches("\\d{2}/\\d{2}/\\d{4}")) {
				throw new IllegalArgumentException("Data em formato inválido. Formato: XX/XX/XXXX");
			}

			inserirDadosNoTextPane(panelRelatorioConsulta.getTextPainelMaterial());
			
			JOptionPane.showMessageDialog(panelRelatorioConsulta, "[SUCESSO ✅ ]:Relatorio gerado com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
		

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelRelatorioConsulta, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void inserirDadosNoTextPane(JTextPane textPane) {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosAgendamentoConsulta.txt"));
			BufferedReader br2 = new BufferedReader(new FileReader("./dados/dadosConsulta.txt"));

			StringBuilder conteudo = new StringBuilder();

			String linhaConsultaAgendada;
			String linhaConsultaCadastrada;

			// Exibição de Consultas
			conteudo.append("========================> CONSULTAS AGENDADAS <========================\n").append("\n");
			while ((linhaConsultaAgendada = br.readLine()) != null) {
				String[] dadosConsultasAgendadas = linhaConsultaAgendada.split(";");

				if (dadosConsultasAgendadas.length >= 3) {
					String paciente = dadosConsultasAgendadas[1].trim();
					String hora = dadosConsultasAgendadas[3].trim();
					String consultaAgendadaFormatada = "Paciente: " + paciente + " - Hora: " + hora;
					conteudo.append(consultaAgendadaFormatada).append("\n");
				}

			}

			// Exibição de Consultas
			conteudo.append("\n========================> CONSULTAS CASTRADAS <========================\n").append("\n");
			while ((linhaConsultaCadastrada = br2.readLine()) != null) {
				String[] dadosConsultasCadastradas = linhaConsultaCadastrada.split(";");

				if (dadosConsultasCadastradas.length >= 3) {
					String paciente = dadosConsultasCadastradas[3].trim();
					String data = dadosConsultasCadastradas[0].trim();
					String hora = dadosConsultasCadastradas[1].trim();
					String consultaCadastradaFormatada = paciente + " - " + data + " - " + hora;
					conteudo.append(consultaCadastradaFormatada).append("\n");
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
		panelRelatorioConsulta.getComboBoxPeriodo().setSelectedIndex(0);
		panelRelatorioConsulta.getComboBoxTipoConsulta().setSelectedIndex(0);
		panelRelatorioConsulta.getTextFieldData().setText("");
		panelRelatorioConsulta.getComboBoxTipoFormato().setSelectedIndex(0);
		panelRelatorioConsulta.getTextPainelMaterial().setText("");
	}
}
