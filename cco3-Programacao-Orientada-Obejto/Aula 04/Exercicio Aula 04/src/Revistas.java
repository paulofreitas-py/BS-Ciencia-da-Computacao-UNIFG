import java.util.Date;

public class Revistas {
	int codigo;
	String titulo;
	String tipo;
	// Propriedades/Atributos da edição
	// Configurados via setEdicao
	int numeroEdicao;
	int numeroArtigos;
	Date dataEdicao;
	
	public Revistas(int codigo, String titulo, String tipo, int numEdicao, int numArtigos, Date dataEd) {
		this.codigo = codigo;
		this.titulo = titulo;
		this.tipo = tipo;
		this.setEdicao(numEdicao, numArtigos, dataEd);
	}
	
	public void setEdicao(int numEdicao, int numArtigos, Date dataEd) {
		this.numeroEdicao = numEdicao;
		this.numeroArtigos = numArtigos;
		this.dataEdicao = dataEd;
	}
	
	public void getEdicao() {
		System.out.println("Revistas:\n" + " Numero edicao: " + this.numeroEdicao + " | Numero de artigos: " + this.numeroArtigos + " | Data: " + this.dataEdicao);
	}
}
