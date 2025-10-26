/* Leia um número e imprima uma mensagem informando se ele é igual a 5, ou se é igual a 200, ou se
é igual a 400, ou se ele está no intervalo de 500 a 1000 (inclusive) ou se ele não obedece a nenhuma
dessas condições. */

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero == 5)
        printf("O numero eh igual a 5");
    else if(numero == 200)
        printf("O numero eh igual a 200");
    else if(numero == 400)
        printf("O numero eh igual a 400");
    else if((numero >= 500) && (numero <= 1000))
        printf("O numero esta entre 500 e 1000");
    else
        printf("O numero nao obedece a nenhuma dessas condicoes");
}