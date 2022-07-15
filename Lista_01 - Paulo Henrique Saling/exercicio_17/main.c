#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

   float tCel,tFar;

    printf("Programa para converter temperatura de ºC para ºF. Inserir o valor da temperatura em Celcius:\n");
    scanf("%f",&tCel);

    tFar= tCel*(9/5.0)+32; // Porque não funciona quando a equação está como "tCel*(9/5)+32" e só quando está "(tCel*9/5)+32". Solução, o (9/5) resulta em 1,8, como é um numero inteiro, ele considera somente o "1".

    printf("\nA temperatura de %.1fºC é %.1fºF.\n",tCel,tFar);
}
