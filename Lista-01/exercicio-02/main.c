#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 2 */
/* Elabore um algoritmo que leia uma velocidade em Km/h (valor inteiro) e transforme em m/h. Essa conversão é realizada por meio do cálculo expressado 
pela fórmula: Resultado = V ∗ 0,62. */

int main(){

    setlocale(LC_ALL,"Portuguese");
    int velocidade;
    float resultado;

    printf("Insira o valor de velocidade em km/h para converter para m/h:\n");
    scanf("%d",&velocidade);

    resultado = (0.62*velocidade);

    printf("O valor %d km/h equivale a %f m/h",velocidade,resultado);

    return 0;

}