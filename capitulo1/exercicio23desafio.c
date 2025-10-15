/* Leia dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2). Em seguida, imprima o
intervalo entre esses dois horários em hora, minuto e segundo. Assuma que h2/m2/s2 é maior ou
igual a h1/m1/s1. Exemplo: se h1 = 9, m1 = 45, s1 = 38, h2 = 15, m2 = 27 e s2 = 12 então a
diferença é 05:41:34. */

#include <stdio.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, hf, mf, sf;

    printf("Digite o valor de H1: ");
    scanf("%d", &h1);

    printf("Digite o valor de M1: ");
    scanf("%d", &m1);

    printf("Digite o valor de S1: ");
    scanf("%d", &s1);

    printf("Digite o valor de H2: ");
    scanf("%d", &h2);

    printf("Digite o valor de M2: ");
    scanf("%d", &m2);

    printf("Digite o valor de S2: ");
    scanf("%d", &s2);

    if (s1 > s2)
    {
        sf = (s2 + 60) - s1;

        m2--;
    }

    else
        sf = s2 - s1;

    if(m1 > m2)
    {
        mf = (m2 + 60) - m1;

        h2--;
    }
       
    else
        mf = m2 - m1;
    
    hf = h2 - h1;

    printf("Intervalo entre as horas: %d:%d:%d", hf, mf, sf);

}