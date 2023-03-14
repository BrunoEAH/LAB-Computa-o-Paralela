#include <stdio.h>

int main(void) {
  int matriz[2][2],menor;
  for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
        printf("\nDigite o elemento da linha %d e da coluna %d: ",i,j);
        scanf("%d",&matriz[i][j]);
        }
  }
  menor = matriz[0][0];

    for(int a=0;a<2;a++){
      for(int b=0;b<2;b++){
          if(menor > matriz[a][b])
              menor = matriz[a][b];
        }
      }

  printf("\nMenor elemento eh : %d",menor);

  return 0;
}
