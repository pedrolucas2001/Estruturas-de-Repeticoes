#include <stdio.h>
#include <stdlib.h>
/*3. Faça um programa que leia números inteiros enquanto o usuário digitar um número maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somatório dos números
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
