#include <stdio.h>

void movertorre (int casas){
    if(casas > 0){
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo (int casas){
    if(casas > 0){
        printf("Cima\nDireita\n");
        moverbispo(casas - 1);
    }
}

void moverrainha (int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}



int main (){

    // Variáveis

    int cavalo1 = 1, cavalo2 = 1, cavalo3 = 3;

    // Torre

    printf("[TORRE]\n\n");

    movertorre(5);


    // Bispo

    printf("\n[BISPO]\n\n");

    moverbispo(5);

    // Rainha

    printf("\n[RAINHA]\n\n");

    moverrainha(8);

    // Cavalo

    printf("\n[CAVALO]\n\n");
    
    for (cavalo1, cavalo3; cavalo1 < 2 && cavalo3 > 2; cavalo1++, cavalo3--)
    {

        while (cavalo2 <= 2)
        {

            printf("Cima\n");

            cavalo2++;
            
        }

        printf("Direita\n");

        
    }
}
