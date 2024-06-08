#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 06 */
/* Construa um algoritmo que leia o código de um determinado produto e mostre
a sua classificação. Para isso, utilize a estrutura de decisão switch. */

int main(){

		setlocale(LC_ALL,"Portuguese");
		 int cod;

            printf("Escreva o código:\n");
            scanf("%d",&cod);

		 switch(cod){
            case 1:
               printf("ALIMENTO NÃO PERECÍVEL");
                break;
            case 2:
            case 3:
            case 4:
               printf("ALIMENTO PERECÍVEL.");
                break;
            case 5:
            case 6:
               printf("VESTUÁRIO.");
                break;
            case 7:
               printf("HIGIENE PESSOAL.");
                break;
            case 8:
            case 9:
            case 10:
               printf("UTENSÍLIOS DOMÉSTICOS.");
                break;
            default:
            printf("CÓDIGO INVÁLIDO. INSIRA O CÓDIGO CORRESPONDENTE");

		 }

		return 0;
}