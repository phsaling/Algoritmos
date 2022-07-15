#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1cent,m5cent,m10cent,m25cent,m50cent,m1real;
    float q1cent,q5cent,q10cent,q25cent,q50cent,totEc;

    printf("Pedrinho. Informe a quantidade de cada moeda que possui.\n");
    printf("\nMoeda de 1 centavo:");
    scanf("%d",&m1cent);
    printf("\nMoeda de 5 centavos:");
    scanf("%d",&m5cent);
    printf("\nMoeda de 10 centavos:");
    scanf("%d",&m10cent);
    printf("\nMoeda de 25 centavos:");
    scanf("%d",&m25cent);
    printf("\nMoeda de 50 centavos:");
    scanf("%d",&m50cent);
    printf("\nMoeda de 1 real:");
    scanf("%d",&m1real);

    q1cent = m1cent/100.0;
    q5cent = m5cent/20.0;
    q10cent = m10cent/10.0;
    q25cent = m25cent/4.0;
    q50cent = m50cent/2.0;
    totEc = q1cent+q5cent+q10cent+q25cent+q50cent+m1real;

    printf("\nPedrinho. Voce economizou um total de R$ %.2f em moedas. Parabens!\n",totEc);


}
