#include<stdio.h>

int main(){
    int a, b, i, s;
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("invalido\n");
    }
    s=0;
    for(i=a;i<=b; i++){
        if((a<b)&&(i%2==0)){
            s+=i;
        }
        else{
            continue;
        } 
    }
    if(a==b){
        printf("%d", a);
    }
    if(a<b){
    printf("%d\n", s);
    }
}