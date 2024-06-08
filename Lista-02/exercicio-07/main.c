#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 07 */
/* Faça um algoritmo que receba um número inteiro qualquer e mostre se ele é
par ou ímpar. */

int main(){

		setlocale(LC_ALL,"Portuguese");
		int numero;

		printf("Para descobrir se um número é ímpar ou par, insira-o a seguir:\n");
		scanf("%d",&numero);

		if((numero%2) != 0){
				printf("O NÚMERO É ÍMPAR.");

		}else{
				printf("O NÚMERO É PAR.");

		}
    return 0;
}