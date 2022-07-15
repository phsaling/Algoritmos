#include <stdio.h>
#include <stdlib.h>

int main()
{
       float lRefresco, lAgua, lSuco;

       printf("Informe quantos litros de refresco que deseja preparar:\n");
       scanf("%f",&lRefresco);

       lAgua = 0.8*lRefresco;
       lSuco = 0.2*lRefresco;

       printf("\nPara preparar a quantidade desejada de refresco, voce devera utilizar:\n1 - %.2f L de Agua;\n2 - %.2f L de suco.\n",lAgua,lSuco);
}
