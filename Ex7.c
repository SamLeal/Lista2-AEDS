#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O numero 3025 possui a seguinte característica:
            30 + 25 = 55
            55² = 3025
        Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele 
        possui ou não esta característica.

     Entrada            Saida
    3025                Atende
    3024                Nao Atende
    */

    int numero, aux;
    float num2;

    printf("Digite um numero de 4 digitos:");
    scanf("%i",&numero);

    if(numero > 999 && numero < 10000){
        aux = numero/100;
        num2 = pow(numero -(aux*100)+aux, 2);

        if(num2 == numero){
            printf("Atende");
        }else{
            printf("Nao atende");
        }
    }else{
        printf("Digite um numero valido!!!");
    }
}
