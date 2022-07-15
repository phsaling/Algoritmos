#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mc_lata,mc_grf600mL, mc_grf2L,vTotal;
    int qt_lata,qt_grf600mL,qt_grf2L;

    mc_lata = 0.35;
    mc_grf600mL = 0.6;
    mc_grf2L = 2;

    printf("Refrigerantes Meia-Cola.\nPara saber quantos litros ira comprar, informe a quantidade de cada produto que deseja.\n");

    printf("Informe a quantidade de latas que deseja comprar:");
    scanf("%d",&qt_lata);
    printf("\nAgora, informe a quantidade de garrafas de 600 mL:");
    scanf("%d",&qt_grf600mL);
    printf("\nAgora, para finalizar, informe a quantidade de garrafas de 2 L que deseja comprar:");
    scanf("%d",&qt_grf2L);

    vTotal = (qt_lata*mc_lata) + (qt_grf600mL*mc_grf600mL) + (qt_grf2L*qt_grf2L);

    printf("\nO volume de refrigerantes Meia-Cola eh de: %.2f L.\n",vTotal);
    printf("Descricao dos produtos comprados:\n   %d latas de 350 mL;\n   %d garrafas de 600 mL;\n   %d garrafas de 2 L;\n",qt_lata,qt_grf600mL,qt_grf2L);

}
