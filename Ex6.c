#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é divisível por Y e por Z. 
    O algoritmo deverá mostrar as possíveis mensagens:
    - o número é divisível por Y e Z.
    - o número é divisível por Y mas não por Z.
    - o número é divisível por Z mas não por Y.
    - o número não é divisível nem Y nem por Z*/
    int x, y, z, maior, divisivel;

    printf("Digite o valor de X:");
    scanf("%i",&x);
    printf("Digite o valor de Y:");
    scanf("%i",&y);
    printf("Digite o valor de Z:");
    scanf("%i",&z);

    if(x%y == 0 && x%z == 0){
        printf("O número é divisível por Y e Z");

    } else{
        if (x%y == 0 && x%z != 0){

            printf("O número é divisível por Y mas não por Z");

        } else{
            if (x%y != 0 && x%z == 0){

            printf("O número é divisível por Z mas não por Y");

            } else{

                printf("O número não é divisível nem Y nem por Z");

            }
        }
    }
}
