package modelo;

public class AgendamentoExame {
	private String paciente;
	private String tipoExame;
	private String data;
	private String horario;
	
	public AgendamentoExame(String paciente, String tipoExame, String data, String horario) {
		this.paciente = paciente;
		this.tipoExame = tipoExame;
		this.data = data;
		this.horario = horario;
	}
	
	
	public String toString() { 
		return paciente + ";" +
			   tipoExame + ";"+
			   data + ";" +
			   horario + ";";

	}

	public String getPaciente() {
		return paciente;
	}

	public void setPaciente(String paciente) {
		this.paciente = paciente;
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

	public String getHorario() {
		return horario;
	}

	public void setHorario(String horario) {
		this.horario = horario;
	}
	
	
}
