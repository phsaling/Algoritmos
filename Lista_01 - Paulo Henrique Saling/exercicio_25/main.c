#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float  diametro, pi, altura, vCx_dagua;

   pi = 3,14159265358979323846;

   printf("Para calcular o volume de uma caixa d'agua cilindrica, informe:\n");
   printf("Diametro da caixa em metros:\n");
   scanf("%f",&diametro);
   printf("Altura da caixa em metros:\n");
   scanf("%f",&altura);

   vCx_dagua = ((pi * pow(diametro,2) ) /4 ) * altura;

   printf("\nO volume da caixa d'agua eh: %.2f m3.\n",vCx_dagua);

}
