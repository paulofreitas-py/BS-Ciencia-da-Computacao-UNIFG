public class Candidato_A {
    private int a;
    public int getA() {
        return a;
    }
    public void setA(int a) {
        this.a = a;
    }
}

public class Candidato_B {

    private int b;

    public int getB() {
        return b;
    }

    public void setB(int b) {
        this.b = b;
    
}

public class Candidato_C {
    private int c;

	  public int getC() {
        return c;
    }

    public void setC(int c) {
        this.c = c;
    }
}

import java.util.Scanner;

public class Exercicio_7 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int votantes = 0;
        int aux = 0;
        int voto;
        Candidato_A a = new Candidato_A();
        Candidato_B b = new Candidato_B();
        Candidato_C c = new Candidato_C();
        int nulo = 0;

        a.setA(0);
        b.setB(0);
        c.setC(0);

        System.out.print("Informe a quantidade de votantes: ");
        votantes = in.nextInt();

        while (aux < votantes) {
            System.out.println("Informe o seu voto");
            System.out.println("1-Candidato A");
            System.out.println("2-Candidato B");
            System.out.println("3-Candidato C");
            System.out.println("");
            System.out.print("Digite aqui o seu voto");
            voto = in.nextInt();
            if (voto == 1) {
                a.setA(a.getA() + 1);
            } else if (voto == 2) {
                b.setB(b.getB() + 1);
            } else if (voto == 3) {
                c.setC(c.getC() + 1);
            } else {
                nulo = nulo + 1;
            }
        }

        System.out.println("Votação encerrada, foram computados " + votantes + "votos.");
        System.out.println("-Candidato A: " + a.getA() + "votos");
        System.out.println("-Candidato B: " + b.getB() + "votos");
        System.out.println("-Candidato C: " + c.getC() + "votos");
        System.out.println("-Votos nulos: " + nulo);

        in.close();
    }
}public class ex7 {
    
}
