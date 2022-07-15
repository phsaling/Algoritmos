#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aPessoa, sPessoa, sPredio, aPredio;

    printf("Para determinar a altura do predio voce precisa informar os seguintes valores:\n");
    printf("\nATENCAO: \n1 - INFORMAR AS ALTURAS EM METROS APENAS; \n2 - UTILIZAR '.' COMO SEPARADOR DE METROS E CENTIMETROS.\n\n");
    printf("Comprimento da sombra do predio:");
    scanf("%f",&sPredio);
    printf("\nComprimento da  sua sombra:");
    scanf("%f",&sPessoa);
    printf("\nSua altura:");
    scanf("%f",&aPessoa);

    aPredio = (aPessoa * sPredio) / sPessoa;

    printf("\nA altura do predio eh: %.2f metros.\n",aPredio);


}
