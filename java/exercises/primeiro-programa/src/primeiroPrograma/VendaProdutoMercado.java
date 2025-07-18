package primeiroPrograma;

public class VendaProdutoMercado {
	String nomeComprador;
	int qtdProduto;
	float preco;
	String dataVenda;
	String nomeVendedor;
	
	// =======> CONSTRUTORES <=======
	
	public VendaProdutoMercado() {}
	
	public VendaProdutoMercado(String nomeComprador, int qtdProduto, float preco, String dataVenda, String nomeVendedor) {
		this.nomeComprador = nomeComprador;
		this.qtdProduto = qtdProduto;
		this.preco = preco;
		this.dataVenda = dataVenda;
		this.nomeVendedor = nomeVendedor;
	}
}
