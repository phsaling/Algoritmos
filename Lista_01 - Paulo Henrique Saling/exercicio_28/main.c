#include <stdio.h>
#include <stdlib.h>

int main()
{
  float nA,nB,mFinal;
   int pA=2,pB=3;

   printf("Para calcular a media do aluno, informe:\n");
   printf("Informe a primeira nota do aluno(de 0 a 10):\n");
   scanf("%f",&nA);
   printf("Informe a segunda nota do aluno(de 0 a 10):\n");
   scanf("%f",&nB);


   mFinal = ((nA*pA)/10) + ((nB*pB)/10);

   printf("\nA media final do aluno e:%.2f.\n",mFinal);
}
