#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    for(i=0;i<=11;i++){
        if(i==0 && n!=0){
            printf("[ %d", i);
            continue;
        } else if(i==0 && n==0){
            printf("[");
            continue;
        }
        if(i==n){
            continue;
        }
        if(i==10 && n!=10){
            printf(" ceu ]\n");
            continue;
        }
        if(i==10 && n==10){
            printf("]\n");
            continue;
        }
        printf(" %d", i);
    }
}