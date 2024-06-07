#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 10 */
/* Desenvolva uma aplicação em linguagem C que receba um valor referente
a um período (em segundos) e mostre-a expressa em hora, minuto e segundo. */

int main(){

    setlocale(LC_ALL,"Portuguese");

    int periodoSeg, hora, min, seg, resto;

    printf("Olá. Insira o período em segundos, para convertermos em hora, minuto e segundo:");
    scanf("%d",&periodoSeg);

    hora = periodoSeg /3600;
    resto = periodoSeg % 3600;
    min = resto/60;
    seg = resto%60;

	  printf("O período %d segundos são %dh, %dmin, %ds",periodoSeg,hora,min,seg);

      return 0;

}