package primeiroPrograma;

public class ProdutoMercado {
	float preco;
	String marca;
	String dataValidade;
	String dataFabricacao;
	String fornecedor;
	String composicaoIngredientes;
	int codigoBarra;
	int qtdEstoque;
	String armazenamento;
	float precoCompra;
	float precoVenda;
	
	// =======> CONSTRUTORES <=======
	
	public ProdutoMercado() {}
	
	public ProdutoMercado(float preco, String marca, String dataValidade, String dataFabricacao, 
						  String fornecedor, String composicaoIngredientes, int codigoBarra, int qtdEstoque, 
						  String armazenamento, float precoCompra, float precoVenda) {
		this.preco = preco;
		this.marca = marca;
		this.dataValidade = dataValidade;
		this.dataFabricacao = dataFabricacao;
		this.fornecedor = fornecedor;
		this.composicaoIngredientes = composicaoIngredientes;
		this.codigoBarra = codigoBarra;
		this.qtdEstoque = qtdEstoque;
		this.armazenamento = armazenamento;
		this.precoCompra = precoCompra;
		this.precoVenda = precoVenda;
	}
}
