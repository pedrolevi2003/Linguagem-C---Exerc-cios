/* Leia um número inteiro n e informe se ele é ou não divisível por 6. */

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 6 != 0)
    {
        printf("O numero %d nao eh divisivel por 6", numero);

        return 0;
    }
        
    printf("O numero %d eh divisivel por 6", numero);

}