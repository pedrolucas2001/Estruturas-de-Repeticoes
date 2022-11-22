#include <stdio.h>
#include <stdlib.h>
/*4. Escreva um programa que leia 10 valores inteiros e escreva no final a soma dos valores
positivos e a média dos valores negativos.*/

int main()
{

    int somaP = 0;
    int somaN = 0;
    int contNegativo = 0;
    int n=0;
    int i;

    for(i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&n);

        if(n>=0)
        {
            somaP = somaP +n;


        }
        else
        {
            somaN = somaN +n;
            contNegativo++;
        }
    }
    printf("Soma dos positivos: %d \n",somaP);
    printf("Media dos negativos: %d",somaN/contNegativo);


    return 0;
}
