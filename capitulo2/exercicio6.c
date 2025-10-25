/* Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o
financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá imprimir
"Financiamento Concedido"; senão, ele deverá imprimir "Financiamento Negado". */

#include <stdio.h>

int main()
{
    float salario, financimento;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor do financiamento: ");
    scanf("%f", &financimento);

    if(financimento <= (5 * salario))
        printf("Financiamento concedido.");
    else
        printf("Financiamento negado.");

}
