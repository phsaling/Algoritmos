#include <stdio.h>
#include <stdlib.h>

int main()
{
   double n1,n2,rDiv;

   printf("Informe os dois numeros a serem divididos.\n");
   printf("Primeiro:\n");
    scanf("%lf",&n1);
    printf("Segundo:\n");
    scanf("%lf",&n2);

    rDiv = n1 / n2;

    printf("\nO resultado da divisao entre %.2lf e %.2lf eh: %.2lf.\n",n1,n2,rDiv);



}
