public class Nota_1 {

    private double nota;

    public double getNota() {
        return nota;
    }

    public void setNota(double nota) {
        this.nota = nota;
    }

}

public class Nota_2 {

    private double nota;

    public double getNota() {
        return nota;
    }

    public void setNota(double nota) {
        this.nota = nota;
    }

}

public class Nota_3 {

    private double nota;

    public double getNota() {
        return nota;
    }

    public void setNota(double nota) {
        this.nota = nota;
    }

}

public class Media {

    public void mediaFinal(double nota1, double nota2, double nota3) {
        double mediaFinal = (nota1 + nota2 + nota3) / 3;
        System.out.println("A média final do aluno foi: " + mediaFinal);

        if (mediaFinal >= 7) {
            System.out.println("Aluno aprovado.");
        } else {
            System.out.println("Aluno reprovado.");
        }
    }
}

import java.util.Scanner;
public class Exercicio_2 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        Nota_1 nota1 = new Nota_1();
        Nota_2 nota2 = new Nota_2();
        Nota_3 nota3 = new Nota_3();
        Media media = new Media();

        System.out.print("Digite aqui a primeira nota do aluno: ");
        nota1.setNota(in.nextDouble());

        System.out.print("Digite aqui a segunfa nota do aluno: ");
        nota2.setNota(in.nextDouble());

        System.out.print("Digite aqui a segunfa nota do aluno: ");
        nota3.setNota(in.nextDouble());

        System.out.println("---------------------------------------------------------------");
        media.mediaFinal(nota1.getNota(), nota2.getNota(), nota3.getNota());

        in.close();
    }
}