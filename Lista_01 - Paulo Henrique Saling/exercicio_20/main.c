#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nBlusa;
    float nNovelos, tNovelos;

    printf("Informe quantas blusas deseja confeccionar:\n");
    scanf("%d",&nBlusa);

    printf("Informe quantos novelos eh utilizado para fazer uma blusa:\n");
    scanf("%f",&nNovelos);

    tNovelos = nNovelos*nBlusa;

    printf("Para fazer as %d blusas, sera necessario comprar %.2f novelos.\n",nBlusa,tNovelos);
}
