#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 03 */
/* Desenvolver um algoritmo que leia um número não determinado de valores e
calcule e escreva a média aritmética dos valores lidos, a quantidade de valores
positivos, a quantidade de valores negativos e o percentual de valores negativos
e positivos. */

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num=1, media, perPos, perNeg, soma;
	int i=0, pos=0, neg=0;
	
	while(num!=0){
		
		printf("Insira um número real qualquer diferente de zero. Quando quiser finalizar, digite 0.\n");
		scanf("%f",&num);

		if(num>0){
			pos++;

		}else if(num<0){
			neg++;
		}

		soma = soma+num;
	i++;
	}

	perPos = (100*pos)/(i-1);
	perNeg = (100*neg)/(i-1);
	media = soma/(i-1);

	printf("\nA média dos valores é: %.2f\nA quantidade de valores positivos é: %d\nA quantidade de valores negativos é: %d\nA porcentagem de valores positivos é: %.2f%%\nA porcentagem de valores negativos é: %.2f%%\n",media,pos,neg,perPos,perNeg);
	
	return 0;
}
