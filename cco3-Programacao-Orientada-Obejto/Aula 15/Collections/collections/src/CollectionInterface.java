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