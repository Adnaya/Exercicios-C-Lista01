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

        float par=0, impar=0, media, mediaPar, somaI, somaPar;
        int i=0, num=1;

        while(num!=0){
            printf("Insira um número inteiro positivo. Para encerrar, digite 0.\n");
            scanf("%d",&num);

            if(num%2 == 0 && num!=0){
                par++;
                somaPar= num+somaPar;
            
            }else if(num%2 !=0){
                impar++;
                somaI= somaI+num;
                
            }

        i++;
        }

        media = (somaI+somaPar)/(i-1);

        if(par==0){
            mediaPar = 0;
        }else{
            mediaPar = somaPar/par;
        }

        printf(" QNTD NÚMEROS PARES: %.2f\n",par);
        printf(" QNTD NÚMEROS ÍMPARES: %.2f\n",impar);
        printf(" MÉDIA VALORES NÚMEROS PARES: %.2f\n",mediaPar);
        printf(" MÉDIA GERAL VALORES LIDOS: %.2f\n",media);

	return 0;
}