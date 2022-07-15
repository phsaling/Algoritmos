#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c1 = 200.0, c2 = 120.0, salario = 1200.0, sal_liq;
/*
   printf("Informe o salario de Joao.\n");
   scanf("%f",&salario);

   printf("\nInforme o valor das contas a pagar.");
   printf("\n-----C1:\n");
   scanf("%f",&c1);
   printf("\n-----C2:\n");
   scanf("%f",&c2);

*/
   sal_liq = salario - (c1*1.02 + c2 * 1.02);


   printf("\nO salario liquido de Joao eh: R$ %.2f.\n", sal_liq);


}
