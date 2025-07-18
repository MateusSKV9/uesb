package modelo;

import java.util.Date;

public class Agendamento {
	
	private String medico;
	private String paciente;
	private String data;
	private String hora;
	private String tipoExame;
	
	public Agendamento() {
		
	}
	
	public Agendamento(String medico, String paciente, String data, String hora, String tipoExame) {
		this.medico = medico;
		this.paciente = paciente;
		this.data = data;
		this.hora = hora;
		this.tipoExame = tipoExame;
		
	}
	
	 public String toString() {
	        return data + ";"  + ";" + medico + ";" + paciente + ";";
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

	public String getHora() {
		return hora;
	}

	public void setHora(String hora) {
		this.hora = hora;
	}

	public String getTipoExame() {
		return tipoExame;
	}

	public void setTipoExame(String tipoExame) {
		this.tipoExame = tipoExame;
	}
	
	
	
	
	
	

}
