package primeiroPrograma;

public class ProfessorUESB {
	String nome; 
	int cpf; 
	int rg; 
	int matricula; 
	int tituloEleitor; 
	String formacao; 
	String endereco;
	String email;
	int telefone;

	// =======> CONSTRUTORES <=======
	
	public ProfessorUESB() {}
	
	public ProfessorUESB(String nome, int telefone, String email, int cpf, int rg, String formacao, int matricula) {
		this.nome = nome;
		this.telefone = telefone;
		this.email = email;
		this.cpf = cpf;
		this.rg = rg;
		this.formacao = formacao;
		this.matricula = matricula;
	}
}
