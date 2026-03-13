#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};
    int navioDiagonal[3] = {3,3,3};
    int navioDiagonal2[3] = {3,3,3};
    int linhaH, colunaH;
    int linhaV, colunaV;
    int linhaD, colunaD;
    int linhaD2, colunaD2;

    int valido = 0;

    printf("=== BATALHA NAVAL ===\n");
    printf("O tabuleiro tem tamanho 10x10\n");
    printf("Coordenadas vao de 0 ate 9\n\n");

    while(!valido){

        printf("Escolha a posicao inicial do NAVIO HORIZONTAL (tamanho 3)\n");

        printf("Linha: ");
        scanf("%d", &linhaH);

        printf("Coluna: ");
        scanf("%d", &colunaH);

        if(colunaH > 7 || linhaH > 9){
            printf("\nERRO: O navio sairia do tabuleiro!\n\n");
            continue;
        }

        valido = 1;

        for(int i = 0; i < 3; i++){
            if(tabuleiro[linhaH][colunaH + i] != 0){
                printf("\nERRO: Ja existe um navio nessa posicao!\n\n");
                valido = 0;
                break;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    valido = 0;

    while(!valido){

        printf("\nEscolha a posicao inicial do NAVIO VERTICAL (tamanho 3)\n");

        printf("Linha: ");
        scanf("%d", &linhaV);

        printf("Coluna: ");
        scanf("%d", &colunaV);

        if(linhaV > 7 || colunaV > 9){
            printf("\nERRO: O navio sairia do tabuleiro!\n\n");
            continue;
        }

        valido = 1;

        for(int i = 0; i < 3; i++){
            if(tabuleiro[linhaV + i][colunaV] != 0){
                printf("\nERRO: Ja existe um navio nessa posicao!\n\n");
                valido = 0;
                break;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    valido = 0;

    while(!valido){

        printf("\nEscolha a posicao inicial do NAVIO DIAGONAL ↘ (tamanho 3)\n");

        printf("Linha: ");
        scanf("%d", &linhaD);

        printf("Coluna: ");
        scanf("%d", &colunaD);

        if(linhaD > 7 || colunaD > 7){
            printf("\nERRO: O navio sairia do tabuleiro!\n\n");
            continue;
        }

        valido = 1;

        for(int i = 0; i < 3; i++){
            if(tabuleiro[linhaD + i][colunaD + i] != 0){
                printf("\nERRO: Ja existe um navio nessa posicao!\n\n");
                valido = 0;
                break;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaD + i][colunaD + i] = navioDiagonal[i];
    }

    valido = 0;

    while(!valido){

        printf("\nEscolha a posicao inicial do NAVIO DIAGONAL ↙ (tamanho 3)\n");

        printf("Linha: ");
        scanf("%d", &linhaD2);

        printf("Coluna: ");
        scanf("%d", &colunaD2);

        if(linhaD2 > 7 || colunaD2 < 2 || colunaD2 > 9){
            printf("\nERRO: O navio sairia do tabuleiro!\n\n");
            continue;
        }

        valido = 1;

        for(int i = 0; i < 3; i++){
            if(tabuleiro[linhaD2 + i][colunaD2 - i] != 0){
                printf("\nERRO: Ja existe um navio nessa posicao!\n\n");
                valido = 0;
                break;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaD2 + i][colunaD2 - i] = navioDiagonal2[i];
    }

    printf("\n=== TABULEIRO ===\n\n");

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}