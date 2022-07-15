#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1,p2,p3;

    printf("Informe o peso exibido na balanca:\n");
    scanf("%f",&p1);


    p2 = p1 + (p1*0.15);

    p3 = p1 - (p1*0.2);

    printf("\nA) Se a pessoa engordar 15%%, ficara com: %.1f Kg.\n",p2);
    printf("\nB) Se a pessoa emagrecer 20%%, ficara com: %.1f Kg.\n",p3);

}
