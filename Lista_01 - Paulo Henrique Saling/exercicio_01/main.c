#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1, l2, area;

    printf("Aqui eh a imobiliaria Imobilis. Para calcular a area do seu terreno digite o primeiro lado:\n");
    scanf("%f",&l1);
    printf("\nAgora, digite o segundo lado:\n");
    scanf("%f",&l2);

    area = l1 * l2;

    printf("\nObrigado. Seu terreno possui %.2fm2\n", area);
}
