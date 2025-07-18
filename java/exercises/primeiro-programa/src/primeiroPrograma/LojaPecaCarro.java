package primeiroPrograma;

public class LojaPecaCarro {
	String nome;
	String endereco;
	String dono;
	String dimensoes;
	String tipoPecasVendidas;
	int telefone;
	int qtdFuncionarios;
	
	// =======> CONSTRUTORES <=======  
	
	public LojaPecaCarro() {}
	
	public LojaPecaCarro(String nome, String endereco, String dono, String dimensoes, 
						 String tipoPecasVendidas, int telefone, int qtdFuncionarios) {
		this.nome = nome;
		this.endereco = endereco;
		this.dono = dono;
		this.dimensoes = dimensoes;
		this.tipoPecasVendidas = tipoPecasVendidas;
		this.telefone = telefone;
		this.qtdFuncionarios = qtdFuncionarios;
	}
}
