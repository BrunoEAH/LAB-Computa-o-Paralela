
#include <stdio.h>

int main(){

  float n1,n2,n3,ma,me;

  printf("Digite a nota da n1:");
  scanf("%f",&n1);
  printf("Digite a nota da n2:");
  scanf("%f",&n2);
  printf("Digite a nota da n3:");
  scanf("%f",&n3);

  me = (n1+n2+n3)/3;
  ma = (n1 + n2*2 + n3*3 + me)/7;

  if(ma >= 9)
    printf("\nA");

  if(ma >= 7.5 && ma < 9)
    printf("\nB");

  if(ma >= 6 && ma < 7.5)
    printf("\nC");

  if(ma >= 4 && ma <6)
    printf("\nD");

  if(ma < 4)
    printf("\nE");


}
