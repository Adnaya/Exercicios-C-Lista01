#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Exercício 6 */
/* Faça um programa para ler dois valores (altura e raio de um cilindro), calcular
e mostrar o respectivo volume do cilindro. v = π ∗ r^2 ∗ h
 */

int main(){

    setlocale(LC_ALL,"Portuguese");
    float altura, raio, volume;

    printf("Para descobrir o volume de um cilindro , insira a seguir em cm, sua altura:\n");
    scanf("%f",&altura);
    printf("Agora, insira seu raio em cm:");
    scanf("%f",&raio);

    volume = (3.14*altura*raio);

    printf("O voume deste cilindro é %fcm³",volume);

    return 0;

}