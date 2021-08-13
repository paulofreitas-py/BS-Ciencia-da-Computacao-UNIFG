
//Escalonamento por Prioridades
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class prio {

 public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);

  // declaracao de variaveis
  int N, entrada, tempoAtual, execucao, idProcessoAtual, qteprocessos;
  ArrayList ingressos, duracoes, prioridades, processos, cpingressos;
  int[] temposFinais, temposIniciais;
  String ordemExecucao;
  int contTeste = 0;
  String formato, saida;
  DecimalFormat nf = new DecimalFormat("0.00");

  N = scanner.nextInt();

  while (N != 0) {
   contTeste++;
   processos = new ArrayList();
   ingressos = new ArrayList();
   duracoes = new ArrayList();
   prioridades = new ArrayList();

   // lendo os processos
   for (int i = 0; i < N; i++) {
    // le e adiciona dados dos processos em suas respectivas listas
    entrada = scanner.nextInt();
    ingressos.add(entrada);
    entrada = scanner.nextInt();
    duracoes.add(entrada);
    entrada = scanner.nextInt();
    prioridades.add(entrada);
   }
   temposIniciais = new int[N];
   temposFinais = new int[N];
   // cria copia da lista de tempos de ingressos devido a modificacoes
   cpingressos = (ArrayList) ingressos.clone();

   ordemExecucao = "";

   // tempo comeca do primeiro processo a ingressar
   tempoAtual = ingressos.get(0);

   qteprocessos = N;
   while (qteprocessos > 0) {
    // percorrendo ingressos para descobrir processos que entram no
    // tempo
    // atual
    processos = new ArrayList();
    for (int i = 0; i < N; i++) {
     if (ingressos.get(i) != -1
       && ingressos.get(i) <= tempoAtual) {
      // adicionar na lista de processos
      processos.add(i);
     }
    }

    if (processos.isEmpty()) {
     tempoAtual++;
    } else {
     // assumindo que o primeiro da lista eh o de menor
     // prioridade
     execucao = processos.get(0);
     for (int i = 0; i < processos.size(); i++) {
      idProcessoAtual = processos.get(i);
      // se a prioridade do processo atual for menor do que a
      // menor
      // prioridade
      // ja encontrada
      if (prioridades.get(idProcessoAtual) < prioridades
        .get(execucao)) {
       // entao alteramos o processo que vai executar
       execucao = processos.get(i);
      }
     }
     // System.out.println("vou executar o P" + (execucao + 1) +
     // " de prioridade " + prioridades.get(execucao));
     // tempo que o processo comeca a executar
     temposIniciais[execucao] = tempoAtual;

     tempoAtual += duracoes.get(execucao);

     // tempo que o processo termina de executar
     temposFinais[execucao] = tempoAtual;
     ingressos.set(execucao, -1);

     // define ordem de execucao
     ordemExecucao += "P" + (execucao + 1) + " ";

     qteprocessos--;
    }
   }

   // calculo tempo de execucao e tempo de espera
   double tempoExecucao = 0, tempoEspera = 0;
   for (int i = 0; i < N; i++) {
    tempoExecucao += temposFinais[i] - cpingressos.get(i);
    tempoEspera += temposIniciais[i] - cpingressos.get(i);
   }
   tempoExecucao = tempoExecucao / N;
   tempoEspera = tempoEspera / N;
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
