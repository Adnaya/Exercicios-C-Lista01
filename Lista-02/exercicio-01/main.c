#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 01 */
/* Faça um algoritmo para calcular a média final da disciplina de Programação,
mostrar essa média final e também uma mensagem informando se o aluno foi
aprovado (média >= 7) ou reprovado. Considere duas avaliações. */

int main(){

    setlocale(LC_ALL,"Portuguese");
    float media, notaUm, notaDois;


    printf("Insira a nota da Avaliação do 1° Bimestre:");
    scanf("%f",&notaUm);
    printf("Insira a nota da Avaliação do 2° Bimestre:");
    scanf("%f",&notaDois);

    media = (notaUm+notaDois)/2;

    if(media>=7){
		    printf("O aluno está Aprovado.");
    }else{
		    printf("O aluno está Reprovado.");
    }

    return 0;
}
