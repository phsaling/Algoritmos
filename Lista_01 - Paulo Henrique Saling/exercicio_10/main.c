#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,dAB,x3,y3;

    printf("Vamos calcular a distancia entre dois pontos(A e B) em um plano cartesiano.\n");
    printf("Primeiro digite as coordenadas X e Y para o ponto A.\nX=");
    scanf("%f",&x1);
    printf("\nY=");
    scanf("%f",&y1);

    printf("\nAgora, digite as coordenadas X e Y para o ponto B.\nX=");
    scanf("%f",&x2);
    printf("\nY=");
    scanf("%f",&y2);

    x3=x2-x1;
    y3=y2-y1;

    dAB = sqrt(pow(x3,2) + pow(y3,2));

    printf("\nA distancia entre os pontos A e B e:%.2f",dAB);
}
