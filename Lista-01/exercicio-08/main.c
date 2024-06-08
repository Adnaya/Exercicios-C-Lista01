#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 8 */
/* Uma fábrica produz dois tipos de peças de automóveis para venda no varejo.
Escrever um programa que ajuda um cliente de loja de autopeças a comprar
estes tipos de peças. O programa deve ler:
• a porcentagem do IPI a ser acrescido no valor das peças;
• o código da peça 1, valor unitário da peça 1, quantidade de peças 1;
• o código da peça 2, valor unitário da peça 2, quantidade de peças 2;
O programa deve calcular o valor total a ser pago e apresentar o resultado obtido
através da seguinte fórmula:

((valor1 ∗ quant1) + (valor2 ∗ quant2)) ∗ ((IPI/100) + 1) 

*/

int main(){

    setlocale(LC_ALL,"Portuguese");
    int codigoUm, codigoDois, qntdPecaUm, qntdPecaDois;
    float valorPecaUm, valorPecaDois, imposto, total;


    printf("Olá! Digite aqui o código da peça 1 a ser comprada: ");
    scanf("%d",&codigoUm);
    printf("Digite aqui a quantidade de peças 1 a ser comprada: ");
    scanf("%d",&qntdPecaUm);
    printf("Digite aqui o valor da peça 1: ");
    scanf("%f",&valorPecaUm);

    printf("Digite aqui o código da peça 2 a ser comprada: ");
    scanf("%d",&codigoDois);
    printf("Digite aqui a quantidade de peças 2 a ser comprada: ");
    scanf("%d",&qntdPecaDois);
    printf("Digite aqui o valor da peça 2: ");
    scanf("%f",&valorPecaDois);

    printf("Insira em porcentagem o imposto IPI aplicado às peças:");
    scanf("%f",&imposto);

    total = ((valorPecaUm*qntdPecaUm)+(valorPecaDois*qntdPecaDois))*((imposto/100)+1);

    printf("O valor total da compra é de: R$%f reais",total);

    return 0;

}