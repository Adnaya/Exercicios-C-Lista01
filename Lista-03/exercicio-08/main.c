#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 08 */
/* Escreva um algoritmo que leia um valor inicial A e imprima a sequência de
valores do cálculo de A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120. */

int main(){
	setlocale(LC_ALL,"Portuguese");

	int a, fat;

	printf("Digite o valor inicial para calcular seu fatorial:\n");
	scanf("%d", &a);
	printf("\t%d! = ",a);

 	 	for(fat = 1; a > 1; a--){
     	 	fat = fat * a;
			printf("%d x ",a);

  		}

  		printf("= %d", fat);
  		return 0;

}