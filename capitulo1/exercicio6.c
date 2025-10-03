/* Leia uma temperatura em graus Celsius e converta-a em graus Fahrenheit, usando a fórmula:
𝐹 = 32 + [(212 − 32)/100] × C */

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 32 + 1.8 * celsius;
    
    printf("%.2f graus Celsius corresponde a %.2f graus Fahrenheit", celsius, fahrenheit);

}