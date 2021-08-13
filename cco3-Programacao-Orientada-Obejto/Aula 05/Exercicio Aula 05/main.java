public static void main(String[] args) {

    class Conta
    {
      String titular;
      int numero;
      String agencia;
      double saldo;
      String datadeabertura;
      
      void saca(double valor)
      {
          saldo = saldo-valor;
      }
      void deposita(double valor)
      {
          saldo = saldo + valor;
      }
      void calcularrendimento (double valor)
      {
          System.out.println(saldo);
      }
     
       
    }        
} 
