
public class Editoras {
	int codEditora;
	String razaoSocial;
	String contato;
	String telefone;
	
	public Editoras(int codEditora, String razaoSocial, String contato, String telefone) {
		this.codEditora = codEditora;
		this.razaoSocial = razaoSocial;
		this.contato = contato;
		this.telefone = telefone;
	}
	
	public void listarDados() {
		System.out.println("Editora:\n" + " Codigo da editora: " + codEditora + " | Razao social: " + razaoSocial + " | Contato " + contato + " | Telefone: " + telefone);
	}
	
}
