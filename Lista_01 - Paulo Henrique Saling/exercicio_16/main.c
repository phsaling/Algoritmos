#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lanche, pres, qjo, hamb;

    printf("Prezado cozinheiro da lanchonete Gostozura. Informe o numero de lanches que deseja fazer, que sera retornado a lista de compras.\n");
    scanf("%f",&lanche);

    pres = 0.050 * lanche;
    qjo = 0.050 * lanche;
    hamb = 0.100 * lanche;

    printf("\nA quantidade de suplementos que devera comprar eh:\n");
    printf("Presunto:%.3fKg\n",pres);
    printf("Queijo:%.3fKg\n",qjo);
    printf("Carne:%.3fKg\n",hamb);
}
