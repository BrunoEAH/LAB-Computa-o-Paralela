//Exercício 9 - Função que substitui todos os numeros negativos de uma matriz por seu módulo
void (int matriz[][], int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < 0) {
                matrix[i][j] = (matrix[i][j])*-1;
            }
        }
    }
}