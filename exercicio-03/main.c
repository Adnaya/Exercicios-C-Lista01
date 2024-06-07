#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 3*/
/* Crie um algoritmo que leia o valor do salário-mínimo e o valor do salário de
um usuário, calcule a quantidade de salários-mínimos que esse usuário ganha e
imprima o resultado. Considere que um salário-mínimo equivale a R$ 1320,00. */

int main(){

    setlocale(LC_ALL,"Portuguese");
    float salario, salarioMin;

    printf("Insira o valor do seu salario:\n");
    scanf("%f",&salario);

    salarioMin = (salario/1320);

    printf("Você recebe %f salário(s) minimo(s)",salarioMin);

    return 0;

}