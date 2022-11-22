#include <stdio.h>
#include <stdlib.h>
/*5. Escreva um programa que leia dois números inteiros quaisquer. No final escrever os números
entre eles.*/

int main()
{
   int i;
   int n1,n2;

   printf("Digite um numero: ");
   scanf("%d",&n1);
   printf("Digite outro numero: ");
   scanf("%d",&n2);

   for(i=n1;i<=n2;i++)
   {
      printf("%d\n",i);
   }
    return 0;
}
