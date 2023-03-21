

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int Metade1(int num1, int num);
int Metade2(int num2, int num);

int main() { 
  int temp,i, num, j, pid,num1,num2;
  int status;
  printf ("Enter the number: "); 
  scanf ("%d", &num); 

  num1 = num/2;
  num2 = num - num1;

  if(num1 < num2){
    temp = num1;
    num1 = num2;
    num2 = temp;
  }
  
  pid = fork();

  if(pid == 0 ){
      i = Metade1(num1,num);
      j = Metade2(num2,num);
  }
  else if(pid < 0)
      printf("O fork falhou");
  
  int resultado = i * j;
  
  printf("The factorial of %d is %d\n",num,resultado); 
  
}


int Metade1(int num1,int num){
  int res1  = 1;
  int i = num;
  if (num%2 != 0){ 
    int j = num + 1 ;
    while(j != num1){
      res1 = res1 * i;
      i--;
      j--;
    }
  }
  else{
      while(i != num1){
      res1 = res1 * i;
      i--;
    }
  }
  return res1;
}



int Metade2(int num2, int num){
  int res2  = num2;
  int i = 1;

  while(i != num2){
    res2 = res2 * i;
    i++;
  }
  
  return res2;
}

