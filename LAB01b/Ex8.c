//Ex8 - Função que cria uma matriz transposta
void transpor(int matriz[][], int linha, int coluna) {
    int transposta[coluna][linha];
    int i, j;
    
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}