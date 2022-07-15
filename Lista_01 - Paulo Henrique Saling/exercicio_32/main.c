#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1,p2;

    printf("Informe o peso exibido na balanca:\n");
    scanf("%f",&p1);

    p2 = p1*1000.0;

    printf("\nO peso em gramas eh: %.1f.\n",p2);

}
