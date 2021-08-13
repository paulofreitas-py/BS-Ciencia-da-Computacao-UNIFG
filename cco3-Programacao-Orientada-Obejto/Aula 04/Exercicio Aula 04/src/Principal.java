import java.util.Date;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		Date dataAtual = new Date();
		int nArtigos = 0;
		int nEdicao = 0;
		
		Editoras infoEditora = new Editoras(100, "Empresa LTDA.", "editora@gmail.com", "+55 8199999-1010");
		Produtos infoProdutos = new Produtos(500, "Livros", 20, 8);
		Revistas infoRevistas = new Revistas(101, "Revistas legais", "Moda", 1, 10, dataAtual);
		
		infoEditora.listarDados();
		infoProdutos.listarDados();
		infoRevistas.getEdicao();
		
		Scanner teclado = new Scanner(System.in);
		
		String resp = "";
		
		System.out.println("\nDeseja alterar as informacoes da edicao? [S]im ou [N]ão");
		resp = teclado.nextLine().toUpperCase();
		
		switch(resp) {
		case "S":
		case "SIM":
			
			Scanner inputTecladoSetEdicao = new Scanner(System.in);
			
			System.out.println("\nDigite o numero da edicao: \n");
			nEdicao = inputTecladoSetEdicao.nextInt(); 
			
			System.out.println("Digite a quantidade de artigos: \n");
			nArtigos = inputTecladoSetEdicao.nextInt();
			
			infoRevistas.setEdicao(nEdicao, nArtigos, dataAtual);
			
			infoEditora.listarDados();
			infoProdutos.listarDados();	
			infoRevistas.getEdicao();
		break;
		
		case "N":
		case "NAO":
		case "NÃO":
			System.out.println("Programa finalizado!");
		break;
		}
		
		teclado.close();
	}
}
