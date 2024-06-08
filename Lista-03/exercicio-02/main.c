#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercicio 02 */
/* Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar:
		a. A menor altura do grupo;
		b. A maior altura do grupo;
*/

int main(){
		setlocale(LC_ALL,"Portuguese");

		float maior=0, menor=10, altura;
		int i;

		do{
			printf("Insira o valor da altura em metros:");
			scanf("%f",&altura);

			if(altura>maior){
					maior = altura;
			}

			if(altura<menor){
					menor = altura;
      }

		i++;
		}while(i<=15);

    printf("\n A menor altura é: %fm\n A maior altura é: %fm",menor,maior);

	return 0;
}


