#include <stdio.h>

int main (){

    // Variáveis
    
    int torre = 1, bispo = 1, rainha = 1;
    
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
}

