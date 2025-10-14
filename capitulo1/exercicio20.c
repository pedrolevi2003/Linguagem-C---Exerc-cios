/* O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Faça um programa
para ler um número n inteiro de 4 dígitos e imprimir a primeira parte do número, a segunda parte e
o valor da multiplicação das partes. */

#include <stdio.h>

int main()
{
    int n, p1, p2;

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &n);

    p1 = n / 100;

    p2 = n % 100;

    printf("Primeira parte: %d\n", p1);
    printf("Segunda parte: %d\n", p2);
    printf("Produto das partes: %d", (p1 + p2) * (p1 + p2));

}