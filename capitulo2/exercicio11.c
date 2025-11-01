/* O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Fazer um
programa para ler um número n inteiro de 4 dígitos e imprimir se o número tem ou não essa
característica. Se n não tiver 4 dígitos, imprima uma mensagem de erro. */

#include <stdio.h>

int main()
{
    int n, n1, n2, n3, n4, auxiliar, contador;

    printf("Digite um numero: ");
    scanf("%d", &n);

    auxiliar = n;
    contador = 0;

    while(auxiliar > 0)
    {
        auxiliar = auxiliar / 10;
        contador++;
    }

    if(contador != 4)
    {
        printf("Valor invalido.");
        return 0;
    }   

    n1 = n / 1000;
    n2 = (n / 100) % 10;
    n3 = (n % 100) / 10;
    n4 = n % 10;

    n1 = n1 * 10 + n2;
    n4 = n3 * 10 + n4;

    printf("Parte 1: %d\nParte 2: %d\n", n1, n4);

    printf("Produto: %d", (n1 + n4) * (n1 + n4));

}