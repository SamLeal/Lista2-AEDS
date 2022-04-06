#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.

    /* Entrada            Saida
        123               O valor de A é: 1. O valor  de B é: 2. O valor de C é: 3.               
        321               O valor de A é: 1. O valor  de B é: 2. O valor de C é: 3.
        213               O valor de A é: 1. O valor  de B é: 2. O valor de C é: 3.
    */

    int a, b, c, maior, menor, medio;

    printf("Digite o valor de A:");
    scanf("%i",&a);
    printf("Digite o valor de B:");
    scanf("%i",&b);
    printf("Digite o valor de C:");
    scanf("%i",&c);

if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }
   
    if (c > maior) {
        medio = maior;
        maior = c;
    } else {
        if (c < menor) {
            medio = menor;
            menor = c;
        } else {
            medio = c;    
        }
    }

    a = menor;
    b  = medio;
    c = maior;

    printf("O valor de A é: %i.\nO valor  de B é: %i.\nO valor de C é: %i.", a, b, c);
}
