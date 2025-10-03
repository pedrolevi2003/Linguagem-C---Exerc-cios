/* Leia 3 notas de um aluno e seus respectivos pesos. Depois, calcule e imprima a média ponderada
do aluno. */
#include <stdio.h>

int main()
{
    float notas[3], pesos[3];
    float mediaPonderada;

    for(int i = 0; i <= 2; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        printf("Digite o peso da nota do aluno %d: ",  i + 1);
        scanf("%f", &pesos[i]);
    }

    mediaPonderada = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / (pesos[0] + pesos[1] + pesos[2]);

    printf("O valor do media ponderada eh: %.2f", mediaPonderada);
}