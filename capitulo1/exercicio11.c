/* Leia o comprimento e a largura de um terreno retangular, além do preço do metro quadrado de
grama. Depois, calcule e imprima:
a) A área a ser coberta de grama.
b) O custo total de grama para gramar o terreno. */

#include <stdio.h>

int main()
{
    float comprimento, largura, precoMetroQuadrado;
    
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro quadrado: ");
    scanf("%f", &precoMetroQuadrado);

    printf("Área a ser coberta de grama: %.2f\n", comprimento * largura);
    printf("Custo total de grama para gramar o terreno: %.2f", comprimento * largura * precoMetroQuadrado);
    
}