package primeiroPrograma;

public class Medico {
	String nome;
	int cpf;
	int rg;
	String CRM;
	String formacao;
	String especializacao;
	
	// =======> CONSTRUTORES <=======
	
	public Medico() {}
	
	public Medico(String nome, int cpf, int rg, String CRM, String formacao, String especializacao) {
		this.nome = nome;
		this.cpf = cpf;
		this.rg = rg;
		this.CRM = CRM;
		this.formacao = formacao;
		this.especializacao = especializacao;
	}
}
