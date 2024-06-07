#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 7 */
/* Escreva um programa que calcule o consumo de combustível de um
automóvel em Km/L, e o informe na tela. Sabendo-se que:
• KI = Quilometragem inicial
• KF = Quilometragem final
• CC = Consumo de combustível (no de litros)
• DP = Distância percorrida, obtido através da fórmula: DP = KF – KI
• GC = Gasto de combustível, obtido através da fórmula: GC = DP / CC.
 */

int main(){

    setlocale(LC_ALL,"Portuguese");
	  float kmInicial, kmFinal, consumo, distanciaPer, gastoComb;

    printf("Para saber o consumo de combustível, insira os dados a seguir,\n Insira o valor da Quilometragem Inicial:");
    scanf("%f",&kmInicial);
    printf("Insira o valor da Quilometragem Final:");
    scanf("%f",&kmFinal);
    printf("Insira em litros o consumo:");
    scanf("%f",&consumo);

    distanciaPer = (kmFinal-kmInicial);
    gastoComb = (distanciaPer/consumo);

    printf("O gasto de combustível nessa viagem foi de %f litros.",gastoComb);

    return 0;

}