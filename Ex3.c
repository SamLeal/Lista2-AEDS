#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.
    float temp;

    printf("Digite a temperatura da agua: ");
    scanf("%f", &temp);

    if(temp < 0){
        printf("Na temperatura %.2f a agua esta no estado SOLIDO!", temp);
    }else{
        if( temp < 100) {
            printf("Na temperatura %.2f a agua esta no estado LIQUIDO!",temp);
        } else {
            printf("Na temperatura %.2f a agua esta no estado GASOSO!", temp);
        }
    }
    return 0;
}