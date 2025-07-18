package modelo;

public class AgendamentoConsulta {
	private String medico;
	private String paciente;
	private String data;
	private String horario;
	
	public String toString() { 
		return medico + ";" +
			   paciente + ";" +
			   data + ";" +
			   horario + ";";
	}
	
	public AgendamentoConsulta(String medico, String paciente, String data, String horario) {
		this.medico = medico;
		this.paciente = paciente;
		this.data = data;
		this.horario = horario;
	}

	public String getMedico() {
		return medico;
	}

	public void setMedico(String medico) {
		this.medico = medico;
	}

	public String getPaciente() {
		return paciente;
	}

	public void setPaciente(String paciente) {
		this.paciente = paciente;
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
