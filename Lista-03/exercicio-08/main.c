#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 08 */
/* Escreva um algoritmo que leia um valor inicial A e imprima a sequência de
valores do cálculo de A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120. */

int main(){
	setlocale(LC_ALL,"Portuguese");

    int a, resultado;

    printf("Digite um número inteiro para mostar o seu fatorial:\n");
    scanf("%d",&a);
    
    
    

    printf("= %d",resultado);

	return 0;
}