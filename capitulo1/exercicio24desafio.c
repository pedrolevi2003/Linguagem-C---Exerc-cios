/* Sabendo que um caixa eletrônico possui notas de R$ 10, R$ 20, R$ 50 e R$ 100, leia um valor que
representa a quantidade de dinheiro que o cliente deseja sacar e imprima a quantidade necessária de
cada uma dessas notas para formar o valor desejado. A quantidade total de notas deve ser a mínima
possível. Assuma que a quantidade fornecida pelo cliente é sempre múltipla de 10. */

#include <stdio.h>

int main()
{
    int qtdDinheiro, qtd10 = 0, qtd20 = 0, qtd50 = 0, qtd100 = 0;

    printf("Digite a quantidade de dinheiro a sacar: ");
    scanf("%d", &qtdDinheiro);

    if(qtdDinheiro >= 100)
    {
        qtd100 = qtdDinheiro / 100;

        qtdDinheiro = qtdDinheiro - qtd100 * 100;
    }

    if(qtdDinheiro >= 50)
    {
        qtd50 = qtdDinheiro / 50;

        qtdDinheiro = qtdDinheiro - qtd50 * 50;
    }

    if(qtdDinheiro >= 20)
    {
        qtd20 = qtdDinheiro / 20;

        qtdDinheiro = qtdDinheiro - qtd20 * 20;
    }

    if(qtdDinheiro >= 10)
    {
        qtd10 = qtdDinheiro / 10;

        qtdDinheiro = qtdDinheiro - qtd10 * 10;
    }

    printf("Notas de 10: %d\n", qtd10);
    printf("Notas de 20: %d\n", qtd20);
    printf("Notas de 50: %d\n", qtd50);
    printf("Notas de 100: %d\n", qtd100);

}