#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 02 */
/* Faça um algoritmo que receba a idade do usuário e verifique se ele tem 18 anos
ou mais. Se a resposta for positiva escrever “maior de idade”, senão “menor de
idade”. */

int main(){
	  setlocale(LC_ALL,"Portuguese");
		int idadeUser;

    printf("Insira a sua idade:");
    scanf("%d",&idadeUser);

		if(idadeUser>=18){
				printf("O usuário é MAIOR DE IDADE.");
		}else{
				printf("O usuário é MENOR DE IDADE.");
		}

    return 0;
}