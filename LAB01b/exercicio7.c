#include<stdio.h>

typedef struct{
  int idade;
  float peso;
  float altura;
} Pessoa;


int main(){
  Pessoa pessoa1,pessoa2,pessoa3;
  char nome1[20], nome2[20],nome3[20];

  printf("Digite o primeiro nome:");
  scanf("%s",nome1);
  printf("\nDigite a idade da primeira pessoa:");
  scanf("%d",&pessoa1.idade);
  printf("\nDigite o peso da primeira pessoa:");
  scanf("%f",&pessoa1.peso);
  printf("\nDigite a altura da primeira pessoa:");
  scanf("%f",&pessoa1.altura);

  printf("\nDigite o segundo nome:");
  scanf("%s",nome2);
  printf("\nDigite a idade da segunda pessoa:");
  scanf("%d",&pessoa2.idade);
  printf("\nDigite o peso da segunda pessoa:");
  scanf("%f",&pessoa2.peso);
  printf("\nDigite a altura da segunda pessoa:");
  scanf("%f",&pessoa2.altura);

  printf("\nDigite o terceiro nome:");
  scanf("%s",nome3);
  printf("\nDigite a idade da terceira pessoa:");
  scanf("%d",&pessoa3.idade);
  printf("\nDigite o peso da terceira pessoa:");
  scanf("%f",&pessoa3.peso);
  printf("\nDigite a altura da terceira pessoa:");
  scanf("%f",&pessoa3.altura);


  Pessoa pessoas[] = {pessoa1,pessoa2,pessoa3};

  for(int i=0; i<3; i++){

    if(i==0)
        printf("\nNome:%s\n",nome1);
    if(i==1)
        printf("\nNome:%s",nome2);
    if(i==2)
        printf("\nNome:%s\n",nome3);
    printf("\nIdade:%d\n",pessoas[i].idade);
    printf("\nPeso:%f\n",pessoas[i].peso);
    printf("\nAltura:%f\n\n",pessoas[i].altura);



  }
  return 0;
}
