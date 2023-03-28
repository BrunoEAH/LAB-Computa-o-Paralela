#include  <stdio.h>
#include  <stdlib.h>
#include  <sys/types.h>
#include  <sys/ipc.h>
#include  <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>



int main() {

    int *var_comp;
    int add_comp,mult_comp;
    int shmID,status;



    shmID = shmget(IPC_PRIVATE, 4*sizeof(int), IPC_CREAT | 0666);

    if (shmID < 0){
      printf("Erro ao criar segmento de mem�ria compartilhada");
      exit(1);
    }


    var_comp = (int*) shmat(shmID, NULL, 0);

    if ((int) *var_comp == -1){
      printf("Erro ao alocar vari�vel compartilhada no espa�o de mem�ria compartilhada");
      exit(1);
    }

    printf("Digite um valor para  a vari�vel compartilhada:");
    scanf("%d",var_comp);
    printf("Digite um valor a para a adi��o, no processo filho:");
    scanf("%d",&add_comp);
    printf("Digite um valor a para a multiplicacao, no processo pai:");
    scanf("%d",&mult_comp);


    pid_t pid = fork();

    if (pid == -1){
      printf("Falha ao criar o processo filho");
      exit(1);
    }

    //processo filho
    if (pid == 0) {
      *var_comp = *var_comp+ add_comp;
      exit(0);
    }

    //processo pai
    printf("\nVari�vel compartilhada: %d\n", *var_comp);

    wait(&status);

    *var_comp = *var_comp * mult_comp;
    printf("Vari�vel depois do processo filho e da multiplica��o no processo pai: %d\n", *var_comp);
    exit(0);

    shmdt((void*)var_comp);

    if(shmdt(var_comp)==-1){
        printf("Erro ao desacoplar a vari�vel compartilhada do espa�o de mem�ria compartilhada");
        exit(1);
    }

    shmctl(shmID, IPC_RMID, NULL);
    return 0;

}
