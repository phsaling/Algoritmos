#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("LISTA 02: Exercicio - 02.\n\n");
    printf("-------------------------------------------------------------------------\n");

    printf("Infome um numero:\n");
    scanf("%d",&n1);
    printf("-------------------------------------------------------------------------\n");

    if (n1 % 2 == 0){
        printf("\nO numero eh par.\n");
        printf("-------------------------------------------------------------------------\n");
    } else
        printf("\nO numero eh impar.\n");
        printf("-------------------------------------------------------------------------\n");
}
