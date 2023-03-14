#include<stdio.h>
#include<string.h>

char *Adiciona(char Str[100], int posicao, char c);

int main(){

  char Str[100];
  printf("Digite a string:");
  scanf("%s",Str);

  int n;
  printf("Digite a posicao que deseja adicionar o caracter (a primeira posicao eh 1):");
  scanf("%d",&n);

  char c;
  printf("Digite o caractere:");
  scanf(" %c",&c);

  printf("%s",Adiciona(Str,n,c));
  return 0;
}


 char *Adiciona(char Str[100], int posicao, char c){
  int tamanho = strlen(Str);
  if(posicao == tamanho){
     Str[posicao] = c;
   }
  else{
     for(int i=tamanho;i>=posicao;i--){
        Str[i]=Str[i-1];
     }
    Str[posicao-1]=c;
    Str[tamanho+1]='\0';
   }

  return Str;
}

