#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que tenha o menu abaixo, e execute as instruções de cada opção do menu.

    0)Encerra o programa
    1)Incluir uma panela no estoque
    2)Incluir um prato no estoque
    3)Incluir uma chaleira no estoque
    4)Relatorio de inclusões
    5)Qualquer outro número é dada opção inválida.
    */


int main()
{
  int opcao, contPra, contCha, contPan;
  contPra = contCha = contPan = 0;

do {
    system("cls");
    printf("Menu de opcoes \n");
    printf("0-Encerra o programa \n");
    printf("1-Incluir uma panela no estoque \n");
    printf("2-Incluir um prato no estoque \n");
    printf("3-Incluir uma chaleira no estoque \n");
    printf("4-Relatorio de inclusoes: \n");
    printf("Digite uma opcao:");
    scanf("%d",&opcao);

   switch (opcao)
    {
        case 0:
            printf("Encerrando o programa");
            system("pause");
            break;
        case 1:
            printf("Panela adicionada \n");
            system("pause");
            contPan++;
            break;
        case 2:
            printf("Prato adicionado \n");
            system("pause");
            contPra++;
            break;
        case 3:
            printf("Chaleira adicionada \n");
            system("pause");
            contCha++;
            break;
        case 4:
            printf("Relatorio de inclusoes: \n");
            printf("Panela....: %d \n",contPan);
            printf("Prato.....: %d \n",contPra);
            printf("Chaleira..: %d \n",contCha);
            system("pause");
            break;
        default:
            printf("Numero invalido \n");
            system("pause");
            break;
    }


    }
    while(opcao!=0);







    return 0;
}
