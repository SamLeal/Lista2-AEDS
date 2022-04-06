#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.

    /* Entrada Saida 
         2      O numero e par.
         5      O numero e impar.
    */
    int num1;

    printf("Digite um numero inteiro:");
    scanf("%i",&num1);

    if(num1%2 ==0){
        printf("O numero e par.");
    } else {
        printf("O numero e impar");
    }

    return 0;
}