/* Leia a e b e calcule a equação do 1º grau ax + b = 0, imprimindo o valor de x. Considere a
diferente de zero. */

#include <stdio.h>

int main()
{
    float a, b, x;

    /* Não inclui nenhuma verificação, visto que o enunciado nos orienta a assumir o valor de A diferente de zero. No entanto, isso poderia ser feito facilmente usando o loop while. */

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    x = (b * (-1)) / a;

    printf("O valor de X eh: %.2f", x);
}