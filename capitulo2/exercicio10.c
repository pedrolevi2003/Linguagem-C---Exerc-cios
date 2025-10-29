/* Leia um número n e teste: se n for negativo, eleve n ao quadrado; caso contrário, calcule a raiz
quadrada de n. Ao final, imprima o resultado */

#include <stdio.h>

int main()
{
    int n, i, raiz = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        if(i * i == n)
        {
            raiz = i;
            break;
        }
    }

    if(n < 0)
        printf("%d ao quadrado: %d", n, n * n);
    else
    {
        if(raiz == 0)
            printf("O numero %d nao possui raiz", n);
        else
            printf("Raiz de %d: %d", n, raiz);
    }
        
}