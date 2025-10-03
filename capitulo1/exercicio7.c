/* Leia o raio de uma esfera, calcule e imprima seu volume, sabendo que:
𝑉𝑒 = (4 / 3)* 𝜋 * 𝑟³ */
 
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4 / 3) *  3.1415 * pow((double) raio, 3);

    printf("O volume eh: %.2f", volume);
}