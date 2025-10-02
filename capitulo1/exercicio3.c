/* Leia o peso e altura de uma pessoa, calcule e imprima seu IMC. Sabe-se que IMC = peso/altura² */

#include <stdio.h>

int main()
{
    float peso, altura;

    printf("Digite o valor do peso: ");
    scanf("%f", &peso);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    printf("O IMC da pessoa eh: %.2f", peso/(altura * altura));
}