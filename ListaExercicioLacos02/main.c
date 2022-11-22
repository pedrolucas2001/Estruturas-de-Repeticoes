#include <stdio.h>
#include <stdlib.h>

/*2. Escreva um programa que leia do teclado 25 valores inteiros e escreva no final a soma dos
valores que foram lidos.*/

int main()
{
    int i,n,soma;

    for(i=0;i<=25;i++)
    {
        printf("Digite um numero:");
        scanf("%d",&n);
        soma = soma + n;
    }

    printf("A media dos valores e de: %d \n",soma/i);
    system("pause");

    return 0;
}
