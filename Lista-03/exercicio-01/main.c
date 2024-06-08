#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 01*/
/* Desenvolver um algoritmo que efetue a soma de todos os números ímpares
que são múltiplos de três e que se encontram no conjunto dos números de 1 até
500. */

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int i=0, soma=0;
	
	while(i<=500){
		if((i%2 !=0) && (i%3 == 0)){
			soma = soma+i;		
		}
		i++;
	}
	
	printf("\n Soma = %d",soma);
	return 0;
}