
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 01 */
/* Desenvolva um algoritmo, utilizando pseudocódigo, que leia um número inteiro e imprima o seu antecessor e seu sucessor.*/

int main(){

    setlocale(LC_ALL,"Portuguese");
    int numAnte,numSuce,numero;

    printf("Para descobrir o sucessor e antecessor de um número, digite-o a seguir:\n");
    scanf("%d",&numero);

    numAnte =(numero-1);
    numSuce =(numero+1);

    printf("O numero antecessor de %d e %d, e seu sucessor e %d.",numero,numAnte,numSuce);

    return 0;
}