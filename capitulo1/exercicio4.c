/* Leia o valor de um produto e o percentual de desconto e exiba seu novo valor com o desconto e o
valor descontado. */

#include <stdio.h>

int main()
{
    float valorProduto, desconto,
    novoValor, valorDesconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    novoValor = valorProduto * ((100 - desconto) / 100);
    valorDesconto = valorProduto - novoValor;

    printf("Novo valor com desconto: %.2f \nValor descontado: %.2f", novoValor, valorDesconto);
}