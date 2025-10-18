/* Uma loja vende seus produtos com uma entrada mais duas prestações, sendo que:
• A entrada deve ser maior ou igual às prestações.
• As duas prestações devem ter valor igual.
• As prestações devem ter um valor inteiro (sem centavos).
• As prestações devem ter o maior valor possível.
Por exemplo, se o valor do produto for R$ 240,00, a entrada e as duas prestações são iguais a R$
80,00; se o valor do produto for R$ 344,35, a entrada é de R$ 116,35 e as duas prestações são de R$
114,00. Leia o valor do produto e imprima o valor da entrada e das duas prestações, de acordo com
as regras acima. */

#include <stdio.h>

int main()
{
    float valorProduto, entrada;
    int prestacao;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    if((int)valorProduto % 3 == 0)
    {
        entrada = valorProduto / 3;
        prestacao = valorProduto / 3;
    }

    else 
    {
        entrada = (((int)valorProduto / 3) + (valorProduto - (int)valorProduto));
        prestacao = (int)(valorProduto - entrada) / 2;
    }

    printf("Valor Produto inteiro: %.2f\n", valorProduto);
    printf("Valor da entrada: R$ %.2f\n", entrada);
    printf("Valor das prestacoes: R$ %d", prestacao);

    return 0;

}