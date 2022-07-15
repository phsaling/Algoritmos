#include <stdio.h>
#include <stdlib.h>

int main()
{
   float sMin, sFunc, nSMin;

   printf("Informe o valor atual do salario minimo:\n");
   scanf("%f",&sMin);

   printf("\nInforme o valor do salario do funcionario:\n");
   scanf("%f",&sFunc);

   nSMin = sFunc / sMin;

   printf("\nO funcionario recebera %.2f salarios minimos.\n",nSMin);
}
