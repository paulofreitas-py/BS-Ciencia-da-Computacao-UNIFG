public class Animal
    {
      private String nome;
    
      public Animal(String n) {
        nome = n;
      }
    
      public void imp() {
        System.out.println("Nome: "+nome);
      }
    
      public String getName() { return(nome); }
    
      public void talk() {
        System.out.println("Eu nao falo");
      }