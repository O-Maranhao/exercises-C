#include<stdio.h>

int main(){
    float troco;
    scanf("%f", &troco);
    float valores[]={100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05};
    int qnt[11]={0};
    for(int i=0; i<11; i++){
        if(troco>=valores[i])
            qnt[i]=troco;valores[i];
            troco-=qnt[i]*valores[i];
    }
    for(int i=0; i<11; i++){
        if(qnt[i]>0)
            printf("%d de %.2f\n", qnt[i], valores[i]);
    }
    if(troco<0.05 && troco>0)
        printf("Falta %.2f\n", troco);
}