#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 4*/
/* Faça um algoritmo no qual o usuário fornece os valores de temperatura em
Fahrenheit e converte os valores para Celsius. Apresente o resultado na tela e
utilize a seguinte fórmula: F = (C ∗ 1.8) + 32 */

int main(){

    setlocale(LC_ALL,"Portuguese");
    float fahrenheit,celsius;

    printf("Insira a temperatura em fahrenheit:\n");
    scanf("%f",&fahrenheit);

    celsius = ((fahrenheit-32)/1.8);

    printf("O valor %fF é igual a %fC°(celsius).",fahrenheit,celsius);

    return 0;
}