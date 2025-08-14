#include<stdio.h>

int main(){
    int t, b, Sc;
    scanf("%d%d", &t, &b);

    Sc=(b+t)*70/2;

    if(Sc>5600){
        printf("1\n");
    }
    else if(Sc<5600){
        printf("2\n");
    }
    else if(Sc=5600){
        printf("0\n");
    }

}