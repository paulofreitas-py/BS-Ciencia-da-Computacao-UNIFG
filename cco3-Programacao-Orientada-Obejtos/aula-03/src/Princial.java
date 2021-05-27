
public class Principal {

	public static void main(String[] args) {
		
		String texto = "";
		
		Carro meuCarrinho = new Carro();

		meuCarrinho.marca = "For";
		meuCarrinho.modelo = "Fiesta";
		meuCarrinho.cor = "Branca";
		meuCarrinho.combustivel = "Gasolina";
		
		Carro objetoCarro02 = new Carro();
		
		objetoCarro02.combustivel = "Nitrogenilo Liquido";
		objetoCarro02.modelo = "Lx35";
		objetoCarro02.cor = "Prata";
		objetoCarro02.marca = "Pernambuco 2021";
		
		texto = meuCarrinho.ligar();
		meuCarrinho.acelerar();
		meuCarrinho.frear();
		meuCarrinho.desligar();
		
		System.out.println("Meu carrinho"+meuCarrinho.marca);
		System.out.println("Meu carrinho"+meuCarrinho.cor);
		System.out.println("Meu carrinho"+meuCarrinho.combustivel);
		System.out.println("Meu carrinho vai ligar?"+texto);
		System.out.println("Meu carrinho esta acelenrando?"+meuCarrinho.acelerar());
		System.out.println("Meu carrinho vai parando:"+meuCarrinho.frear());
		System.out.println("Meu carrinho desligando :"+meuCarrinho.desligar());
		
		System.out.println(x); 
		System.out.print
	}

}
