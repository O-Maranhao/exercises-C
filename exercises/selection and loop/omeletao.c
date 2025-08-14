#include<stdio.h>

int main(){
    int tam, n, menor;
    menor = 100;

    for(n = 0; n<=4; n++){
        scanf("%d", &tam);
        if(tam<menor){
            menor = tam;
        }
    }
    printf("%d\n", menor);
}