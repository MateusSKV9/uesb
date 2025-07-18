package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

import javax.swing.JOptionPane;

import modelo.Agendamento;
import modelo.AgendamentoConsulta;
import modelo.Consulta;
import visual.PanelAgendamentoConsulta;

public class ControladorAgendamentoConsulta implements ActionListener {
	PanelAgendamentoConsulta panelAgendamentoConsulta;
	ArrayList<AgendamentoConsulta> consultasAgendadas;

	public ControladorAgendamentoConsulta(PanelAgendamentoConsulta panelAgendamentoConsulta) {
		this.panelAgendamentoConsulta = panelAgendamentoConsulta;
		consultasAgendadas = new ArrayList<AgendamentoConsulta>();
		addEventos();

		carregarMedicos();
		carregarPacientes();
	}

	private void addEventos() {
		panelAgendamentoConsulta.getBtnAgendar().addActionListener(this);
		panelAgendamentoConsulta.getBtnLimpar().addActionListener(this);

	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelAgendamentoConsulta.getBtnAgendar()) {
			agendarConsulta();
		} else if (e.getSource() == panelAgendamentoConsulta.getBtnLimpar()) {
			limparCampos();
		}

	}

	public void agendarConsulta() {
		try {

			String medico = (String) panelAgendamentoConsulta.getMedico().getSelectedItem();
			String paciente = (String) panelAgendamentoConsulta.getPaciente().getSelectedItem();
			String data = panelAgendamentoConsulta.getTextFieldData().getText().trim();
			String hora = panelAgendamentoConsulta.getTextFieldHorario().getText().trim();

			if (medico.isEmpty() || paciente.isEmpty() || data.isEmpty() || hora.isEmpty()) {
				throw new IllegalArgumentException("Todos os campos devem ser preenchidos.");
			}

			if (!data.matches("\\d{2}/\\d{2}/\\d{4}") || !hora.matches("\\d{2}:\\d{2}")) {
				throw new IllegalArgumentException("Data ou horário em formato inválido.");
			}

			String[] dataParts = data.split("/");
			int anoInformado = Integer.parseInt(dataParts[2]);
			int anoAtual = java.time.Year.now().getValue();
			int mesInformado = Integer.parseInt(dataParts[1]);

			int mesAtual = java.time.Month.from(java.time.LocalDate.now()).getValue();

			if (anoInformado < anoAtual) {
				throw new IllegalArgumentException("O ano da data não pode ser menor que o ano atual.");
			}
			if (anoInformado == anoAtual && mesInformado < mesAtual) {
				throw new IllegalArgumentException("O mês da consulta não pode ser menor que o mês atual.");
			}

			if (panelAgendamentoConsulta.getMedico().getSelectedIndex() == 0) {
				throw new Exception("Selecione um médico.");
			}

			if (panelAgendamentoConsulta.getPaciente().getSelectedIndex() == 0) {
				throw new Exception("Selecione um paciente.");
			}

			AgendamentoConsulta agendamentoConsulta = new AgendamentoConsulta(medico, paciente, data, hora);
			consultasAgendadas.add(agendamentoConsulta);

			gravarDados(agendamentoConsulta);

			JOptionPane.showMessageDialog(panelAgendamentoConsulta, "[SUCESSO ✅ ]: Consulta agendada com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
			limparCampos();

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelAgendamentoConsulta, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}

	}

	private void carregarMedicos() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosMedico.txt"));
			String linha;
			panelAgendamentoConsulta.getMedico().removeAllItems();
			panelAgendamentoConsulta.getMedico().addItem("Selecionar Médico");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 3) {
					String nome = dados[0].trim();
					String crm = dados[1].trim();
					String especialidade = dados[2].trim();
					String medicoFormatado = nome + " - CRM: " + crm + " (" + especialidade + ")";
					panelAgendamentoConsulta.getMedico().addItem(medicoFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelAgendamentoConsulta, "Erro ao carregar médicos: " + e.getMessage(),
					"Erro", JOptionPane.ERROR_MESSAGE);
		}
	}

	private void carregarPacientes() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosPaciente.txt"));
			String linha;
			panelAgendamentoConsulta.getPaciente().removeAllItems();
			panelAgendamentoConsulta.getPaciente().addItem("Selecionar Paciente");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 2) {
					String nome = dados[0].trim();
					String dataNascimento = dados[1].trim();
					String pacienteFormatado = nome + " - Data de nascimento: " + dataNascimento;
					panelAgendamentoConsulta.getPaciente().addItem(pacienteFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelAgendamentoConsulta, "Erro ao carregar médicos: " + e.getMessage(),
					"Erro", JOptionPane.ERROR_MESSAGE);
		}
	}

	private void gravarDados(AgendamentoConsulta agendamentoConsulta) {
		System.out.println("Diretório atual: " + System.getProperty("user.dir"));

		try (BufferedWriter writer = new BufferedWriter(new FileWriter("./dados/dadosAgendamentoConsulta.txt", true))) {
			writer.write(agendamentoConsulta.toString());
			writer.newLine();
			System.out.println("Dados gravados com sucesso em dadosAgendamentoConsulta.txt:");
			System.out.println(agendamentoConsulta.toString());
		} catch (IOException e) {
			System.out.println("Erro ao gravar os dados no arquivo:");
			e.printStackTrace();
		}

	}

	public void limparCampos() {
		panelAgendamentoConsulta.getMedico().setSelectedIndex(0);
		panelAgendamentoConsulta.getPaciente().setSelectedIndex(0);
		panelAgendamentoConsulta.getTextFieldHorario().setText("");
		panelAgendamentoConsulta.getTextFieldData().setText("");
	}
}
