package modelo;

public class Consulta {
	private String data;
	private String hora;
	private String medico;
	private String paciente;
	private String queixaPaciente;
	private String tipoConsulta;
	private String convenio;
	private String observacoes;
	private String materiais;
	
	@Override
	public String toString() {
				return String.format(
			            "%s;%s;%s;%s;%s;%s;%s;%s;%s;",
			            data, hora, medico, paciente, queixaPaciente, tipoConsulta, convenio, observacoes, materiais
			        );
	}
	
	public Consulta(String data, String hora, String medico, String paciente, String queixaPaciente,
					String tipoConsulta, String convenio, String observacoes, String materiais) {
		this.data = data;
		this.hora = hora;
		this.medico = medico;
		this.paciente = paciente;
		this.queixaPaciente = queixaPaciente;
		this.tipoConsulta = tipoConsulta;
		this.convenio = convenio;
		this.observacoes = observacoes;
		this.materiais = materiais;
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

	public String getQueixaPaciente() {
		return queixaPaciente;
	}

	public void setQueixaPaciente(String queixaPaciente) {
		this.queixaPaciente = queixaPaciente;
	}

	public String getTipoConsulta() {
		return tipoConsulta;
	}

	public void setTipoConsulta(String tipoConsulta) {
		this.tipoConsulta = tipoConsulta;
	}

	public String getConvenio() {
		return convenio;
	}

	public void setConvenio(String convenio) {
		this.convenio = convenio;
	}

	public String getObservacoes() {
		return observacoes;
	}

	public void setObservacoes(String observacoes) {
		this.observacoes = observacoes;
	}

	public String getMateriais() {
		return materiais;
	}

	public void setMateriais(String materiais) {
		this.materiais = materiais;
	}
	
}
