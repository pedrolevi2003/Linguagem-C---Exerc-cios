/* 18. Leia um número n com 8 dígitos, separe o dia, mês e ano do número lido, mostrando-os na tela.
Exemplo: 25031959 imprime 25/03/1959 */

#include <stdio.h>

int main()
{
    int n, ano, mes, dia;

    printf("Digite um numero de 8 digitos: ");
    scanf("%d", &n);

    dia = n / 1000000; /* Operador '/' obtém o quociente inteiro */
    
    mes = (n / 10000) % 100; /* Operador '%' obtém o resto da divisão */

    ano = n % 10000;

    printf("%d/%d/%d", dia, mes, ano);
}