#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,rMult;

    printf("Para fazer a multiplicacao, informe os tres numeros:\n");
    printf("Primeiro:\n");
    scanf("%lf",&n1);
    printf("Segundo:\n");
    scanf("%lf",&n2);
    printf("Terceiro:\n");
    scanf("%lf",&n3);

    rMult = n1 * n2 * n3;

    printf("\nO resultado da multiplicacao entre %.2lf, %.2lf e %.2lf eh: %.2lf.\n",n1,n2,n3,rMult);


}
