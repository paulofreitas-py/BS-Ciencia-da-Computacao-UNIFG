public class Conta {

   private double saldo;

   public Conta(double saldo) {

       this.saldo = saldo;

   }

   public static void main(String[] args) {

       Conta conta = new Conta(4000);

       conta.saca(190);

       conta.deposita(180);

       System.out.println("Novo saldo: " + conta.calculaRendimento());

   }

   public void saca(double valor) {

       this.saldo -= valor;

       System.out.println("Você sacou " + valor + "\nSeu saldo atual é: " + saldo);

   }

   public void deposita(double valor) {

       this.saldo += valor;

       System.out.println("Você depositou " + valor + "\nSeu saldo atual é: " + saldo);

   }

   public double calculaRendimento() {

       return (this.saldo * 0.1) + this.saldo;

   }

}

