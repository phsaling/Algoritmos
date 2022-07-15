#include <stdio.h>
#include <stdlib.h>

int main()
{
   float sInicial,sAumento,sLiquido,vAumento,vImposto;

   vAumento = 0.15;
   vImposto = 0.08;

   printf("Informe o valor inicial do salario:\n");
   scanf("%f",&sInicial);

   sAumento = (sInicial*vAumento)+sInicial;

   sLiquido = sAumento - (sAumento*vImposto);

   printf("\nSalario inicial: R$ %.2f",sInicial);
   printf("\nSalario c/ aumento (15%%): R$ %.2f",sAumento);
   printf("\nSalario liquido (imposto de 8%%): R$ %.2f",sLiquido);
}
