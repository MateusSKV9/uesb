package modelo;

public class RelatorioMaterial {
	private String periodo;
	 private String tipoExame;
	 private String data;
	 private String formato;
	 
	 public RelatorioMaterial(String periodo, String tipoExame, String data, String formato) {
		 this.periodo = periodo;
		 this.tipoExame = tipoExame;
		 this.data = data;
		 this.formato = formato;
	 }

	public String getPeriodo() {
		return periodo;
	}

	public void setPeriodo(String periodo) {
		this.periodo = periodo;
	}

	public String getTipoExame() {
		return tipoExame;
	}

	public void setTipoExame(String tipoExame) {
		this.tipoExame = tipoExame;
	}

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}

	public String getFormato() {
		return formato;
	}

	public void setFormato(String formato) {
		this.formato = formato;
	}
	 
	 
}
