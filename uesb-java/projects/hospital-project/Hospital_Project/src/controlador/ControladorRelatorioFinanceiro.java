package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JOptionPane;

import visual.PanelRelatorioFinanceiro;

public class ControladorRelatorioFinanceiro implements ActionListener {
	PanelRelatorioFinanceiro panelRelatorioFinanceiro;

	public ControladorRelatorioFinanceiro(PanelRelatorioFinanceiro panelRelatorioFinanceiro) {
		this.panelRelatorioFinanceiro = panelRelatorioFinanceiro;
		addEventos();
	}

	private void addEventos() {
		panelRelatorioFinanceiro.getBtnGerar().addActionListener(this);
		panelRelatorioFinanceiro.getBtnLimpar().addActionListener(this);
		panelRelatorioFinanceiro.getBtnImprimir().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource() == panelRelatorioFinanceiro.getBtnGerar()) {
			gerarRelatorioConsulta();
		} else if (e.getSource() == panelRelatorioFinanceiro.getBtnLimpar()) {
			limparCampos();
		} else if (e.getSource() == panelRelatorioFinanceiro.getBtnImprimir()) {
			try {
				if (panelRelatorioFinanceiro.getComboBoxTipoFormato().getSelectedIndex() == 0) {
					throw new IllegalArgumentException("Selecione um tipo de formato.");
				}

				JOptionPane.showMessageDialog(panelRelatorioFinanceiro, "[SUCESSO ✅ ]:Relatorio imprimido com sucesso!",
						"Sucesso!", JOptionPane.INFORMATION_MESSAGE);
				panelRelatorioFinanceiro.getComboBoxTipoFormato().setSelectedIndex(0);
			} catch (Exception e2) {
				// TODO: handle exception
				JOptionPane.showMessageDialog(panelRelatorioFinanceiro, "[ERRO ❌ ]: " + e2.getMessage(), "Erro",
						JOptionPane.WARNING_MESSAGE);
			}

		}
	}

	public void gerarRelatorioConsulta() {
		try {
			String periodo = (String) panelRelatorioFinanceiro.getComboBoxPeriodo().getSelectedItem();
			String data = panelRelatorioFinanceiro.getTextFieldData().getText().trim();

			if (periodo.isEmpty() || data.isEmpty()) {
				throw new IllegalArgumentException("Os campos período e data devem ser preenchidos.");
			}

			if (panelRelatorioFinanceiro.getComboBoxPeriodo().getSelectedIndex() == 0) {
				throw new IllegalArgumentException("Selecione um período.");
			}

			if (!data.matches("\\d{2}/\\d{2}/\\d{4}")) {
				throw new IllegalArgumentException("Data deve estar no formato DD/MM/AAAA.");
			}

			JOptionPane.showMessageDialog(panelRelatorioFinanceiro, "[SUCESSO ✅ ]:Relatorio gerado com sucesso!",
					"Sucesso!", JOptionPane.INFORMATION_MESSAGE);

		} catch (Exception e) {
			JOptionPane.showMessageDialog(panelRelatorioFinanceiro, "[ERRO ❌ ]: " + e.getMessage(), "Erro",
					JOptionPane.WARNING_MESSAGE);
		}
	}

	public void limparCampos() {
		panelRelatorioFinanceiro.getComboBoxPeriodo().setSelectedIndex(0);
		panelRelatorioFinanceiro.getTextFieldData().setText("");
		panelRelatorioFinanceiro.getComboBoxTipoFormato().setSelectedIndex(0);
		panelRelatorioFinanceiro.getTextPainelFinanceiro().setText("");
	}
}
