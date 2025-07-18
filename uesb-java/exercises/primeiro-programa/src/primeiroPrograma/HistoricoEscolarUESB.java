package primeiroPrograma;

public class HistoricoEscolarUESB {
	String disciplinasCursadas;
	String dataInicio;
	String nomeAluno;
	int cpf;
	String curso;
	int qtdSemestresCursados;
	
	// =======> CONSTRUTORES <======= 
	
	public HistoricoEscolarUESB() {}
	
	public HistoricoEscolarUESB(String disciplinasCursadas, String dataInicio, String nomeAluno, int cpf, String curso, int qtdSemestresCursados) {
		this.disciplinasCursadas = disciplinasCursadas;
		this.dataInicio = dataInicio;
		this.nomeAluno = nomeAluno;
		this.cpf = cpf;
		this.curso = curso;
		this.qtdSemestresCursados = qtdSemestresCursados;
	}
}
