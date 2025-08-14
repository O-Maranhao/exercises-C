#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n>0){
        printf("positivo\n");
    }
    else if(n<0){
        printf("negativo\n");
    }
    else if(n==0){
        printf("nulo\n");
    }

}