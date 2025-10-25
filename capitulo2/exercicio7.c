/* Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que
18 anos. Faça um programa para ler a idade e a altura de um atleta e exibir uma das mensagens:
“selecionado” ou “não selecionado”. */

#include <stdio.h>

int main()
{
    int idade;
    float altura;

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    printf("Digite a altura do atleta: ");
    scanf("%f", &altura);

    if((altura >= 1.8) && (idade < 18))
        printf("Selecionado");
    else
        printf("Nao selecionado");
}