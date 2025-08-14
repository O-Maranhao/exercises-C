#include<stdio.h>

void soma(int x, int y);

int main(){
    int a, b;
    printf("Digite os números que busca somar\n");
    scanf("%d%d", &a, &b);
    printf("Seu resultado foi ");
    soma(a,b);
    return 0;
}

void soma(int x, int y){
    x=x+y;
    printf("%d\n", x);
}


