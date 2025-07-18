package primeiroPrograma;

public class DisciplinaUESB {
	String area;
	String nome;
	int cargaHoraria;
	String metodologia;
	String ementa;
	String depatarmento;
	String preRequisitos;
	int codigo;
	
	// =======> CONSTRUTORES <=======
	
	public DisciplinaUESB() {}
	
	public DisciplinaUESB(String area, String nome, int cargaHoraria, String metodologia, 
						   String ementa, String departamento, String preRequisitos, int codigo) {
		this.area = area;
		this.nome = nome;
		this.cargaHoraria = cargaHoraria;
		this.metodologia = metodologia;
		this.ementa = ementa;
		this.depatarmento = departamento;
		this.preRequisitos = preRequisitos;
		this.codigo = codigo;
	}
}
