//Escalonamento Round-Robin

import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class round {

 @SuppressWarnings("unchecked")
 public static void main(String[] args) {
  Scanner scanner = new Scanner(System.in);

  // declaracao de variaveis
  int quantum, N, entrada, tempoAtual, execucao, q, temposFinais[], qteprocessos, novaDuracao, temposExecucao[];
  ArrayList ingressos, duracoes, processos, cpingressos, cpduracoes;
  String ordem;
  double tempoMedioExecucao, tempoMedioEspera;
  int contTeste = 0;
  String formato, saida;
  DecimalFormat nf = new DecimalFormat("0.00");

  quantum = scanner.nextInt();
  N = scanner.nextInt();
  while (N != 0) {
   contTeste++;
   processos = new ArrayList();
   ingressos = new ArrayList();
   duracoes = new ArrayList();
   ordem = "";
   qteprocessos = N;
   temposFinais = new int[N];
   temposExecucao = new int[N];

   // lendo os processos
   for (int i = 0; i < N; i++) {
    entrada = scanner.nextInt();
    ingressos.add(entrada);
    entrada = scanner.nextInt();
    duracoes.add(entrada);
   }

   
   cpingressos = (ArrayList) ingressos.clone();
   cpduracoes = (ArrayList) duracoes.clone();

   // int tmpInicial = ingressos.get(0);
   tempoAtual = ingressos.get(0);
   processos = new ArrayList();

   processos = new ArrayList();

   while (qteprocessos > 0) {

    // verifica antes de iniciar a execucao de um processo
    for (int i = 0; i < N; i++) {
     if (ingressos.get(i) != -1
       && ingressos.get(i) <= tempoAtual) {
      processos.add(i);
      ingressos.set(i, -1);

     }
    }

    if (processos.isEmpty()) {
     tempoAtual++;
    } else {
     execucao = processos.remove(0);
     ordem += "P" + (execucao + 1) + " ";
     q = quantum;
     while (q > 0 && duracoes.get(execucao) > 0) {
      tempoAtual++;
      q--;
      novaDuracao = duracoes.get(execucao) - 1;
      duracoes.set(execucao, novaDuracao);
     }
     if (duracoes.get(execucao) > 0) {
      // verificar primeiramente se algum processo entrou
      // durante
      // o
      // tempo de execucao
      for (int i = 0; i < N; i++) {
       if (ingressos.get(i) != -1
         && ingressos.get(i) <= tempoAtual) {
        processos.add(i);
        ingressos.set(i, -1);

       }
      }
      processos.add(execucao);
     } else {
      // processo acabou
      temposFinais[execucao] = tempoAtual;
      qteprocessos--;

     }
    }
   }

   // calculo de tempo medio de espera e execucao;
   tempoMedioExecucao = 0;
   tempoMedioEspera = 0;
   for (int i = 0; i < N; i++) {
    temposExecucao[i] = temposFinais[i] - cpingressos.get(i);
    tempoMedioExecucao += temposExecucao[i];
    tempoMedioEspera += temposExecucao[i] - cpduracoes.get(i);
   }

   tempoMedioExecucao = tempoMedioExecucao / N;
   tempoMedioEspera = tempoMedioEspera / N;
   System.out.println("Teste " + contTeste);

   formato = nf.format(tempoMedioExecucao);
   saida = "Tempo medio de execucao: " + formato + "s";
   saida = saida.replace(".", ",");
   System.out.println(saida);

   formato = nf.format(tempoMedioEspera);
   saida = "Tempo medio de espera: " + formato + "s";
   saida = saida.replace(".", ",");
   System.out.println(saida);

   System.out.println(ordem);
   System.out.println();
   N = scanner.nextInt();

  }
 }
}
