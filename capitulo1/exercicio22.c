/* Leia um número inteiro a com 4 dígitos e calcule outro número inteiro b que deverá ser o número a
invertido. Exemplo: se a = 5732 então b = 2375. */

#include <stdio.h>

int main()
{
    int numero, d1, d2, d3, d4, numInvertido;

    printf("Digite um numero de 4 digitos: ");
    scanf("%d", &numero);

    d1 = numero / 1000;

    d2 = (numero / 100) % 10;

    d3 = (numero % 100) / 10;

    d4 = numero % 10;

    numInvertido = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;

    printf("O numero invertido eh: %d", numInvertido);

}