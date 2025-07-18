package primeiroPrograma;

public class ClienteMercado {
	String nome;
	int cpf;
	String preferencias;
	
	// =======> CONSTRUTORES <======= 
	
	public ClienteMercado() {}
	
	public ClienteMercado(String nome, int cpf, String preferencias) {
		this.nome = nome;
		this.cpf = cpf;
		this.preferencias = preferencias;
	}
}
