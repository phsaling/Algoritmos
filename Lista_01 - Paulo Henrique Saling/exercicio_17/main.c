#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

   float tCel,tFar;

    printf("Programa para converter temperatura de �C para �F. Inserir o valor da temperatura em Celcius:\n");
    scanf("%f",&tCel);

    tFar= tCel*(9/5.0)+32; // Porque n�o funciona quando a equa��o est� como "tCel*(9/5)+32" e s� quando est� "(tCel*9/5)+32". Solu��o, o (9/5) resulta em 1,8, como � um numero inteiro, ele considera somente o "1".

    printf("\nA temperatura de %.1f�C � %.1f�F.\n",tCel,tFar);
}
