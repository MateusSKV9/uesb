package primeiroPrograma;

public class Doenca {
	String nome;
	String tipoDoenca;
	String grauContagiosidade;
	String sintomas;
	String grauMortalidade;
	boolean transmissividade;
	String tipoTransmissao;
	String faixaEtaria;
	String predominanciaEtnia;
	String tratamento;
	
	// =======> CONSTRUTORES <=======  
	
	public Doenca() {}
	
	public Doenca(String nome, String tipoDoenca, String grauContagiosidade, String sintomas, 
				  String grauMortalidade, boolean transmissividade, String tipoTransmissao, String faixaEtaria, 
				  String predominanciaEtnia, String tratamento) {
		this.nome = nome;
		this.tipoDoenca = tipoDoenca;
		this.grauContagiosidade = grauContagiosidade;
		this.sintomas = sintomas;
		this.grauMortalidade = grauMortalidade;
		this.transmissividade = transmissividade;
		this.tipoTransmissao = tipoTransmissao;
		this.faixaEtaria = faixaEtaria;
		this.predominanciaEtnia = predominanciaEtnia;
		this.tratamento = tratamento;
	}
}
