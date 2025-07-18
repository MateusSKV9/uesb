package modelo;

public class RelatorioFinanceiro {
	private String periodo;
	 private String data;
	 private String formato;
	 
	 public RelatorioFinanceiro(String periodo, String data, String formato) {
		 this.periodo = periodo;
		 this.data = data;
		 this.formato = formato;
	 }

	public String getPeriodo() {
		return periodo;
	}

	public void setPeriodo(String periodo) {
		this.periodo = periodo;
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
