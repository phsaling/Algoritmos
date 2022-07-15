#include <stdio.h>
#include <stdlib.h>

int main()
{

    int carlos,andre;
    float flp, vConta;

    printf("Informe o valor da conta a ser dividida:\n");
    scanf("%f",&vConta);

    carlos = vConta/3;
    andre = vConta/3;
    flp = vConta-(carlos+andre);

    printf("\nOs valores ficaram, para cada amigo:");
    printf("\nCarlos: R$ %.2f.",(float)carlos);
    printf("\nAndre: R$ %.2f.",(float)andre);
    printf("\nFelipe: R$ %.2f.",flp);
}
