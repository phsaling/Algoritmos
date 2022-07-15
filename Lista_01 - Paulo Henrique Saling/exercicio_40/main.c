#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cO, cA, hyp;

    printf("Para calcular a hipotenusa de um triangulo retangulo, informe os catetos.\n");
    printf("C. Oposto:\n");
    scanf("%f",&cO);
    printf("C. Adjacente:\n");
    scanf("%f",&cA);

    hyp = sqrt(pow(cO,2)+pow(cA,2));

    printf("\nA hipotenusa eh: %.2f.\n",hyp);
}
