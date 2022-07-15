#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pPrato , vKilo, vPagar;

    vKilo = 12.00;

    printf("Restaurante Bem-Bao. Informe o peso ilustrado na balança, com a tara do prato ja descontada:\n");
    scanf("%f",&pPrato);

    vPagar = pPrato * vKilo;

    printf("\nO valor a ser pago e: R$ %.2f.",vPagar);
    printf("\nValor do Kg: R$ %.2f", vKilo);
    printf("\nObrigado pela preferencia.\nVolte sempre.");
}
