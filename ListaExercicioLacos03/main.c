#include <stdio.h>
#include <stdlib.h>
/*3. Fa�a um programa que leia n�meros inteiros enquanto o usu�rio digitar um n�mero maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somat�rio dos n�meros
lidos.*/

int main()
{
   int n,soma;

   do
   {
       printf("Digite um numero: ");
       scanf("%d",&n);
       if(n>=0)
       soma = soma + n;

   }
   while(n>=0);

   printf("A soma dos valores digitados foi de: %d",soma);




    return 0;
}
