#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double approx;
double f(double x);
void Trap(double a, double b, int  n);


int main(){
        double a,b;
        int n;
        printf("Digite a,b e n\n");
        scanf("%lf %lf %d", &a, &b, &n);
        Trap(a,b,n);

        printf("Com %d trapezios, a estimativa\n",n);
        printf("da integral de %lf a %lf = %.14e\n",a,b,approx);

        return 0;


}


void Trap(double a, double b, int  n){
        double x;
        double h;
        h = (b-a)/n;
        approx = (f(a)+f(b))/2.0;
        for(int i=1; i <= n-1; i++){
                x = a + i*h;
                approx += f(x);
        }

        approx = h*approx;
}

double f(double x){

        return exp(x);
}