/* Leia um número inteiro n de 100 a 999 e imprima a soma dos dígitos que compõem o número. */

#include <stdio.h>

int main()
{
    int n, n1, n2, n3;

    printf("Digite um numero de 100 a 999: ");
    scanf("%d", &n);

    if(n < 100 || n > 999)
    {
        printf("Valores invalidos. Programa encerrado.");
        return 0;
    }

    n1 = n / 100;
    n2 = (n / 10) % 10;
    n3 = n % 10;

    printf("N1: %d\n", n1); /* Impressões para verificação */
    printf("N2: %d\n", n2); 
    printf("N3: %d\n", n3);

    printf("A soma dos 3 digitos eh: %d", n1 + n2 + n3);
}