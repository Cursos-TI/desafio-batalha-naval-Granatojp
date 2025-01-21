#include <stdio.h>

#define TAMANHO_TABULEIRO 5  // Definindo o tamanho do tabuleiro (5x5)

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (x + i < TAMANHO_TABULEIRO) {
            tabuleiro[x + i][y] = 1;  // Marcando a posição do navio
            printf("Navio Vertical - Coordenada: (%d, %d)\n", x + i, y);
        }
    }
}

void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (y + i < TAMANHO_TABULEIRO) {
            tabuleiro[x][y + i] = 1;  // Marcando a posição do navio
            printf("Navio Horizontal - Coordenada: (%d, %d)\n", x, y + i);
        }
    }
}

int main() {
    // Inicializando o tabuleiro com valores 0 (representando espaços vazios)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Definindo as coordenadas e tamanhos dos navios
    int navioVerticalX = 1, navioVerticalY = 2, tamanhoNavioVertical = 3;
    int navioHorizontalX = 3, navioHorizontalY = 0, tamanhoNavioHorizontal = 4;

    // Posicionando os navios no tabuleiro
    posicionarNavioVertical(tabuleiro, navioVerticalX, navioVerticalY, tamanhoNavioVertical);
    posicionarNavioHorizontal(tabuleiro, navioHorizontalX, navioHorizontalY, tamanhoNavioHorizontal);

    // Exibindo o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
