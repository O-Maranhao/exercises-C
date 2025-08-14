#include<stdio.h>
#include<math.h>

int main(){

    double a, b, c, delta, x1, x2;

    //Entrada
    scanf("%lf%lf%lf", &a, &b, &c);
    //Bhaskara
    delta = (pow(b,2) - (4*a*c));

    if(delta>0){
        x1=(((-b) + sqrt(delta))/(2*a));
        x2=(((-b) - sqrt(delta))/(2*a));
        printf("%.2lf\n%.2lf\n", x1, x2);
    }
    else if(delta==0){
        x1=((-b)/(2*a));
        if(x1==0){
            printf("0.00\n");
        }
        else{
        printf("%.2lf\n", x1);
    }
    }
    else if(delta<0){
        printf("nao ha raiz real\n");
    }
}