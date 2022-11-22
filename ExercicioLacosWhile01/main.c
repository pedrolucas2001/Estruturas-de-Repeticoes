#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia numeros até que o usuário digite o número -1
    No final mostrar a soma de todos os numeros digitados
*/
int main()
{
    int n,soma;
    n=0;
    soma=0;

    while(n!=-1)
    {
        printf("Digite um numero: ");
        scanf("%d",&n);

        if(n!=-1)
            soma = soma+n;
    }
    printf("O resultado da soma de todos os numero foi: %d",soma);

    return 0;
}
