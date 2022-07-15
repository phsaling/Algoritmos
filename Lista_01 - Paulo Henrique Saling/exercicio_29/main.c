#include <stdio.h>
#include <stdlib.h>

int main()
{
   double v1, v2;

   printf("Para calcular o valor do produto com o desconto, informe o valor original:\n");
   scanf("%lf",&v1);

   v2 = v1 - (v1*0.1);

   printf("O valor do produto com o desconto de 10%% eh: R$ %.2lf.\n",v2);

}
