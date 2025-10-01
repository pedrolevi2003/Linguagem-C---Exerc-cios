/* Leia o lado de um cubo, calcule e imprima seu volume */

#include <stdio.h>

int main() {

    float lado, volume;

    printf("Digite o valor do lado do cubo: ");
    scanf("%f", &lado);

    volume = lado * lado * lado;

    printf("O valor do volume do cubo é: %.2f", volume);
    
    return 0;
}