#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int thread_count; //contador de threads

int m = 3; //numero de linhas de x
int n = 6; //numero de colunas de x e de linhas em y

int y[]= {2,6,9,17,3,14}; //vetor
int x [3][6] = {    //matriz
                 {3,2,5,11,1,9},
                 {3,1,6,1,1,14},
                 {2,3,22,15,2,2}
                 };
float result[3]; //vetor resultante


void *MultipParal(void *rank);

int main(int argc, char *argv[]) {
  long thread;
  pthread_t *thread_handles;

  thread_count = strtol(argv[1], NULL, 10); //Conseguir numero de threads pelo bash

  thread_handles = malloc(thread_count * sizeof(pthread_t));

  for (thread = 0; thread < thread_count; thread++)
    pthread_create(&thread_handles[thread], NULL, MultipParal,(void*)  thread); //cria nova thread e d

  for(thread = 0; thread < thread_count; thread++) //sincronizar as threads
    pthread_join(thread_handles[thread],NULL);  //bloqueia a thread evocada até que a outra termine

  free(thread_handles);

  for(int i=0;i<m;i++)
    printf("\n%f ",result[i]);


  return 0;
}

void *MultipParal(void* rank) {
  long my_rank = (long) rank;
  int i,j;
  int local_m = m/thread_count;
  int primeira_linha = my_rank*local_m;
  int ultima_linha = (my_rank+1)*local_m-1;

  for(i=primeira_linha;i<=ultima_linha;i++){
      result[i] = 0.0;
      for (j=0; j<n ; j++)
        result[i]+= x[i][j]*y[j];
  }

  return NULL;
}



