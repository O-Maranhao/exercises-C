#include<stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);

    if(x==y){
        printf("Empate\n");
    }
    
    else if((y>=(x-7)||(y>x+7))){
        printf("Jogador 2\n");
    }
    else{
        printf("Jogador 1\n");
    }
}