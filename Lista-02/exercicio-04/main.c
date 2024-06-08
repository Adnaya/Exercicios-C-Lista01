#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 04 */
/* A empresa XKW concedeu um bônus de 20% do valor do salário a todos os
funcionários com tempo de trabalho na empresa igual ou superior a 5 anos e
de 10% aos demais. Faça um algoritmo que receba o salário e o tempo de
serviço de um funcionário, calcule e mostre o valor do bônus recebido por ele. */

int main(){

	  setlocale(LC_ALL,"Portuguese");
		float salario, bonusVinte, bonusDez;
		int tempoServico;

		printf("CÁLCULO DE BÔNUS SALÁRIO.\n Insira, em anos, o tempo de serviço do funcionário:");
		scanf("%d",&tempoServico);
		printf("Insira o salário do funcionário:");
		scanf("%f",&salario);

		if(tempoServico>=5){
				bonusVinte = salario + (salario*0.2);
				printf("O salário do funcionário sera de %f reais",bonusVinte);

		}else{
				bonusDez = salario + (salario*0.1);
				printf("O salário do funcionário sera de %f reais",bonusDez);

		}

    return 0;
}