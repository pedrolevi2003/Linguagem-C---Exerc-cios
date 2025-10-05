/* Leia o comprimento e a largura de um terreno retangular, além do preço do metro de arame
farpado. Depois, calcule e imprima:
a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4
voltas de arame farpado.
b) O custo total com o arame farpado. */

#include <stdio.h>

int main()
{
    float comprimento, largura, precoArameFarpado;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro quadrado: ");
    scanf("%f", &precoArameFarpado);

    printf("Metragem de arame gasta para cercar o terreno: %.2f\nCusto total com o arame farpado: %.2f", comprimento * largura, comprimento * largura * precoArameFarpado);

}