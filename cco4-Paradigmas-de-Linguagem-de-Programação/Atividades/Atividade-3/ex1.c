static void Main(string[] args){
  Console.Write("Informe um valor inteiro: ");
  int num = int.Parse(Console.ReadLine());
 
  if(num % 2 == 0)
    Console.WriteLine("Você informou um numero par");
  else
    Console.WriteLine("Você informou um numero impar");
 
  Console.WriteLine("\nPressione qualquer tecla para sair...");
  // pausa o programa
  Console.ReadKey();
}