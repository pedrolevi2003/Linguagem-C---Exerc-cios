/* Calcule e imprima o n-ésimo termo an de uma PA de razão r. Para isso, seu programa deverá ler o
1º termo a1, a quantidade n de termos e a razão r. Considere: an = a1 + (n-1).r, onde n é natural.  */

#include <stdio.h>

int main()
{
    int a1, n, r, an;

    printf("Digite o primeiro termo A1: ");
    scanf("%d", &a1);

    printf("Digite a quantidade de termos N: ");
    scanf("%d", &n);

    printf("Digite a razao R: ");
    scanf("%d", &r);

    an = a1 + (n - 1) * r;

    printf("O valor do n-esimo termo eh: %d", an);
}