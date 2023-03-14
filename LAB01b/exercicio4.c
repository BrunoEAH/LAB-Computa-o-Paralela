#include<stdio.h>

int main(){
  char nome1[20], nome2[20];
  int c1,c2;
  printf("Digite o primeiro nome:");
  scanf("%s",nome1);
  printf("Digite o segundo nome:");
  scanf("%s",nome2);


  for(int i =0; i <20; i++){
      c1 = (int)nome1[i];
      c2 = (int)nome2[i];
      if(c1 > c2){
        printf("\nOrdem alfabetica:\n");
        printf("\n%s\n",nome2);
        printf("\n%s\n",nome1);
        break;
      }
      if(c1<c2){
        printf("\nOrdem alfabetica:\n");
        printf("\n%s\n",nome1);
        printf("\n%s\n",nome2);
        break;
      }

  }
  return 0;
}
