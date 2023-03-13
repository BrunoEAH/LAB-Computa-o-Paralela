// Exercício 6 - Matriz transposta

#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

int main()
{
    int matriz[MAX_LINHAS][MAX_COLUNAS], transposta[MAX_COLUNAS][MAX_LINHAS];
    int linhas, colunas;

    // Definição do tamanho da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

	// Insreção dos números na matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Criação da matriz transposta
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    // Impressão da matriz transposta
    printf("A transposta da matriz é:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
