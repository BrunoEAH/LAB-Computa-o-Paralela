//Exercício 10 - Funções que multiplicam linhas ou colunas da matriz
void multiplicaLinha(int matriz[][], int linha, int num) {
    for (int j = 0; j < linha; j++) {
        matriz[linha][j] *= num;
    }
}

void multiplicaColuna(int matriz[][], int coluna, int num) {
    for (int i = 0; i < linha; i++) {
        matriz[i][coluna] *= num;
    }
}