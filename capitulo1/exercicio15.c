/* Leia 3 variáveis inteiras a, b e c e faça um "rodízio" entre elas. Ao final, a variável b deverá ter o
valor da variável a, a variável c deverá ter o valor da variável b e a variável a deverá ter o valor da
variável c. */

#include <stdio.h>

int main()
{
    int a, b, c, auxiliar;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Valores de A, B e C: %d, %d, %d\n", a, b, c);

    auxiliar = b;

    b = a;

    a = c;

    c = auxiliar;

    printf("Valores de A, B e C: %d, %d, %d", a, b, c);
}