package modelo;

public class Medico {
	
	private String nome;
	private String especialidade;
	private String crm;
	private String contato;
	private String horariosAtendimento;
	private float valorConsultaParticular;
	private Endereco endereco;

	
	public Medico() {}
	
	public Medico(String nome, String especialidade, String crm, String contato, 
				  String horariosAtendimento, float valorConsultaParticular, Endereco endereco) {
		this.nome = nome;
		this.especialidade = especialidade;
		this.crm = crm;
		this.contato = contato;
		this.horariosAtendimento = horariosAtendimento;
		this.valorConsultaParticular = valorConsultaParticular;
		this.endereco = endereco;
	}
	
	
	public String toString() { 
		return nome + ";" +
				especialidade + ";" +
				crm + ";" +
				contato + ";" +
				horariosAtendimento + ";" +
				valorConsultaParticular + ";" +
			   (endereco != null ? endereco.toString() : "Sem Endereço");
			   
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getEspecialidade() {
		return especialidade;
	}

	public void setEspecialidade(String especialidade) {
		this.especialidade = especialidade;
	}

	public String getCrm() {
		return crm;
	}

	public void setCrm(String crm) {
		this.crm = crm;
	}

	public String getContato() {
		return contato;
	}

	public void setContato(String contato) {
		this.contato = contato;
	}

	public String getHorariosAtendimento() {
		return horariosAtendimento;
	}

	public void setHorariosAtendimento(String horariosAtendimento) {
		this.horariosAtendimento = horariosAtendimento;
	}

	public float getValorConsultaParticular() {
		return valorConsultaParticular;
	}

	public void setValorConsultaParticular(float valorConsultaParticular) {
		this.valorConsultaParticular = valorConsultaParticular;
	}
	
}
