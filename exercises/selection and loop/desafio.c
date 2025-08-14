#include<stdio.h>
    int main(){
        int n, soma, entrada, i;
        
        scanf("%d", &n);
        
        for(i=0;i<=n;i++){
            
        scanf("%d\n", &entrada);
        soma+=entrada;
        
        }
        printf("%d\n", soma/n);
    }