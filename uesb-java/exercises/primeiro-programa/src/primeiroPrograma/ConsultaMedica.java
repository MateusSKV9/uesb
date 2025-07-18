package primeiroPrograma;

public class ConsultaMedica {
	String data;
	String horario;
	String nomePaciente;
	String nomeHospital;
	String nomeMedico;
	String tipoConsulta;
	String queixas;
	float valor;
	
	// =======> CONSTRUTORES <=======

	public ConsultaMedica() {}
	
	public ConsultaMedica(String data, String horario, String nomePaciente, String nomeHospital, 
						  String nomeMedico, String tipoConsulta, String queixas, float valor) {
		this.data = data;
		this.horario = horario;
		this.nomePaciente = nomePaciente;
		this.nomeHospital = nomeHospital;
		this.nomeMedico = nomeMedico;
		this.tipoConsulta = tipoConsulta;
		this.queixas = queixas;
		this.valor = valor;
	}
}
