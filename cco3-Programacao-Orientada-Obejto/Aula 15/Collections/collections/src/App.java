import java.io.*;
import java.util.*;

class CollectionTeste 
{`
    public static void main(String[] args)
    {
        int arr[] = new int[] { 1, 2, 3, 4 };
        Vector<Integer> vetor = new Vector();
        Hashtable<Integer, String> hasht = new Hashtable();
    
        vetor.addElement(1);
        vetor.addElement(2);
    
        hashT.put(1, "Paulo");
        hashT.put(2, "Freitas");

        System.out.println(arr[0]);
        System.out.println(vetor.elementAt(0));
        System.out.println(hashT.get(1));

    }
}