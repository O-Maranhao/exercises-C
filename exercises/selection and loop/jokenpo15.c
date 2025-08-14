#include<stdio.h>

int main(){
    int x, y, gx, gy;
    scanf("%d%d", &x, &y);
    
    if(x==y){
        printf("Empate\n");
    }
// x = (x + gx + 14) % 14
//  = (x + gx + 14) % 14
    else if(((y>x)&&(y<(x+7)))||((y<x)&&(x>=(y+8)))){
        printf("Jogador 1\n");
    }
    else{
        printf("Jogador 2\n");
    }
}