package primeiroPrograma;

public class Computador {
	String processador;
	String placaMae;
	String memoriaRAM;
	String memoriaSecundaria;
	String tipoGabinete;
	String tipoFonteAlimentacao;
	String perifericos;
	
	// =======> CONSTRUTORES <=======
	
	public Computador() {}
	
	public Computador(String processador, String placaMae, String memoriaRAM, String memoriaSecundaria, 
					  String tipoGabinete, String tipoFonteAlimentacao, String perifericos) {
		this.processador = processador;
		this.placaMae = placaMae;
		this.memoriaRAM = memoriaRAM;
		this.memoriaSecundaria = memoriaSecundaria;
		this.tipoGabinete = tipoGabinete;
		this.tipoFonteAlimentacao = tipoFonteAlimentacao;
		this.perifericos = perifericos;
	}
}
