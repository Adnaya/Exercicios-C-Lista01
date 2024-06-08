#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 05 */
/* Faça um algoritmo estruturado que leia uma quantidade não determinada de
números positivos. Calcule a quantidade de números pares e ímpares, a média
de valores pares e a média geral dos números lidos. O número que encerrará a
leitura será zero. */

int main(){
		setlocale(LC_ALL,"Portuguese");

        float num=1, par=0, impar=0, media, mediaPar, somaI, somaPar;
        int i=0;

        while(num!=0){
            printf("Insira um número inteiro. Para encerrar, digite 0.\n");
            scanf("%f",&num);

        if(num%2 !=0){
            impar++;
            somaI= somaPar+num;

        }else if(num%2 == 0){
            par++;
            somaPar= somaI+num;
        }

        i++;
        }

        mediaPar = somaPar/par;
        media = (somaI+somaPar)/(i-1);

        printf("QNTD NÚMEROS PARES: %f\n",par);
        printf("QNTD NÚMEROS ÍMPARES: %f\n",impar);
        printf("MÉDIA VALORES NÚMEROS PARES: %f\n",mediaPar);
        printf("MÉDIA GERAL VALORES LIDOS: %f\n",media);

	return 0;
}