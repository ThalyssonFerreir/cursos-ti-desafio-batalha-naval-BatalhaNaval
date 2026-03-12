#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};
    int linhaH, colunaH;
    int linhaV, colunaV;

    printf("=== BATALHA NAVAL ===\n");
    printf("O tabuleiro tem tamanho 10x10\n");
    printf("Coordenadas vao de 0 ate 9\n\n");

    printf("Escolha a posicao inicial do NAVIO HORIZONTAL (tamanho 3)\n");

    printf("Linha: ");
    scanf("%d", &linhaH);

    printf("Coluna: ");
    scanf("%d", &colunaH);

    while(colunaH > 7 || linhaH > 9){
        printf("\nERRO: O navio sairia do tabuleiro!");
        printf("\nDigite novamente.\n");

        printf("Linha: ");
        scanf("%d", &linhaH);

        printf("Coluna: ");
        scanf("%d", &colunaH);
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    printf("\nEscolha a posicao inicial do NAVIO VERTICAL (tamanho 3)\n");

    printf("Linha: ");
    scanf("%d", &linhaV);

    printf("Coluna: ");
    scanf("%d", &colunaV);

    while(linhaV > 7 || colunaV > 9){
        printf("\nERRO: O navio sairia do tabuleiro!");
        printf("\nDigite novamente.\n");

        printf("Linha: ");
        scanf("%d", &linhaV);

        printf("Coluna: ");
        scanf("%d", &colunaV);
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
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