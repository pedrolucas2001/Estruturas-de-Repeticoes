#include <stdio.h>
#include <stdlib.h>
/*6. Escreva um programa que controle o acesso de pessoas em um restaurante. O restaurante
tem uma capacidade de 40 vagas, que n�o poder� ser ultrapassada. O controle ser� feito
atrav�s de c�digos, conforme a tabela abaixo:

    0 � Encerrar o programa
    1 � Entrar uma pessoa no restaurante
    2 � Sair uma pessoa do restaurante
    3 � Mostrar quantos lugares est�o dispon�veis
    4 � Mostrar o total de pessoas que entraram
    5 � Mostrar o total de pessoas que sa�ram

Qualquer outro c�digo escrever que o c�digo � inv�lido. Uma observa��o: N�o poder� sair
uma pessoa e ficar a quantidade de lugares dispon�veis negativa.
Observa��o: N�o pode sair uma pessoa se n�o existir ningu�m dentro do restaurante, ou seja,
a quantidade de lugares dispon�veis n�o pode ficar negativa.
*/
int main()
{
    int vagas,n,entradaPessoa,saidaPessoas,qtdLugar,qtdPessoa;
    qtdPessoa = qtdLugar = entradaPessoa = saidaPessoas = 0;
    vagas = 40;
    int lugaresDisp;

    do
    {
        system("cls");
        printf("Restaurante do Pedro \n");
        printf("Escolha a opcao que deseja: \n");
        printf("0-Encerrar o programa: \n");
        printf("1-Entrar uma pessoa no restaurante: \n");
        printf("2-Sair uma pessoa do restaurante: \n");
        printf("3-Mostrar quantos lugares estao disponiveis: \n");
        printf("4-Mostrar o total de pessoas que entraram: \n");
        printf("5-Mostrar o total de pessoas que sairam: \n");
        scanf("%d",&n);




    switch(n)
    {
        case 0:
            printf("Encerrando o programa \n");
            system("pause");
            break;
        case 1:

            system("cls");
            printf("1 pessoa entrou! \n");
            system("pause");
            entradaPessoa++;
            qtdPessoa++;
            break;
        case 2:
            system("cls");
            printf("1 pessoa saiu! \n");
            system("pause");
            qtdPessoa--;
            saidaPessoas++;
            break;
        case 3:
            printf("Lugares disponiveis: %d \n",vagas-qtdPessoa);
            system("pause");

            break;
        case 4:
            printf("Quantidade de pessoas que entraram: %d \n",entradaPessoa);
            system("pause");
            break;
        case 5:
            printf("Quantidade de pessoas que sairam: %d \n",saidaPessoas);
            system("pause");
            break;
        default :
            printf("Codigo invalido \n");
            system("pause");
            break;
    }


    }while(n!=0);
}









