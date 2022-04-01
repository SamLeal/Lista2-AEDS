#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso contrario.

    char nome[50];
    int nota1, nota2, nota3;
    float media;

    printf("Digite o nome do aluno:");
    gets(nome);

    printf("Digite a primeira nota:");
    scanf("%i", &nota1);

    printf("Digite a segunda nota:");
    scanf("%i", &nota2);

    printf("Digite a terceira nota:");
    scanf("%i", &nota3);

    media = (nota1+nota2+nota3)/3.0;

    if(media >= 6){
        printf("O %s esta APROVADO com a media %.2f", nome, media);

    } else {
        printf("O %s esta REPROVADO com a media %.2f", nome, media);
    }
    return 0;
}