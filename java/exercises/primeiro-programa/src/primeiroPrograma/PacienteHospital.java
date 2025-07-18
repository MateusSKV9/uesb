package primeiroPrograma;

public class PacienteHospital {
	String nome;
	int rg;
	int cpf;
	int idade;
	float altura;
	float peso;
	String tipoSanguineo;
	
	// =======> CONSTRUTORES <=======
	
	public PacienteHospital() {}
	
	public PacienteHospital(String nome, int rg, int cpf, int idade, float altura, float peso, String tipoSanguineo) {
		this.nome = nome;
		this.rg = rg;
		this.cpf = cpf;
		this.idade = idade;
		this.altura = altura;
		this.peso = peso;
		this.tipoSanguineo = tipoSanguineo;
	}
}
