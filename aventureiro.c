#include <stdio.h>

int main (){

    // Variáveis
    
    int torre = 1, bispo = 1, rainha = 1, cavalo1 = 1, cavalo2 = 1;
    
    // Torre

    printf("[TORRE]\n\n");

    while (torre <= 5){

        printf("Direita\n");

        torre++;
    }

    // Bispo

    printf("\n[BISPO]\n\n");

    do
    {
        printf("Cima\nDireita\n");

        bispo++;

    } while (bispo <= 5);
    

    // Rainha

    printf("\n[RAINHA]\n\n");

    for(rainha; rainha <= 8; rainha++)
    {

        printf("Esquerda\n");

    }

    // Cavalo

    printf("\n[CAVALO]\n\n");

    for (cavalo1; cavalo1 <=1; cavalo1++)
    {

        while (cavalo2 <= 2)
        {

            printf("Baixo\n");

            cavalo2++;
            
        }

        printf("Esquerda\n");

        cavalo1++;
        
    }

    return 0;
    
}

