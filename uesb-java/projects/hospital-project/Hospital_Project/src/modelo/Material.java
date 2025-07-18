package modelo;

public class Material {
	
	private String nomeMaterial;
	private int quantEstoque;
	private int quantMinimaEstoque;
	private String fornecedor;
	private float preco;
	
	// Deve haver um sistema - método - de alerta para baixo estoque // 
	
	public Material() {}
	
	public Material(String nomeMaterial, int quantEstoque, int quantMinimaEstoque, String fornecedor, float preco) {
		this.nomeMaterial = nomeMaterial;
		this.quantEstoque = quantEstoque;
		this.quantMinimaEstoque = quantMinimaEstoque;
		this.fornecedor = fornecedor;
		this.preco = preco;
	}
	
	
	public String toString() { 
		return nomeMaterial + ";" +
			   quantEstoque + ";" +
			   quantMinimaEstoque + ";" +
			   fornecedor + ";" +
			   preco + ";" ;
	}

	public String getNomeMaterial() {
		return nomeMaterial;
	}

	public void setNomeMaterial(String nomeMaterial) {
		this.nomeMaterial = nomeMaterial;
	}

	public int getQuantEstoque() {
		return quantEstoque;
	}

	public void setQuantEstoque(int quantEstoque) {
		this.quantEstoque = quantEstoque;
	}

	public int getQuantMinimaEstoque() {
		return quantMinimaEstoque;
	}

	public void setQuantMinimaEstoque(int quantMinimaEstoque) {
		this.quantMinimaEstoque = quantMinimaEstoque;
	}

	public String getFornecedor() {
		return fornecedor;
	}

	public void setFornecedor(String fornecedor) {
		this.fornecedor = fornecedor;
	}

	public float getPreco() {
		return preco;
	}

	public void setPreco(float preco) {
		this.preco = preco;
	}
	
}
