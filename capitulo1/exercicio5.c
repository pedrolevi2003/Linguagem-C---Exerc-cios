/* Leia a quantidade de bytes de um arquivo e a velocidade de transmissão em bytes por segundo e
imprimir quantos segundos serão necessários para fazer o download do arquivo. */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int quantidade;
    int velocidade;

    printf("Digite a quantidade de bytes do arquivo: ");
    scanf("%d", &quantidade);

    printf("Digite a velocidade de transmissão: ");
    scanf("%d", &velocidade);

    printf("A quantidade de segundos necessário para fazer o download do arquivo: %d", (int) (quantidade / velocidade));
}