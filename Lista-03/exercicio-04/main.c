#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 04 */
/* Escrever um algoritmo que leia uma quantidade desconhecida de números e
conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-
100]. A entrada de dados deve terminar quando for lido um número negativo. */

int main(){
	setlocale(LC_ALL,"Portuguese");
		
	float num=0, op1=0, op2=0, op3=0, op4=0;
	int i=0;
		 
	while(num>=0){

        printf("Insira um número real:\n");
        scanf("%f",&num);
			
    if(num>=0 && num<=25){
        op1++;

    }else if(num>25 && num<=50){
        op2++;

    }else if(num>50 && num<=75){
        op3++;

    }else if(num>75 && num<=100){
        op4++;
    }
		
	i++;
	}
		 
	printf("QNTD DE NÚMEROS NO INTERVALO [0-25]: %f\n",op1);
	printf("QNTD DE NÚMEROS NO INTERVALO [26-50]: %f\n",op2);
	printf("QNTD DE NÚMEROS NO INTERVALO [51-75]: %f\n",op3);
	printf("QNTD DE NÚMEROS NO INTERVALO [76-100]: %f\n",op4);

	return 0;
}