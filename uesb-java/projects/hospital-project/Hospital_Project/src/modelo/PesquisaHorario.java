package modelo;

public class PesquisaHorario {
	private String medico;
	private String tipoExame;
	private String data;
	
	public PesquisaHorario(String medico, String tipoExame, String data) {
		this.medico = medico;
		this.tipoExame = tipoExame;
		this.data = data;
	}

	public String getMedico() {
		return medico;
	}

	public void setMedico(String medico) {
		this.medico = medico;
	}

	public String getTipoExame() {
		return tipoExame;
	}

	public void setTipoExame(String tipoExame) {
		this.tipoExame = tipoExame;
	}

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}
	
	
}
