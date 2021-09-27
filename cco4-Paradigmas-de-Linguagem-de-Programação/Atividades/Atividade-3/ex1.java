public class Numero {

    private int numero;

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

}

import java.util.Scanner;

public class Exercicio_1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Numero numero = new Numero();

        System.out.print("Digite aqui um valor inteiro: ");
        numero.setNumero(in.nextInt());

        if (numero.getNumero() > 0) {
            System.out.println("O número digitado é positivo.");
        } else if (numero.getNumero() < 0) {
            System.out.println("O número digitado é negativo.");
        } else {
            System.out.println("O número digitado é zero.");
        }

        if (numero.getNumero() % 2 == 0) {
            System.out.println("O número digitado é par.");
        } else {
            System.out.println("O número digitado é ímpar.");
        }

        in.close();
    }
}