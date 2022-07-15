#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numCavalos , numFerradura;

  printf("Para saber quantas ferraduras serao necessarias para equipar todos os cavalos do haras, primeiro, informe o numero de cavalos:\n");
  scanf("%d",&numCavalos);

  numFerradura = numCavalos * 4;

  printf("\nO numero de ferraduras para equipar os %d cavalos eh: %d ferraduras.\n", numCavalos, numFerradura);

  }
