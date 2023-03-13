// Exercício 5 - Multiplicação de linhas ou colunas em uma matriz
#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

int main()
{
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int linhas, colunas, num, opcao, linhacoluna;

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
    
    // Inserção do valor de multiplicação
    printf("Digite o número que deseja multiplicar a linha ou coluna:\n");
    scanf("%d", &num);
    
    // Seleção de operação na linha ou coluna
    printf("Digite 1 para multiplicar uma linha ou 2 para multiplicar uma coluna:\n");
    scanf("%d", &opcao);
    printf("Digite o número da linha/coluna que a operação será feita:\n");
    scanf("%d", &linhacoluna);

    // Operação de multiplicação
    if (opcao == 1){
        for (int j = 0; j < colunas; j++) {
            matriz[linhacoluna-1][j] *= num;
        }
    }
    if (opcao == 2){
        for (int i = 0; i < linhas; i++) {
            matriz[i][linhacoluna-1] *= num;
        }
    }

    // Exibição da matriz após a operação
    printf("A transposta da matriz é:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}