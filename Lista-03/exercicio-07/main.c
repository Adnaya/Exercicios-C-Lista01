#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 07 */
/* Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e
calcule a tabuada de N. Mostre a tabuada na forma: 
0 x N = 0, 1 x N = 1N, 2 x N = 2N, ... , 10 x N = 10N. */

int main(){
		setlocale(LC_ALL,"Portuguese");

        int i=0, n, op;

        printf("Insira o valor de 1 a 10 da varíavel 'N' , para ver sua tabuada.\n");
        scanf("%d",&n);
        printf("TABUADA DO %d\n",n);

        while(i<=10){
            op = n*i;

            printf("%d x %d = %d, ",i,n,op);
            
        i++;
        }

	return 0;
}