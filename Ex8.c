#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*- ler um código do teclado e mostrar o nome correspondente, de acordo com a lista : 
    221 Bernardo 
    211 Eustáquio 
    311 Luiz 
    312 Mário 
    332 Artur*/

    int codigo;
    
    printf("Digite o código da pessoa:");
    scanf("%i",&codigo);

    switch (codigo)
    {
    case 221:
        printf("A pessoa é o Bernardo.");
        
        break;
    case 211:
        printf("A pessoa é o Eustaquio.");
        
        break;
    case 311:
        printf("A pessoa é o Luiz.");
        
        break;
    case 312:
        printf("A pessoa é o Mario.");
        
        break;
    case 332:
        printf("A pessoa é o Artur.");
        
        break;
    
    default:
        printf("Entrada inválida!!!");
        break;
    }
}
