
public class Produtos {
	int codigo;
	String descProduto;
	float preco;
	int quantidade;
	
	public Produtos(int codigo, String descProduto, float preco, int quantidade) {
		this.codigo = codigo;
		this.descProduto = descProduto;
		this.preco = preco;
		this.quantidade = quantidade;
	}
	
	public void listarDados() {
		System.out.println("Produto:\n" + " Codigo: " + codigo + " | Descricao do produto: " + descProduto + " | Preco: " + preco + " | Quantidade: " + quantidade);
	}
}

