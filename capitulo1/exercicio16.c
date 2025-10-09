/* Leia um número real x e imprima seu valor arredondado. Por exemplo: se x = 3.2 imprimir 3, e se x 
= 3.5 ou maior imprimir 4. */

#include <stdio.h>

int main()
{
    float x; 
    int pNum, ultNum, xInt;

    /* A princípio estou considerando que os números fornecidos estarão entre 0 e 10 */
    
    printf("Digite um numero decimal: ");
    scanf("%f", &x);

    xInt = x * 10;

    pNum = xInt / 10;

    ultNum = xInt - (pNum * 10);

    ultNum < 5? printf("Numero arredondado: %d\n", pNum): printf("Numero arredondado: %d\n", pNum + 1);

    /* O código está funcionando, no entanto apresenta o valor errado (não esperado) para a variável ultNum quando x = 5.7. */

}