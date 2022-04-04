#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, aux, num2;

    printf("Digite um numero de 4 digitos:");
    scanf("%i",&numero);

    if(numero > 999 && numero < 10000){
        aux = numero/100;
        num2 =pow(numero *(aux*100)+aux, 2);

        if(num2 == numero){
            printf("Atende");
        }else{
            printf("Não atende");
        }
    }else{
        printf("Digite um numero valido!!!");
    }
}