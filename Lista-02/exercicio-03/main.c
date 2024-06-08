#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 03 */
/* Faça um algoritmo que receba três números inteiros e mostre o maior número
entre eles. Considere que os números sempre serão diferentes. */

int main(){
	  setlocale(LC_ALL,"Portuguese");
		int numUm, numDois, numTres;

		printf("Para ler o maior número, insira 3 números inteiros de forma que não se repitam: \nInsira o 1° número:");
		scanf("%d",&numUm);
		printf("Insira o 2° número:");
		scanf("%d",&numDois);
		printf("Insira o 3° número:");
		scanf("%d",&numTres);

		if(numUm>numDois && numUm>numTres){
            printf("O número %d é o maior número.",numUm);

		}else if(numDois>numTres){
            printf("O número %d é o maior número.",numDois);

		}else{
            printf("O número %d é o maior número.",numTres);

		}

    return 0;
}