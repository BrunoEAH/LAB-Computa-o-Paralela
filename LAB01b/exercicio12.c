//Exercício 12 - Encontrar caracter na string
#include <stdio.h>
#include <string.h>

// Função  que encontra o caractere na string
int encontrarCaractere(char *string, char caractere) {
    int posicao = -1;
    char *ptr = strchr(string, caractere);
    if (ptr != NULL) {
        posicao = ptr - string;
    }
    return posicao;
}

// Função main() para teste
int main() {
    char string[100];
    char caractere;
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    int posicao = encontrarCaractere(string, caractere);
    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", caractere, posicao);
    } 
	else {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    }
    return 0;
}