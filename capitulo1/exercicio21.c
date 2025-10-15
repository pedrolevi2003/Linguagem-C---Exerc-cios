/* Em uma disputa, um carro parte do repouso e percorre uma pista de 1 km em um tempo t. Leia o
valor de t e calcule a aceleração do carro em metros/s2  */

#include <stdio.h>

int main()
{
    const int pista = 1000; /* Convertido para metros */

    int tempo;
    float aceleracao;

    /* Neste caso, usei a fórmula da equação horária da posição. Não sei se esta é a maneira mais indicada para resolver esse problema. 
    2s = 2s0 + 2v0t + at² => at² = 2s - (2s0 + 2v0t) => a = (2s - (2s0 + 2v0t)) / t²*/

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    aceleracao = (2 * pista - 2 * 0 - 2 * 0) / (tempo * tempo);

    printf("O valor da aceleracao eh: %.2f metros / s²", aceleracao);
}