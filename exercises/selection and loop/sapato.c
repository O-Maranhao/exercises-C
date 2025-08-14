#include<stdio.h>

int main(){
    int a, b, i, soma;
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("invalido\n");
    }
    else{
        for(i=a;i<=b;i++){
            if(i%6==0){
                soma+=i;
            } else{
                continue;
            }
        }
        printf("%d\n", soma);
    }
}