package primeiroPrograma;

public class Carro {
	int numeroChassi;
	String modelo;
	String marca;
	String cor;
	String motor;
	String potencia;
	String placa;
	int ano;
	
	// =======> CONSTRUTORES <=======
	
	public Carro() {}
	
	public Carro(int numeroChassi, String modelo, String marca, String cor, 
				 String motor, String potencia, String placa, int ano) {
		this.numeroChassi = numeroChassi;
		this.modelo = modelo;
		this.marca = marca;
		this.cor = cor;
		this.motor = motor;
		this.potencia = potencia;
		this.placa = placa;
		this.ano = ano;
	}
}
