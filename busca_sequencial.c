#include<stdio.h>
int buscaSequencial(int tamanho, int vetor[],int p)
{
 int i;
 for(i=0;i<=tamanho;i++)
 {
  if(vetor[i]==p){
   return i;
   }
 }
 return -1;

}
int main (void)
{
 int vetor_tst[8]={8,4,0,10,3,7,6,5},fun,x;
 printf("Informe o valor a ser encontrado: ");
 scanf("%d",&x);
 fun=buscaSequencial(8,vetor_tst,x);
 printf("%d",fun);
 printf("\n\n");
 return 0;
} 
