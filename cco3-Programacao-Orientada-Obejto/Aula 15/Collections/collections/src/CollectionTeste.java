import java.io.*;
import java.util.*;

class CollectionTeste{
  public static void main(String[] args){
    int arr[] = new int[] {1, 2, 3, 4};
    Vector<Integer> vetor = new Vector();
    Hashtable<Integer, String> hashT = new Hashtable();

    vetor.addElement(1);
    vetor.addElement(2);

    hashT.put(1, "Nome");
    hashT.put(2, "Sobrenome");

    System.out.println(arr[0]);
    System.out.println(vetor.elementAt(0));
    System.out.println(hashT.get(1));
    
  }
}
/*------------------------------------------------------------------------------*/
import java.io.*;
import java.util.*;

class Teste {
  public static void main(String[] args){
    Vector<Integer> vetor = new Vector<Integer>();
    for(int i = 1; i <= 5; i ++){
      vetor.add(i);
    }
    System.out.println(vetor);

    vetor.remove(3);

    System.out.println(vetor);

    for(int i = 0; i < vetor.size(); i++){
      System.out.println(vetor.get(i) + " ");
    }
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    System.out.println(lista_de_carros);
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    System.out.println(lista_de_carros.get(0));   //Retorna o elemento do índice 0
    System.out.println(lista_de_carros.get(5));   //ERRO: o tamanho do array só vai até 4 {0, 1, 2, 3, 4}
    System.out.println(lista_de_carros.get(-1));    //ERRO: não tem esse valor no array {0, 1, 2, 3, 4}
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    lista_de_carros.set(0, "Corsa");
    System.out.println(lista_de_carros);
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    lista_de_carros.remove(0);
    System.out.println(lista_de_carros);
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    lista_de_carros.clear();
    System.out.println(lista_de_carros);
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    System.out.println(lista_de_carros.size());
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    for(int i = 0; i < lista_de_carros.size(); i++){
      System.out.println(lista_de_carros.get(i));
    }
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");
    for(String i : lista_de_carros){
      System.out.println(i);
    }
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<Integer> lista_de_numeros = new ArrayList<Integer>();
    lista_de_numeros.add(10);
    lista_de_numeros.add(15);
    lista_de_numeros.add(20);
    lista_de_numeros.add(25);
    for(int i : lista_de_numeros){
      System.out.println(i);
    }
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;

public class Main{
  public static void main(String[] args){
    ArrayList<String> lista_de_carros = new ArrayList<String>();
    lista_de_carros.add("Volvo");
    lista_de_carros.add("BMW");
    lista_de_carros.add("Ford");
    lista_de_carros.add("Mazda");
    lista_de_carros.add("Celta");

    Collections.sort(lista_de_carros);    //Ordena por ordem alfabética

    for(String i : lista_de_carros){
      System.out.println(i);
    }
  }
}
/*------------------------------------------------------------------------------*/
import java.util.ArrayList;
import java.util.Arrays;

public class Desafio{
  public static void main(String[] args){
    String[] minha_lista_codigo = new String[] {"Python", "Java", "PHP", "Perl", "C#", "C++"};
    ArrayList<String> lista = new ArrayList<String>(Arrays.asList(minha_lista_codigo));

    System.out.println(lista);
  }
}
/*------------------------------------------------------------------------------*/
