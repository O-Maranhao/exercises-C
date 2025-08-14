#include<stdio.h>

int main(){
    int n,i;
    char pe;
    scanf("%d %c", &n,&pe);
    printf("[ ");
    for (i = 0; i < 10; i++){
        if(i==n){   
            continue;
        }
        if(pe =='d'){
            printf("%d%c ", i, pe);
            pe = 'e';
            continue;
        } else if(pe=='e'){
            printf("%d%c ", i, pe);
            pe = 'd';
            continue;
        }
    }
    if(n!=10){
     printf("ceu ");
    }
    printf("]\n");
    
            
}