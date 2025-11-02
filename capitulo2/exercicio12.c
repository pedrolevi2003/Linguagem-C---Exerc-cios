/* Leia as coordenadas dos pontos P1 (x1, y1) e P2 (x2, y2) e calcule a distância entre P1 e P2.
𝑑 = √(𝑥1 − 𝑥2)² + (𝑦1 − 𝑦2)² */

#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, d;

    printf("Digite as coordenadas do ponto P1: ");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do ponto P2: ");
    scanf("%d %d", &x2, &y2);

    d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

    for(int i = 1; i < d; i++)
    {
        if(i * i == d)
        {
            d = i;
            break;
        }
    }

    printf("Distancia: %d", d);
    
}