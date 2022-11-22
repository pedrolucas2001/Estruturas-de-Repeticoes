#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que escreva na tela a soma dos números de 0 a 100 ou seja +1+2+3+4 ... +98+99+100*/
int main()
{
    int i, soma=0;

    for ( i=0; i<=100; i++)

        soma = soma+i;

        printf("a soma e %d \n", soma);



}
