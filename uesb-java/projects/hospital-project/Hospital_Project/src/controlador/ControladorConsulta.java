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

import modelo.Consulta;
import modelo.Exame;
import modelo.Material;
import modelo.Medico;
import modelo.Paciente;
import visual.PanelConsulta;

public class ControladorConsulta implements ActionListener {
	PanelConsulta panelConsulta;
	ArrayList<Consulta> consultasCadastradas;

	public ControladorConsulta(PanelConsulta panelConsulta) {
		this.panelConsulta = panelConsulta;
		consultasCadastradas = new ArrayList<Consulta>();
		addEventos();

		carregarMedicos();
		carregarPacientes();
		carregarMateriais();
	}

	private void addEventos() {
		panelConsulta.getBtnCadastrar().addActionListener(this);
		panelConsulta.getBtnLimpar().addActionListener(this);

	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelConsulta.getBtnCadastrar()) {
			cadastrarConsulta();
		} else if (e.getSource() == panelConsulta.getBtnLimpar()) {
			limparCampos();
		} 
	}

	public void cadastrarConsulta() {
		try {
			String data = panelConsulta.getTextFieldData().getText().trim();
			String hora = panelConsulta.getTextFieldHora().getText().trim();
			String medico = (String) panelConsulta.getMedico().getSelectedItem();
			String paciente = (String) panelConsulta.getPaciente().getSelectedItem();
			String queixaPaciente = panelConsulta.getTextFieldQueixaPaciente().getText().trim();
			String tipoConsulta = (String) panelConsulta.getComboBoxTipoConsulta().getSelectedItem();
			String convenio = (String) panelConsulta.getComboBoxTipoConvenio().getSelectedItem();
			String observacoes = panelConsulta.getTextAreaObservacoes().getText().trim();
			String materiais = panelConsulta.getTextAreaMateriaisUtilizados().getText().trim();

			if (data.isEmpty() || hora.isEmpty() || medico.isEmpty() || paciente.isEmpty() || queixaPaciente.isEmpty()
					|| tipoConsulta.isEmpty() || tipoConsulta.isEmpty() || convenio.isEmpty()
					|| observacoes.isEmpty()) {
				throw new Exception("Todos os campos devem ser preenchidos!");
			}

			if (panelConsulta.getComboBoxTipoConsulta().getSelectedIndex() == 0) {
				throw new Exception("Selecione um tipo de consulta.");
			}

			if (!materiais.matches("^[A-Za-z][A-Za-z0-9\\.\\s]*$")) {
				throw new IllegalArgumentException(
						"O campo 'materiais' deve começar com uma letra e pode conter números, espaços e pontos.");
			}

			if (panelConsulta.getComboBoxTipoConvenio().getSelectedIndex() == 0) {
				throw new Exception("Selecione um tipo de convênio.");
			}

			if (!data.matches("\\d{2}/\\d{2}/\\d{4}") || !hora.matches("\\d{2}:\\d{2}")) {
				throw new IllegalArgumentException(
						"Data ou horário em formato inválido. Data: DD/MM/AAAA; Hora: HH:MM.");
			}

			if (panelConsulta.getMedico().getSelectedIndex() == 0) {
				throw new Exception("Selecione um médico.");
			}

			if (panelConsulta.getPaciente().getSelectedIndex() == 0) {
				throw new Exception("Selecione um paciente.");
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

			Consulta consulta = new Consulta(data, hora, medico, paciente, queixaPaciente, tipoConsulta, convenio,
					observacoes, materiais);
			consultasCadastradas.add(consulta);

			gravarDados(consulta);

			JOptionPane.showMessageDialog(panelConsulta, "[SUCESSO ✅ ]: Consulta cadastrada com sucesso!", "Sucesso!",
					JOptionPane.INFORMATION_MESSAGE);
			limparCampos();

		} catch (Exception ex) {
			JOptionPane.showMessageDialog(panelConsulta, "[ERRO ❌ ]: " + ex.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void carregarMedicos() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosMedico.txt"));
			String linha;
			panelConsulta.getMedico().removeAllItems();
			panelConsulta.getMedico().addItem("Selecionar Médico");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 3) {
					String nome = dados[0].trim();
					String crm = dados[1].trim();
					String especialidade = dados[2].trim();
					String medicoFormatado = nome + " - CRM: " + crm + " (" + especialidade + ")";
					panelConsulta.getMedico().addItem(medicoFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelConsulta, "Erro ao carregar médicos: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}
	}

	private void carregarPacientes() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosPaciente.txt"));
			String linha;
			panelConsulta.getPaciente().removeAllItems();
			panelConsulta.getPaciente().addItem("Selecionar Paciente");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 2) {
					String nome = dados[0].trim();
					String dataNascimento = dados[1].trim();
					String pacienteFormatado = nome + " - Data de nascimento: " + dataNascimento;
					panelConsulta.getPaciente().addItem(pacienteFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelConsulta, "Erro ao carregar médicos: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}
	}
	
	
	private void carregarMateriais() {
		try {
			BufferedReader br = new BufferedReader(new FileReader("./dados/dadosMaterial.txt"));
			String linha;
			panelConsulta.getComboBoxMateriaisUtilizados().removeAllItems();
			panelConsulta.getComboBoxMateriaisUtilizados().addItem("Selecionar Material");

			while ((linha = br.readLine()) != null) {
				String[] dados = linha.split(";");
				if (dados.length >= 3) {
					String nome = dados[0].trim();
					
					String materialFormatado = nome;
					panelConsulta.getComboBoxMateriaisUtilizados().addItem(materialFormatado);
				}
			}
			br.close();
		} catch (IOException e) {
			JOptionPane.showMessageDialog(panelConsulta, "Erro ao carregar materiais: " + e.getMessage(), "Erro",
					JOptionPane.ERROR_MESSAGE);
		}
	}

	
	
	private void gravarDados(Consulta consulta) {
		try (BufferedWriter writer = new BufferedWriter(new FileWriter("./dados/dadosConsulta.txt", true))) {
			writer.write(consulta.toString());
			writer.newLine();
			System.out.println("Dados gravados com sucesso em dadosConsulta.txt:");
			System.out.println(consulta.toString());
		} catch (IOException e) {
			System.out.println("Erro ao gravar os dados no arquivo:");
			e.printStackTrace();
		}
	}

	
	private void limparCampos() {
		panelConsulta.getTextFieldData().setText("");
		panelConsulta.getTextFieldHora().setText("");
		panelConsulta.getMedico().setSelectedIndex(0);
		panelConsulta.getPaciente().setSelectedIndex(0);
		panelConsulta.getTextFieldQueixaPaciente().setText("");
		panelConsulta.getComboBoxTipoConsulta().setSelectedIndex(0);
		panelConsulta.getComboBoxMateriaisUtilizados().setSelectedIndex(0);
		panelConsulta.getComboBoxTipoConvenio().setSelectedIndex(0);
		panelConsulta.getTextAreaObservacoes().setText("");
	}
}