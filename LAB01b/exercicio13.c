#include<stdio.h>

char *Remove(char Str[100], int posicao);

int main(){

  char Str[100];
  printf("Digite a string:");
  scanf("%s",Str);

  int n;
  printf("Digite a posicao que deseja remover (a primeira posicao eh 0):");
  scanf("%d",&n);

  printf("%s",Remove(Str,n));
  return 0;
}


 char *Remove(char Str[100], int posicao){

  while (posicao < 100){
    Str[posicao] = Str[posicao+1];
    posicao++;
}
  return Str;
}
