#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 05 */
/* Implemente um código para aprovar empréstimo bancário. O código deve pedir
3 informações: valor do empréstimo, número de parcelas e salário do
solicitante. Aprovar empréstimo caso o valor das parcelas represente no
máximo 30% do salário do solicitante. */

int main(){

	  setlocale(LC_ALL,"Portuguese");

		float emprestimo, parcela, salario, porcentagem, valorParcela ;

		printf("PROCESSO EMPRÉSTIMO BANCÁRIO\nInsira o valor solicitado de empréstimo:");
		scanf("%f",&emprestimo);
		printf("Insira o número de parcelas a pagar:");
		scanf("%f",&parcela);
		printf("Insira o salário do solicitante:");
		scanf("%f",&salario);

        valorParcela = emprestimo/parcela;
        porcentagem = (salario*0.3);

        if(valorParcela<=porcentagem){
            printf("EMPRÉSTIMO APROVADO");

        }else{
            printf("EMPRÉSTIMO NEGADO");

        }

    return 0;

}
