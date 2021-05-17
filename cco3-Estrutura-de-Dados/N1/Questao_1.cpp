/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 Período
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Questão 1: 
Anualmente é cobrado de proprietários de veículos automotores o IPVA (Imposto sobre a propriedade de veículos automotores) em todos os estados do Brasil e o DF, 
podendo o mesmo ser pago em cota única, ou geralmente em até 3 cotas com juros. 
Sabendo-se que o mês em que o licenciamento deve ser renovado em um estado X é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, 
informe o mês em que o licenciamento deve ser renovado. Considere uma situação hipotética em que o dono do veículo faça o pagamento em cota única. 
(Use : Fev – final 0, mar – final 1, ...).
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

//função para limpar a tela
void limpatela(){
	system("CLS");
}

//função principal
int main(){
	//acentuação
	setlocale(LC_ALL, "");
	
	//variáveis
	int placa;
	int digitoFinal;
	
	printf("Programa que informa o mês no qual deve ser pago o IPVA, tecle ENTER para continuar.\n\n");
	getch();
	limpatela();				//Chama a função limpatela
	
	printf("Digite aqui os números da sua placa: ");
	scanf("%d",&placa);			//Recebe o valor do usuário 
	fflush(stdin);				//limpa buffer do teclado
	digitoFinal = placa % 10;   //Recebe o valor do último dígito da placa
	limpatela();				//Chama a função limpatela
	
	switch(digitoFinal){		//Executa de acordo com o valor de  digitoFinal
		case 0:
			printf("Final de placa 0, o IPVA deve ser pago em Fevereiro.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 1:
			printf("Final de placa 1, o IPVA deve ser pago em Março.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 2:
			printf("Final de placa 2, o IPVA deve ser pago em Abril.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 3:
			printf("Final de placa 3, o IPVA deve ser pago em Maio.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 4:
			printf("Final de placa 4, o IPVA deve ser pago em Junho.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 5:
			printf("Final de placa 5, o IPVA deve ser pago em Julho.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 6:
			printf("Final de placa 6, o IPVA deve ser pago em Julho.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 7:
			printf("Final de placa 7, o IPVA deve ser pago em Agosto.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 8:
			printf("Final de placa 8, o IPVA deve ser pago em Setembro.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
		case 9:
			printf("Final de placa 9, o IPVA deve ser pago em Outubro.\n");
			printf("\n\nPressione qualquer tecla para continuar.\n\n");
			getch();
			break;
	}
	limpatela();				//Chama a função limpatela
	printf("\n\nOperação finalizada pressione qualquer tecla para continuar.\n\n");
	getch();
}
