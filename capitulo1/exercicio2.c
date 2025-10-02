/* Leia a base e a altura de um triângulo, calcule e imprima sua área */

#include <stdio.h>

int main() {

    float base, altura;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    printf("O valor da area do triangulo eh: %.2f", base * altura);
}