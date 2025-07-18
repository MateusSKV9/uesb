package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;

import javax.swing.JOptionPane;

import modelo.Endereco;
import modelo.Paciente;
import visual.PanelCadastrarPaciente;

public class ControladorCadastrarPaciente implements ActionListener {
	PanelCadastrarPaciente panelCadastrarPaciente;
	ArrayList<Paciente> pacientesCadastrados;

	public ControladorCadastrarPaciente(PanelCadastrarPaciente panelCadastrarPaciente) {
		this.panelCadastrarPaciente = panelCadastrarPaciente;
		pacientesCadastrados = new ArrayList<Paciente>();
		addEventos();
	}


	public void cadastrarPaciente() {
		try {
			String nome = panelCadastrarPaciente.getTextFieldNome().getText();
			String dataNascimento = panelCadastrarPaciente.getTextFieldDataNascimento().getText();
			String telefone = panelCadastrarPaciente.getTextFieldTelefone().getText();
			String tipoSanguineo = (String) panelCadastrarPaciente.getComboBoxTipoSanguineo().getSelectedItem();
			String alturaText = panelCadastrarPaciente.getTextFieldAltura().getText();
			String pesoText = panelCadastrarPaciente.getTextFieldPeso().getText();
			String historicoMedico = panelCadastrarPaciente.getTextAreaHistoricoMedico().getText();
			String convenio = (String) panelCadastrarPaciente.getTipoConvenio().getSelectedItem();

			String logradouro = panelCadastrarPaciente.getTextFieldLogradouro().getText();
			String numero = panelCadastrarPaciente.getTextFieldNumero().getText();
			String complemento = panelCadastrarPaciente.getTextFieldComplemento().getText();
			String bairro = panelCadastrarPaciente.getTextFieldBairro().getText();
			String cep = panelCadastrarPaciente.getTextFieldCEP().getText();
			String cidade = panelCadastrarPaciente.getTextFieldCidade().getText();
			String estado = panelCadastrarPaciente.getTextFieldEstado().getText();

			if (nome.isEmpty() || dataNascimento.isEmpty() || telefone.isEmpty() || tipoSanguineo.isEmpty()
					|| alturaText.isEmpty() || pesoText.isEmpty() || historicoMedico.isEmpty() || convenio.isEmpty()
					|| logradouro.isEmpty() || numero.isEmpty() || complemento.isEmpty() || bairro.isEmpty()
					|| cep.isEmpty() || cidade.isEmpty() || estado.isEmpty()) {
				throw new Exception("Todos os campos devem ser preenchidos!");
			}

			if (!nome.matches("[a-zA-Zá-úÁ-ÚçÇ\\s]+")) {
				throw new Exception("O campo Nome deve conter apenas letras.");
			}

			validarDataNascimento(dataNascimento);


            if (!telefone.matches("\\d{10,11}")) {
            	throw new Exception("O Telefone deve conter apenas números com 10 ou 11 dígitos.");    
            } 

			float altura = Float.parseFloat(alturaText);
			float peso = Float.parseFloat(pesoText);

			try {
				if (altura <= 0) {
					throw new NumberFormatException();
				}
			} catch (NumberFormatException e) {
				throw new Exception("Digite um valor numérico válido para a Altura.");
			}

			try {
				if (peso <= 0) {
					throw new NumberFormatException();
				}
			} catch (NumberFormatException e) {
				throw new Exception("Digite um valor numérico válido para o Peso.");
			}

			if (panelCadastrarPaciente.getComboBoxTipoSanguineo().getSelectedIndex() == 0) {
				throw new Exception("Selecione um tipo sanguíneo.");
			}

			if (panelCadastrarPaciente.getTipoConvenio().getSelectedIndex() == 0) {
				throw new Exception("Selecione um Convênio.");
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

			if (!cep.matches("\\d{5}-\\d{3}")) {
				throw new Exception("O campo CEP deve estar no formato XXXXX-XXX.");
			}

			if (!cidade.matches("[a-zA-Zá-úÁ-ÚçÇ\\s]+")) {
				throw new Exception("O campo Cidade deve conter apenas letras.");
			}

			if (!estado.matches("[a-zA-Zá-úÁ-ÚçÇ\\s]+")) {
				throw new Exception("O campo Estado deve conter apenas letras.");
			}

			Endereco endereco = new Endereco(logradouro, numero, complemento, bairro, cep, cidade, estado);
			Paciente paciente = new Paciente(nome, dataNascimento, endereco, telefone, tipoSanguineo, altura, peso,
					historicoMedico, convenio);

			pacientesCadastrados.add(paciente);

			gravarDados(paciente);

			JOptionPane.showMessageDialog(panelCadastrarPaciente, "[SUCESSO ✅ ]: Paciente cadastrado.", "Sucesso!",
					JOptionPane.INFORMATION_MESSAGE);
			limparCampos();

		} catch (NumberFormatException ex) {
			JOptionPane.showMessageDialog(panelCadastrarPaciente,
					"Por favor, insira valores numéricos válidos para altura e peso.", "Erro de Formato",
					JOptionPane.WARNING_MESSAGE);
		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelCadastrarPaciente, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	private void gravarDados(Paciente paciente) {
	    System.out.println("Diretório atual: " + System.getProperty("user.dir"));
	   
	    // Gravação no arquivo
	    try (BufferedWriter writer = new BufferedWriter(new FileWriter("./dados/dadosPaciente.txt", true))) {
	        writer.write(paciente.toString());
	        writer.newLine();
	        System.out.println("Dados gravados com sucesso em dadosPaciente.txt:");
	        System.out.println(paciente.toString());
	    } catch (IOException e) {
	        System.out.println("Erro ao gravar os dados no arquivo:");
	        e.printStackTrace();
	    }
	}

	public void validarDataNascimento(String dataNascimento) throws Exception {
		if (!dataNascimento.matches("\\d{2}/\\d{2}/\\d{4}")) {
			throw new Exception("Data de Nascimento deve estar no formato DD/MM/AAAA.");
		}

		// Divide a data em dia, mês e ano
		String[] partes = dataNascimento.split("/");
		int dia = Integer.parseInt(partes[0]);
		int mes = Integer.parseInt(partes[1]);
		int ano = Integer.parseInt(partes[2]);

		if (mes < 1 || mes > 12) {
			throw new Exception("Mês inválido. O mês deve estar entre 01 e 12.");
		}

		if (dia < 1 || dia > 31) {
			throw new Exception("Dia inválido. O dia deve estar entre 01 e 31.");
		}

		if (ano < 1900 || ano > 2024) {
			throw new Exception("Ano de nascimento inválido. O ano deve estar entre 1900 e 2024.");
		}
	}

	public void limparCampos() {
		panelCadastrarPaciente.getTextFieldNome().setText("");
		panelCadastrarPaciente.getTextFieldDataNascimento().setText("");
		panelCadastrarPaciente.getTextFieldTelefone().setText("");
		panelCadastrarPaciente.getComboBoxTipoSanguineo().setSelectedIndex(0);
		panelCadastrarPaciente.getTextFieldAltura().setText("");
		panelCadastrarPaciente.getTextFieldPeso().setText("");
		panelCadastrarPaciente.getTextAreaHistoricoMedico().setText("");
		panelCadastrarPaciente.getTipoConvenio().setSelectedIndex(0);

		panelCadastrarPaciente.getTextFieldLogradouro().setText("");
		panelCadastrarPaciente.getTextFieldNumero().setText("");
		panelCadastrarPaciente.getTextFieldComplemento().setText("");
		panelCadastrarPaciente.getTextFieldBairro().setText("");
		panelCadastrarPaciente.getTextFieldCEP().setText("");
		panelCadastrarPaciente.getTextFieldCidade().setText("");
		panelCadastrarPaciente.getTextFieldEstado().setText("");
	}

	private void addEventos() {
		panelCadastrarPaciente.getBtnCadastrar().addActionListener(this);
		panelCadastrarPaciente.getBtnLimpar().addActionListener(this);
	}

	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelCadastrarPaciente.getBtnCadastrar()) {
			cadastrarPaciente();
		} else if (e.getSource() == panelCadastrarPaciente.getBtnLimpar()) {
			limparCampos();
		}
	}
}