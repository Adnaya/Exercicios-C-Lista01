#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 06 */
/* Escrever um algoritmo que gera e escreve os números ímpares entre 100 e
200. */

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i=100;
		
	while(i<=200){	

		if(i%2 !=0){
            printf("[%d]",i);	
		
        }
	i++;
	}
		
	return 0;
}