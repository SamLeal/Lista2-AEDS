#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Leia um valor X e se ele for menor que 0 avalie Y = x² + 4. Se ele for maior que 0 avalie x³-3 e se ele for igual a 0 de uma mensagem de erro.

    /* Entrada            Saida
        3               O resultado da equacao quando x= 3 e: 24.
        -3              O resultado da equacao quando x= -3 e:  13.
        0               Entrada invalida!!!
    */

    float x, y;

    printf("Digite o valor:");
    scanf("%f",&x);

    if(x < 0){
        y = pow(x, 2) + 4;
        printf("O resultado da equacao quando x= %.2f e: %.2f", x, y);
    } else {
        if(x > 0){
        y = pow(x, 3) -3;
        printf("O resultado da equacao quando x= %.2f e: %.2f", x, y);

        }else{
            printf("Entrada invalida!!!");
        }
    }
    
    return 0;
}
