import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.math.BigDecimal;

/**
 * @author Henrique Borges A. Siqueira (hbas@cin.ufpe.br)
 * @author Renato Viana Ferreira (rvf@cin.ufpe.br)
 * 
 * 
 * modificacoes: Tiago Lins Falcão (tlf@cin.ufpe.br)
 */

public class Comparar {
	private File f1;
	private File f2;
	static int[] linhasDif;

	public Comparar(File f1, File f2) {
		this.f1 = f1;
		this.f2 = f2;
	}

	public int[] igual() throws Exception {
		linhasDif = new int[50];
		int i = 0;
		int[] retorno = new int[3];
		retorno[0] = -1;
		retorno[1] = 0;
		BufferedReader fr1 = new BufferedReader(new FileReader(f1));
		BufferedReader fr2 = new BufferedReader(new FileReader(f2));
		String linha = fr1.readLine();
		String linha2 = fr2.readLine();
		int line = 1;
		while ((linha != null || linha2 != null)) {
			if ((linha != null && !linha.equals(linha2))
					|| (linha == null && linha2 != null)) {
				if (i < linhasDif.length) {
					linhasDif[i] = line;
					retorno[0] = 1;
					i++;
				}
				retorno[1]++;
			}
			retorno[2]++;
			linha = fr1.readLine();
			linha2 = fr2.readLine();
			line++;
		}
		fr1.close();
		fr2.close();
		return retorno;
	}

	public static void main(String[] args) {
		try {
			File f1 = new File("leitura.txt");
			File f2 = new File("escrita.txt");
			int[] res = new Comparar(f1, f2).igual();
			int linha = res[0];
			int dif = res[1];
			int tot = res[2];
			BigDecimal med = new BigDecimal(tot - dif);
			med = med.multiply(new BigDecimal(100));
			med = med.divide(new BigDecimal(tot), 5, 5);

			if (linha == -1) {
				System.out.println("Arquivos identicos!");
			} else {
				System.out.println("Total de linhas: " + tot);
				System.out.println("Existem " + dif + " linhas diferentes.");
				System.out.print("As 50 primeiras linhas diferentes são: ");
				for (int i = 0; i < linhasDif.length && linhasDif[i] > 0; i++) {
					if (i % 17 == 0)
						System.out.println();

					System.out.print(" " + linhasDif[i] + " ");
				}
				System.out.println();
				System.out.println();
				System.out.print("A porcentagem de linhas iguais é: ");
				System.out.print(med.floatValue());
				System.out.println("%");
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
