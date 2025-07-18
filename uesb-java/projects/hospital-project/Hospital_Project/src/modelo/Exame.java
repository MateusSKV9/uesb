package modelo;

public class Exame {
	
	private String nomeExame;
	private String descricao;
	private String tipoExame;
	private float valorParticular;
	private String materiais;
	private String medico;
		
	public Exame() {}
	
	public Exame(String nomeExame, String descricao, String tipoExame, float valorParticular, String materiais, String medico) {
		this.nomeExame = nomeExame;
		this.descricao = descricao;
		this.tipoExame = tipoExame;
		this.valorParticular = valorParticular;
		this.materiais = materiais;
		this.medico = medico;				
	}
	
	
	public String toString() {
		return nomeExame + ";"+
				descricao + ";" +
				tipoExame + ";" +
				valorParticular + ";" +
				materiais + ";" +
				medico + ";";
	}

	public String getNomeExame() {
		return nomeExame;
	}

	public void setNomeExame(String nomeExame) {
		this.nomeExame = nomeExame;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public String getTipoExame() {
		return tipoExame;
	}

	public void setTipoExame(String tipoExame) {
		this.tipoExame = tipoExame;
	}

	public float getValorParticular() {
		return valorParticular;
	}

	public void setValorParticular(float valorParticular) {
		this.valorParticular = valorParticular;
	}

	public String getMateriais() {
		return materiais;
	}

	public void setMateriais(String materiais) {
		this.materiais = materiais;
	}

	public String getMedico() {
		return medico;
	}

	public void setMedico(String medico) {
		this.medico = medico;
	}		

}
