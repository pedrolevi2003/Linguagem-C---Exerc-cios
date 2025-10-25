/* Leia três valores a, b e c e imprima o maior e o menor deles. Elabore uma solução sem usar os
operadores lógicos, ou seja, usando somente os operadores relacionais. */

#include <stdio.h>

int main()
{
    int a, b, c, maior, menor;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    maior = a, menor = a;

    if(maior < b)
        maior = b;

    if(maior < c)
        maior = c;
    
    if(menor > b)
        menor = b;

    if(menor > c)
        menor = c;

    printf("O maior e menor valores sao respectivamente: %d, %d", maior, menor);
}