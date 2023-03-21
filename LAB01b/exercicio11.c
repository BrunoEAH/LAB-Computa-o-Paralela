//Exercício 11 - Função que soma linhas da matriz
void somarLinhas(int matriz[][], int L1, int L2, int coluna) {
    int soma = 0;
    for (int i = 0; i < coluna; i++) {
        soma += matriz[L1][i] + matriz[L2][i];
    }
    for (int i = 0; i < coluna; i++) {
        matriz[L2][i] = soma;
    }
}