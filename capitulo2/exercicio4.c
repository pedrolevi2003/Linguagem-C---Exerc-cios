/* Leia dois números n e k e informe se n é divisível por k. */

#include <stdio.h>

int main()
{
    int n, k;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite outro numero: ");
    scanf("%d", &k);

    if(n % k == 0)
        printf("O numero %d eh divisivel por %d", n, k);
    else
        printf("O numero %d eh divisivel por %d", n, k);
}