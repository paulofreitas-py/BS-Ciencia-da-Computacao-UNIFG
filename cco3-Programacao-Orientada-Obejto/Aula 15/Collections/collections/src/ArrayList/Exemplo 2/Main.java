import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    System.out.println(lista_de_carros.get(0));    //Retorna o elemento do índice 0
    System.out.println(lista_de_carros.get(5));    //ERRO: o tamanho do array só vai até 4 {0, 1, 2, 3, 4}
    System.out.println(lista_de_carros.get(-1));    //ERRO: não tem esse valor no array {0, 1, 2, 3, 4}
  }
}