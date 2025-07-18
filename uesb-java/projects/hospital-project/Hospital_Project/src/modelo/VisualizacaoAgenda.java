package modelo;

public class VisualizacaoAgenda {
	private String medico;
	private String data;
	
	public VisualizacaoAgenda(String medico, String data) {
		this.medico = medico;
		this.data = data;
	}

	public String getMedico() {
		return medico;
	}

	public void setMedico(String medico) {
		this.medico = medico;
	}

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}
	
	
}
