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
import modelo.AgendamentoExame;
import visual.PanelAgendamentoExame;

public class ControladorAgendamentoExame implements ActionListener {
	PanelAgendamentoExame panelAgendamentoExame;
	ArrayList<AgendamentoExame> examesAgendados;

	public ControladorAgendamentoExame(PanelAgendamentoExame panelAgendamentoExame) {
		this.panelAgendamentoExame = panelAgendamentoExame;
		examesAgendados = new ArrayList<AgendamentoExame>();
		addEventos();

		carregarPacientes();
	}

	private void addEventos() {
		panelAgendamentoExame.getBtnAgendar().addActionListener(this);
		panelAgendamentoExame.getBtnLimpar().addActionListener(this);
	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelAgendamentoExame.getBtnAgendar()) {
			agendarExame();
		} else if (e.getSource() == panelAgendamentoExame.getBtnLimpar()) {
			limparCampos();
		}
	}

	public void agendarExame() {
		try {

			String paciente = (String) panelAgendamentoExame.getPaciente().getSelectedItem();
			String tipoExame = (String) panelAgendamentoExame.getComboBoxTipoExame().getSelectedItem();
			String data = panelAgendamentoExame.getTextFieldData().getText().trim();
			String hora = panelAgendamentoExame.getTextFieldHorario().getText().trim();

			if (paciente.isEmpty() || tipoExame.isEmpty() || data.isEmpty() || hora.isEmpty()) {
				throw new IllegalArgumentException("Todos os campos devem ser preenchidos.");
			}

			if (panelAgendamentoExame.getComboBoxTipoExame().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um tipo de exame.");
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

			if (panelAgendamentoExame.getComboBoxTipoExame().getSelectedIndex() == 0) {
				throw new Exception("Selecione um tipo de exame.");
			}

			if (panelAgendamentoExame.getPaciente().getSelectedIndex() == 0) {
				throw new Exception("Selecione um paciente.");
			}

			AgendamentoExame agendamentoExame = new AgendamentoExame(paciente, tipoExame, data, hora);
			examesAgendados.add(agendamentoExame);

			gravarDados(agendamentoExame);

			JOptionPane.showMessageDialog(panelAgendamentoExame, "[SUCESSO ✅ ]: Aendado com sucesso!", "Sucesso!",
					JOptionPane.INFORMATION_MESSAGE);
			limparCampos();

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelAgendamentoExame, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);

		}

	}

	private void carregarPacientes() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosPaciente.txt"));
			String linha;
			panelAgendamentoExame.getPaciente().removeAllItems();
			panelAgendamentoExame.getPaciente().addItem("Selecionar Paciente");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 2) {
					String nome = dados[0].trim();
					String dataNascimento = dados[1].trim();
					String pacienteFormatado = nome + " - Data de nascimento: " + dataNascimento;
					panelAgendamentoExame.getPaciente().addItem(pacienteFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelAgendamentoExame, "Erro ao carregar médicos: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}
	}

	private void gravarDados(AgendamentoExame agendamentoExame) {
		System.out.println("Diretório atual: " + System.getProperty("user.dir"));

		try (BufferedWriter writer = new BufferedWriter(new FileWriter("./dados/dadosAgendamentoExame.txt", true))) {
			writer.write(agendamentoExame.toString());
			writer.newLine();
			System.out.println("Dados gravados com sucesso em dadosAgendamentoExame.txt:");
			System.out.println(agendamentoExame.toString());
		} catch (IOException e) {
			System.out.println("Erro ao gravar os dados no arquivo:");
			e.printStackTrace();
		}

	}

	public void limparCampos() {
		panelAgendamentoExame.getPaciente().setSelectedIndex(0);
		panelAgendamentoExame.getTextFieldHorario().setText("");
		panelAgendamentoExame.getComboBoxTipoExame().setSelectedIndex(0);
		panelAgendamentoExame.getTextFieldData().setText("");
	}
}
