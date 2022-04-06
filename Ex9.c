#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. 
    Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo*/

    /* Entrada            Saida
    97379                   O NUMERO E PALINDROMO
    96379                   O NUMERO NAO E PALINDROMO
    */
   
    int num1,num2,num3,num4,num5, numero, auxiliar, invertido;

    printf("Digite um numero de 5 digitos:");
    scanf("%d",&numero);

    num1 = numero / 10000;
    auxiliar = numero % 10000;
    num2 = auxiliar / 1000;
    auxiliar = auxiliar % 1000;
    num3 = auxiliar / 100;
    auxiliar = auxiliar % 100;
    num4 = auxiliar / 10;
    num5 = auxiliar % 10;

    invertido = (num5 * 10000) + (num4 * 1000) + (num3 * 100) + (num2 * 10) + num1;

    if (numero == invertido){

    printf("O NUMERO E PALINDROMO\n");

    }else{

    printf("O NUMERO NAO E PALINDROMO\n");

    }

}
