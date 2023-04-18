#include<stdio.h>
#include<stdlib.h>

void MultipSerial(int m,int n,int x[m][n],int y[]);


int main(){
    int m = 3; //numero de linhas de x
    int n = 6; //numero de colunas de x e de linhas em y

    int y[]= {2,6,9,17,3,14}; //vetor

    int x [3][6] = {    //matriz
        {3,2,5,11,1,9},
        {3,1,6,1,1,14},
        {2,3,22,15,2,2}
    };


    MultipSerial(m,n,x,y);
    return 0;
}


void MultipSerial(int m,int n,int x[m][n],int y[]){

int result[m];

for(int i=0; i<=m;i++){
    result[i] = 0;
    for(int j=0;j<n;j++)
        result[i] = x[i][j] * y[j] + result[i];
}

for(int k=0;k<m;k++)
    printf("%d \n",result[k]);
}