#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 08 */
/* Faça um programa que solicita ao usuário três valores correspondentes aos
lados de um triângulo. Informe se o triângulo é equilátero (possui 3 lados
iguais), isósceles (possui dois lados iguais) ou escaleno (não possui lados
iguais). */

int main(){

		setlocale(LC_ALL,"Portuguese");
		float lado1, lado2, lado3;

		printf("Para descobrir a classificação de um triângulo, insira as medidas a seguir:\nInsira medida lado um:");
		scanf("%f",&lado1);
		printf("Insira medida lado dois:");
		scanf("%f",&lado2);
		printf("Insira medida lado três:");
		scanf("%f",&lado3);

        if(lado1==lado2 && lado3==lado2){
            printf("O TRIÂNGULO É EQUILÁTERO");

            }else if((lado1==lado2 && lado2!=lado3) || (lado2==lado3 && lado1!=lado3) || (lado1==lado3 && lado2!=lado3)){
                printf("O TRIÂNGULO É ISÓSCELES.");

            }else{
                printf("O TRIÂNGULO É ESCALENO.");

            }

    return 0;

}