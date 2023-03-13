//Ex3 - Pirâmide

#include <stdio.h>

int main() {
    int tamanho;

    // Input do número maximo com verificador
    do {
        printf("Digite o número máximo (deve ser ímpar): ");
        scanf("%d", &tamanho);
    } while (tamanho % 2 == 0);

    // Imprime a pirâmide
    int espaco = 0;
    for (int i = 1; i <= tamanho; i ++) {
        // Imprime os espaços entre os números
        for (int j = 0; j < espaco; j++) {
            printf(" ");
        }

        // Imprime a linha
        for (int j = i; j <= tamanho; j++) {
            printf("%d ", j);
        }

        // Atualiza numero de espaços e diminui o valor maximo
        espaco++;
		tamanho--;

        printf("\n");
    }

    return 0;
}