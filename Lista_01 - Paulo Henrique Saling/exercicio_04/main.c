#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade, dias;

    printf("Ola, para saber quantos dias de vida voce ja viveu, primeiro informe seu nome:\n");
    scanf("%s",nome);
    printf("\nAgora, informe sua idade:\n");
    scanf("%d",&idade);

    dias = idade * 365;

    printf("\n%s voce ja viveu %d dias, parabens!\n",nome,dias);

}
