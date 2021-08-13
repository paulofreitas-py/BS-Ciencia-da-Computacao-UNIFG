//Escalonamento SJF
import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Scanner;

public class sjf {

 // versao 2

 @SuppressWarnings("unchecked")
 public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);

  // declaracao de variaveis
  int N, entrada;
  ArrayList processos, ingressos, cpingressos = new ArrayList(), duracoes;
  int[] temposFinais = new int[1], temposIniciais = new int[1];
  int idProcessoAtual;
  String ordemExecucao = "", formato, saida;
  double tempoEspera, tempoExecucao;
  int contTeste = 0;
  DecimalFormat nf = new DecimalFormat("0.00");

  N = scanner.nextInt();

  while (N != 0) {
   contTeste++;

   ordemExecucao = "";
   processos = new ArrayList();
   ingressos = new ArrayList();
   duracoes = new ArrayList();

   temposFinais = new int[N];
   temposIniciais = new int[N];
   for (int i = 0; i < N; i++) {
    // le e adiciona tempo de ingresso do processo
    entrada = scanner.nextInt();
    ingressos.add(entrada);
    // le e adiciona tempo de duracao do processo
    entrada = scanner.nextInt();
    duracoes.add(entrada);
   }
   // cria copia da lista de tempos de ingressos devido a modificacoes
   cpingressos = (ArrayList) ingressos.clone();

   int execucao;
   int qteprocessos = N;
   // tempo inicial = primeiro tempo da lista de ingressos
   int tempoAtual = ingressos.get(0);
   while (qteprocessos > 0) {
    // percorre ingressos para achar processos que ingressam nesse
    // tempo
    processos = new ArrayList();
    for (int i = 0; i < N; i++) {
     if (ingressos.get(i) != -1
       && ingressos.get(i) <= tempoAtual) {
      // adicionar na lista de processos
      processos.add(i);
     }
    }

    // assumindo que o primeiro da lista eh o de menor duracao
    if (processos.isEmpty()) {
     tempoAtual++;
    } else {
     execucao = processos.get(0);
     for (int i = 0; i < processos.size(); i++) {
      idProcessoAtual = processos.get(i);
      // se a duracao do processo atual for menor do que a
      // menor
      // duracao
      // ja encontrada
      if (duracoes.get(idProcessoAtual) < duracoes
        .get(execucao)) {
       // entao alteramos o processo que vai executar
       execucao = processos.get(i);
      }
     }

     temposIniciais[execucao] = tempoAtual;
     tempoAtual += duracoes.get(execucao);
     temposFinais[execucao] = tempoAtual;
     ingressos.set(execucao, -1);

     // define ordem de execucao
     ordemExecucao += "P" + (execucao + 1) + " ";
     qteprocessos--;
    }
   }

   // calculo tempo de execucao e tempo de espera
   tempoExecucao = 0;
   tempoEspera = 0;
   for (int i = 0; i < N; i++) {
    tempoExecucao += temposFinais[i] - cpingressos.get(i);
    tempoEspera += temposIniciais[i] - cpingressos.get(i);
   }
   tempoExecucao = tempoExecucao / N;
   tempoEspera = tempoEspera / N;

   // DecimalFormat f = (DecimalFormat) DecimalFormat
   // .getInstance(new Locale("pt", "BR"));
   // String saida = "Tempo medio de execucao: "
   // + f.format(tempoExecucao) + "s";

   System.out.println("Teste " + contTeste);

   formato = nf.format(tempoExecucao);
   saida = "Tempo medio de execucao: " + formato + "s";
   saida = saida.replace(".", ",");
   System.out.println(saida);

   formato = nf.format(tempoEspera);
   saida = "Tempo medio de espera: " + formato + "s";
   saida = saida.replace(".", ",");
   System.out.println(saida);

   System.out.println(ordemExecucao);
   System.out.println();
   N = scanner.nextInt();
  }
 }
}
