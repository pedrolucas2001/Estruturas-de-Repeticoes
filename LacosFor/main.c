#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero, resultado;
  int i;

   for ( i = 0; i < 5; i++) /*La�os de repeti��o tem uma quantidade determinada de repeti��es*/

    {
        printf("Digite um numero: ");
        scanf("%d",&numero);

        resultado = numero*3;

        printf("O resultado e: %d \n",resultado);
    }

    return 0;
}
