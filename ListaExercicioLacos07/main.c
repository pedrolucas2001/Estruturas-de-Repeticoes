#include <stdio.h>
#include <stdlib.h>
/*7. Escreva um programa que controle o acesso de pessoas em um elevador. O elevador permite
a quantidade máxima de 15 pessoas ou 800 Kg, o que ocorrer primeiro. Quando o elevador
estiver lotado deverá informar que está “LOTADO” e informar a quantidade de pessoas que
está transportando e o seu peso total.

Observação: Nenhuma das condições poderá ser ultrapassada, com o perigo do elevador cair.*/
int main()
{

    int n=0;
    int qtdMax = 0;
    int i=0;
    float peso,pesoMax;


    do
    {

        system("cls");
        printf("Elevador: \n");
        printf("1-Adicionar pessoa ao elevador:\n");
        printf("0-Encerrar o programa: \n");
        printf("Digite o que deseja: \n");
        scanf("%d",&n);

        if(n==1)
            {
                i++;
                if(i<=5)
                {
                    printf("Digite o peso da pessoa: \n");
                    scanf("%f",&peso);
                }

                else
                {
                    printf("Limite de pessoas excedido \n");
                    system("pause");
                }


                if(pesoMax<=800)
                pesoMax = pesoMax + peso;

                if(pesoMax>=800)
                    {
                        printf("Limite maximo de peso excedido \n");
                        system("pause");
                    }
            }
            else if(n==0)
            {
                printf("Programa encerrado! \n");
                system("pause");
            } else
            {
                printf("Codigo invalido!");
                system("pause");
            }




         printf("O elevador esta com %d pessoa(s) \n",i);
         printf("O peso do elevador no momento e de: %.2f \n",pesoMax);
         system("pause");


    } while(n!=0);








    return 0;
}
