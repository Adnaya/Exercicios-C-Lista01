#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 08 */
/* Construa um algoritmo para calcular o valor a ser pago pelo período de
estacionamento do automóvel (PAG). O usuário entra com os seguintes dados:

hora (HE) e minuto (ME) de entrada, hora (HS) e minuto (MS) de saída. Sabe-
se que este estacionamento cobra hora cheia, ou seja, se passar um minuto

ele cobra a hora inteira. O valor cobrado pelo estacionamento é:
• R$ 4,00 para 1 hora de estacionamento
• R$ 6,00 para 2 horas de estacionamento
• R$ 1,00 por hora adicional (acima de 2 horas)*/

int main(){

	setlocale(LC_ALL,"Portuguese");
	int hEntrada,mEntrada, hSaida, mSaida, periodo, horas, pagar;
	float minutos;

		printf("SISTEMA CÁLCULO PERÍODO DE ESTACIONAMENTO\nInsira a hora de entrada do automóvel:");
		scanf("%d",&hEntrada);
		printf("Insira o minuto de entrada do automóvel:");
		scanf("%d",&mEntrada);
		printf("Insira a hora de saída do automóvel:");
		scanf("%d",&hSaida);
		printf("Insira o minuto de saída do automóvel:");
		scanf("%d",&mSaida);

			periodo = (mSaida + (hSaida*60))-(mEntrada + (hEntrada*60));

			horas = periodo/60;
			minutos = periodo%60;

      if(minutos>=1){
				horas = horas+1;
				pagar =6+(horas-2)*1;

				printf("Cobrança Estacionamento\n TOTAL: R$%d,00",pagar);

			}else if(horas<=1){
				printf("Cobrança Estacionamento\n TOTAL: R$4,00");

			}else if(horas>1 && horas<=2){
				printf("Cobrança Estacionamento\n TOTAL: R$6,00");

			}
    return 0;

}