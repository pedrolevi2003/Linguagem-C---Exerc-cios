/* 17. Leia dois inteiros x e y e imprima o maior múltiplo de x menor ou igual a y. Exemplo: se x = 9 e y
= 38, então o resultado é 36. */

#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if(x > y) /* Se X é maior que Y, então o enunciado da questão é violado */
    {
        printf("Programa encerrado. Valores invalidos");
        return 0;
    }

    printf("Maior multiplo de X menor ou igual a Y eh: %d", (y / x) * x);
        
}