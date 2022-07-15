#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nA,nB,nC,mFinal;
   int pA=1,pB=2,pC=3;

   printf("Informe a primeira nota do aluno(de 0 a 10):\n");
   scanf("%f",&nA);
   printf("Informe a segunda nota do aluno(de 0 a 10):\n");
   scanf("%f",&nB);
   printf("Informe a terceira nota do aluno(de 0 a 10):\n");
   scanf("%f",&nC);

   mFinal = ((nA*pA)/10) + ((nB*pB)/10) + ((nC*pC)/10);

   printf("\nA media final do aluno e:%.2f",mFinal);

}
