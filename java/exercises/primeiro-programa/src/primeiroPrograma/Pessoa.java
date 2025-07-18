package primeiroPrograma;

public class Pessoa {
	String nome;
	int cpf;
	int rg;
	String dataNascimento;
	int idade;
	String cor;
	float peso;
	float altura;
	String nacionalidade;
	String naturalidade;
	
	// =======> CONSTRUTORES <=======
	
	public Pessoa() {}
	
	public Pessoa(String nome, int cpf, int rg, String dataNascimento, int idade, 
				  String cor, float peso, float altura, String nacionalidade, String naturalidade) {	
		this.nome = nome;
		this.cpf = cpf;
		this.rg = rg;
		this.dataNascimento = dataNascimento;
		this.idade = idade;
		this.cor = cor;
		this.peso = peso;
		this.altura = altura;
		this.nacionalidade = nacionalidade;
		this.naturalidade = naturalidade;
	}
}
