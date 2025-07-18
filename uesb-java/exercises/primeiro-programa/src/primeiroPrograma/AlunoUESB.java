package primeiroPrograma;

public class AlunoUESB {
	String nome;
	int cpf;
	int rg;
	int matricula;
	int tituloEleitor;
	String curso;
	String periodoCurso;
	String endereco;
	String email;
	int telefone;
	
	// =======> CONSTRUTORES <=======
	
	public AlunoUESB() {}
	
	public AlunoUESB(String nome, int cpf, int rg, int matricula, int tituloEleitor, String curso, 
					 String periodoCurso, String endereco, String email, int telefone) {
		this.nome = nome;
		this.cpf = cpf;
		this.rg = rg;
		this.matricula = matricula;
		this.tituloEleitor = tituloEleitor;
		this.curso = curso;
		this.periodoCurso = periodoCurso;
		this.endereco = endereco;
		this.email = email;
		this.telefone = telefone;
	}
}
