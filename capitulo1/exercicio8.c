/* Realize a conversão de km para milhas, imprimindo o resultado da conversão. Sabe-se que:
1 km = 0,621371 milhas */

#include <stdio.h>

int main()
{
    float km, milhas;

    printf("Digite a quantidade de km: ");
    scanf("%f", &km);

    milhas = km * 0.621371;

    printf("O valor em milhas eh: %.2f", milhas);
}