#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 01 */
/* 10.Construa um algoritmo que calcule e apresente quanto deve ser pago por um produto considerando a leitura do preço de etiqueta (PE) e o código da condição de pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir: 

Código da condição de pagamento e Condição de pagamento

1 Á vista em dinheiro ou cheque, com 10% de desconto
2 Á vista com cartão de crédito, com 5% de desconto
3 Em 2 vezes, preço normal de etiqueta sem juros
4 Em 3 vezes, preço de etiqueta com acréscimo de 10% 
*/

int main(){
    setlocale(LC_ALL,"Portuguese");

	int CP;
	float PE, pagar;

	printf("Insira o preço da etiqueta: ");
	scanf("%f",&PE);
	printf("Insira a condição de Pagamento ");
	scanf("%d",&CP);

switch(CP){
		case 1:
			pagar = PE-(PE*0.1);
			printf("PAGAMENTO: Á vista em dinheiro ou cheque, com 10 porcento de desconto\n TOTAL A PAGAR: R$%.2f reais",pagar);
			break;
		case 2:
		    pagar = PE-(PE*0.05);
			printf("PAGAMENTO: Á vista com cartão de crédito, com 5 porcento de desconto\n TOTAL A PAGAR: R$%.2f reais",pagar);
			break;
		case 3:
		    pagar = PE/2;
			printf("PAGAMENTO: Em 2 vezes, preço normal de etiqueta sem juros\n TOTAL A PAGAR: 2 parcelas de R$%.2f reais",pagar);
			break;
		case 4:
		    pagar = (PE+(PE*0.1))/3;
			printf("PAGAMENTO: Em 3 vezes, preço de etiqueta com acréscimo de 10 porcento\n TOTAL A PAGAR: 3 parcelas de R$%.2f reais",pagar);
			break;
			default:
			printf("CÓDIGO INVÁLIDO");

        }

		return 0;
}