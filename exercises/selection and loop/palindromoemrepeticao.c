#include<stdio.h>

int main(){
    int n, x, y;
    scanf("%d", &n);
    x = n;
    y = 0;
    while(n>0){
        y=y*10+n%10; // Que fórmula disgraçada
        n/=10;
        }
    if(x==y){
        printf("1\n");
    } else{
        printf("0\n");
    }
}