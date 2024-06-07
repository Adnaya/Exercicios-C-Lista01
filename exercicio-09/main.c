#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 9 */
/* Desenvolva uma aplicação em linguagem C que receba a idade de um
indivíduo em anos, meses e dias e mostre-a expressa apenas em dias.
*/

int main(){

    setlocale(LC_ALL,"Portuguese");
    int anos, meses, dias, totaldias;

    printf("Para descobrir quantos dias você viveu, insira aqui quantos anos COMPLETOS você tem:\n");
    scanf("%d",&anos);
    printf("Agora, caso o tenha, insira os meses inteiros que você tem: ");
    scanf("%d",&meses);
    printf("Por fim, caso o tenha, insira os dias que você tem: ");
    scanf("%d",&dias);


    totaldias = ((anos*365)+(meses*30)+dias);

    printf("Você possui %d dias de vida",totaldias);

    return 0;

}