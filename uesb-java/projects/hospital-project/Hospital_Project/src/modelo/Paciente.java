package modelo;

public class Paciente {
	
	private String nome;
	private String dataNascimento;
	private Endereco endereco;
	private String telefone;
	private String tipoSangue;
	private float altura;
	private float peso;
	
	private String historicoMedico;
	private String convenio;
	
	public Paciente() {}
	
	public Paciente(String nome, String dataNascimento, Endereco endereco, String telefone, 
					String tipoSangue, float altura, float peso, String historicoMedico, String convenio) {
		this.nome = nome;
		this.dataNascimento = dataNascimento;
		this.endereco = endereco;
		this.telefone = telefone;
		this.tipoSangue = tipoSangue;
		this.altura = altura;
		this.peso = peso;
		this.historicoMedico = historicoMedico;  
		this.convenio = convenio;
	}
	
	
	public String toString() { // O método toString  retorna o objeto em formato de string
		return nome + ";" +
			   dataNascimento + ";" +
			   telefone + ";" +
			   tipoSangue + ";" +
			   altura + ";" +
			   peso + ";" +
			   historicoMedico + ";" +
			   convenio + ";" +
			   (endereco != null ? endereco.toString() : "Sem Endereço");
			   
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getDataNascimento() {
		return dataNascimento;
	}

	public void setDataNascimento(String dataNascimento) {
		this.dataNascimento = dataNascimento;
	}

	public Endereco getEndereco() {
		return endereco;
	}

	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

	public String getTipoSangue() {
		return tipoSangue;
	}

	public void setTipoSangue(String tipoSangue) {
		this.tipoSangue = tipoSangue;
	}

	public float getAltura() {
		return altura;
	}

	public void setAltura(float altura) {
		this.altura = altura;
	}

	public float getPeso() {
		return peso;
	}

	public void setPeso(float peso) {
		this.peso = peso;
	}

	public String getHistoricoMedico() {
		return historicoMedico;
	}

	public void setHistoricoMedico(String historicoMedico) {
		this.historicoMedico = historicoMedico;
	}

	public String getConvenio() {
		return convenio;
	}

	public void setConvenio(String convenio) {
		this.convenio = convenio;
	}
		
}
