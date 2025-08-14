#include<stdio.h>

int main(){
    int a, i;
    scanf("%d", &a);
    for(i=2; i<=a; i++){
        if(a%i==0 && (i==a)){
            printf("1\n");
            break;
        }
        else if(a%i==0 && i!=a){
            printf("0\n");
            break;
        }
    }
}