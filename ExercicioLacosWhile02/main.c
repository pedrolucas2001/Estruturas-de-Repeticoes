#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia numeros até que o usuário digite o número 0
    No final do programa apresentar
    a)A soma dos numeros positivos
    b)A média dos numeros negativos
*/

int main()
{
   int numero,somaPos,somaNeg,contNeg,media;
   numero = 1;
   somaNeg=somaNeg=contNeg=0;

   while(numero!=0)
   {
       printf("Digite um numero: ");
       scanf("%d",&numero);

       if(numero>=0)
       {
        somaPos = somaPos + numero;
       }
       else
       {
        somaNeg = somaNeg + numero;
        contNeg++;
       }
   }
   media = somaNeg/contNeg;

   printf("Resultado da soma dos positivos: %d \n",somaPos);
   printf("Media dos numeros negatativos..: %d",media);


    return 0;
}
