#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sFixo, vVen, tCom, sTot;

    printf("Para calcular o valor total recebido pelo funcionario, informe:\n");
    printf("O salario fixo recebido:\n");
    scanf("%lf",&sFixo);
    printf("O valor total em vendas realizada pelo funcionario:\n");
    scanf("%lf",&vVen);

    tCom = (vVen * 0.04);

    sTot = tCom + sFixo;

    printf("\nO funcionario recebe:\n");
    printf("---- Salario Fixo: R$ %.2lf.\n",sFixo);
    printf("---- Comissao: R$ %.2lf.\n",tCom);
    printf("---- Salario Total: R$ %.2lf.\n",sTot);

}
