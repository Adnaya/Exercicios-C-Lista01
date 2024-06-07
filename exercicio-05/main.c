#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 5 */
/* Elaborar um algoritmo que calcule e apresente o volume de uma caixa
retangular, por meio da fórmula:

VOLUME = COMPRIMENTO ∗ LARGURA ∗ ALTURA */

int main(){

    setlocale(LC_ALL,"Portuguese");
    float comprimento,altura,largura,volume;

    printf("Para fazer o cálculo do volume de uma caixa, insira as medidas em cm de seu comprimento:\n");
    scanf("%f",&comprimento);
    printf("Insira sua altura:");
    scanf("%f",&altura);
    printf("Insira sua Largura:");
    scanf("%f",&largura);

    volume = (comprimento*altura*largura);

    printf("O volume desta caixa é igual a %f m³",volume);

    return 0;
}
