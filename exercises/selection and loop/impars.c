#include<stdio.h>

int main(){
    int p, d1, d2, resultado;
    scanf("%d %d %d",&p,&d1,&d2);

    resultado=d1+d2;

    switch(p){  
    case 0://Alice escolheu par 
        if((resultado%2== 0 ))
     {
        printf("0\n"); //Alice ganhou
    } else{
        printf("1\n"); //Pedro ganhou
    }
    break;

    case 1://Pedro escolheu Par
    if((resultado%2== 0 )&&(p == 1)){
        printf("1\n"); //Pedro Ganhou
    }
    else{
        printf("0\n"); //Alice ganhou
    }
    break;
    }
}