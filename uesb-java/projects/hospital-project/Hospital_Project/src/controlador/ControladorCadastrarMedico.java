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

import modelo.Endereco;
import modelo.Material;
import modelo.Medico;
import modelo.Paciente;
import visual.PanelCadastrarMedico;

public class ControladorCadastrarMedico implements ActionListener {
	PanelCadastrarMedico panelCadastrarMedico;
	ArrayList<Medico> medicosCadastrados;

	public ControladorCadastrarMedico(PanelCadastrarMedico panelCadastrarMedico) {
		this.panelCadastrarMedico = panelCadastrarMedico;
		medicosCadastrados = new ArrayList<Medico>();
		addEventos();
	}

	private void addEventos() {
		panelCadastrarMedico.getbtnCadastrar().addActionListener(this);
		panelCadastrarMedico.getbtnLimpar().addActionListener(this);
	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelCadastrarMedico.getbtnCadastrar()) {
			cadastrarMedico();
		} else if (e.getSource() == panelCadastrarMedico.getbtnLimpar()) {
			limparCampos();
		}
	}

	public void cadastrarMedico() {
		try {
			String nome = panelCadastrarMedico.getTextFieldNome().getText().trim();
			String especialidade = panelCadastrarMedico.getTextFieldEspecialidade().getText().trim();
			String crm = panelCadastrarMedico.getTextFieldCRM().getText().trim();
			String contato = panelCadastrarMedico.getTextAreaContato().getText().trim();
			String valorConsultaText = panelCadastrarMedico.getTextFieldValorConsulta().getText().trim();
			String horarioAtendimento = panelCadastrarMedico.getTextFieldHorarioAtendimento().getText().trim();

			String logradouro = panelCadastrarMedico.getTextFieldLogradouro().getText();
			String numero = panelCadastrarMedico.getTextFieldNumero().getText();
			String complemento = panelCadastrarMedico.getTextFieldComplemento().getText();
			String bairro = panelCadastrarMedico.getTextFieldBairro().getText();
			String cep = panelCadastrarMedico.getTextFieldCEP().getText();
			String cidade = panelCadastrarMedico.getTextFieldCidade().getText();
			String estado = panelCadastrarMedico.getTextFieldEstado().getText();

			if (nome.isEmpty() || especialidade.isEmpty() || crm.isEmpty() || contato.isEmpty()
					|| valorConsultaText.isEmpty() || horarioAtendimento.isEmpty() || logradouro.isEmpty()
					|| numero.isEmpty() || complemento.isEmpty() || bairro.isEmpty() || cep.isEmpty()
					|| cidade.isEmpty() || estado.isEmpty()) {
				throw new Exception("Todos os campos devem ser preenchidos!");
			}

			if (!nome.matches("^[A-Za-zÀ-ÿ][A-Za-zÀ-ÿ0-9\\s]*$")) {
				throw new Exception("O nome do nome deve conter apenas letras e espaços.");
			}

			if (!especialidade.matches("^[A-Za-zÀ-ÿ][A-Za-zÀ-ÿ0-9\\s]*$")) {
				throw new Exception("A especialidade deve conter apenas letras e espaços.");
			}

			if (!crm.matches("[A-Za-z]{2}\\d{4,6}")) {
				throw new Exception(
						"O campo CRM deve seguir o formato correto: 2 letras (estado) seguidas de 4 a 6 dígitos.");
			}

			if (!horarioAtendimento.matches("\\d{2}:\\d{2}")) {
				throw new Exception("O horário deve estar no formato HH:MM");
			}

			float valorConsulta = Float.parseFloat(valorConsultaText);

			if (valorConsulta <= 0) {
				throw new Exception("O valor da consulta deve ser um valor maior que 0.");
			}

			if (!cep.matches("\\d{5}-\\d{3}")) {
				throw new Exception("O campo CEP deve estar no formato XXXXX-XXX.");
			}

			if (!logradouro.matches("^[\\d]+[a-zA-Zá-úÁ-ÚçÇ\\s\\-\\/]*$")
					&& !logradouro.matches("^[a-zA-Zá-úÁ-ÚçÇ\\s\\-\\/]+$")) {
				throw new Exception(
						"O Logradouro deve iniciar com números, mas deve conter ao menos uma letra ou caractere.");
			}

			if (!complemento.matches("^[\\d]+[a-zA-Zá-úÁ-ÚçÇ\\s\\-\\/]*$")
					&& !complemento.matches("^[a-zA-Zá-úÁ-ÚçÇ\\s\\-\\/]+$")) {
				throw new Exception("O Complemento deve conter ao menos uma letra ou caractere.");
			}

			if (!cidade.matches("[a-zA-Zá-úÁ-ÚçÇ\\s]+")) {
				throw new Exception("O campo Cidade deve conter apenas letras.");
			}

			if (!estado.matches("[a-zA-Zá-úÁ-ÚçÇ\\s]+")) {
				throw new Exception("O campo Estado deve conter apenas letras.");
			}

			Endereco endereco = new Endereco(logradouro, numero, complemento, bairro, cep, cidade, estado);

			Medico medico = new Medico(nome, especialidade, crm, contato, horarioAtendimento, valorConsulta, endereco);
			medicosCadastrados.add(medico);

			gravarDados(medico);

			JOptionPane.showMessageDialog(panelCadastrarMedico, "[SUCESSO ✅ ]: Medico cadastrado com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
			limparCampos();

		} catch (NumberFormatException ex) {
			JOptionPane.showMessageDialog(panelCadastrarMedico,
					"Por favor, insira valores numéricos válidos para valor de consulta.", "Erro de Formato",
					JOptionPane.WARNING_MESSAGE);
		} catch (Exception ex) {
			JOptionPane.showMessageDialog(panelCadastrarMedico, " " + ex.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void gravarDados(Medico medico) {
		// Gravação no arquivo
		try (BufferedWriter writer = new BufferedWriter(new FileWriter("./dados/dadosMedico.txt", true))) {
			writer.write(medico.toString());
			writer.newLine();
			System.out.println("Dados gravados com sucesso em dadosMedico.txt:");
			System.out.println(medico.toString());
		} catch (IOException e) {
			System.out.println("Erro ao gravar os dados no arquivo:");
			e.printStackTrace();
		}
	}

	private void limparCampos() {
		panelCadastrarMedico.getTextFieldNome().setText("");
		panelCadastrarMedico.getTextFieldEspecialidade().setText("");
		panelCadastrarMedico.getTextFieldCRM().setText("");
		panelCadastrarMedico.getTextAreaContato().setText("");
		panelCadastrarMedico.getTextFieldValorConsulta().setText("");
		panelCadastrarMedico.getTextFieldHorarioAtendimento().setText("");

		panelCadastrarMedico.getTextFieldLogradouro().setText("");
		panelCadastrarMedico.getTextFieldNumero().setText("");
		panelCadastrarMedico.getTextFieldComplemento().setText("");
		panelCadastrarMedico.getTextFieldBairro().setText("");
		panelCadastrarMedico.getTextFieldCEP().setText("");
		panelCadastrarMedico.getTextFieldCidade().setText("");
		panelCadastrarMedico.getTextFieldEstado().setText("");
	}
}