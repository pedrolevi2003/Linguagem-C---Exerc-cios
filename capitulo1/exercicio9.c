/* Calcule e imprima o volume de um cilindro que será enchido de água para um espetáculo de
mágica. Para isso, seu programa deverá ler o raio e a altura do cilindro. Considere:
𝑉𝑐 = 𝜋 × 𝑟² × ℎ */

#include <stdio.h>

int main()
{
    float raio, altura, volume;

    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &altura);

    volume = 3.1415 * raio * raio * altura;

    printf("O valor do volume eh: %.2f", volume);

}