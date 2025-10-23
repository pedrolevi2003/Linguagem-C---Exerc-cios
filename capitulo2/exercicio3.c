/* Leia um número inteiro n e informe se ele é divisível por 3 ou por 7. */

#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if((n % 3 == 0) || (n % 7 == 0))
        printf("O numero %d eh divisivel por 3 ou por 7", n);
    else
        printf("O numero %d nao eh divisivel por 3 ou por 7", n);
}