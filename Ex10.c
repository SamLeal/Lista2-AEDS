#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do 
    consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
    • Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
    • Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
    • Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
    O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos. 
    Como resultado imprimir o valor a ser pago pelo mesmo*/

    int tipo;
    float metros, taxa;

    printf("Tipo de conta.\nDigite 1 para Residencial.\nDigite 2 para Comercial.\nDigite 3 para Industrial.\n");
    scanf("%i", &tipo);
    printf("Digite o seu consumo de agua em metros cubicos:");
    scanf("%f", &metros);

    if(tipo == 1){
        taxa = 75 + (metros*3.50);
        printf("A conta da sua residencia e:R$ %.2f", taxa);
    }else{
        if(tipo == 2){
            if (metros > 80){
                taxa = 500 + ((metros-80)*5.50);
                printf("A conta da sua residencia e:R$ %.2f", taxa);
            } else{
                printf("A conta da sua residencia e:  R$ 500");
            } 
        } else{
            if(tipo == 3){
                if (metros > 100){
                    taxa = 800 + ((metros-100)*8);
                    printf("A conta da sua residencia e:R$ %.2f", taxa);
                } else{
                    printf("A conta da sua residencia e:  R$ 800");
                } 
            }  else{
                printf("VALOR INVALIDO!!!");
            }
        }
    }
}
