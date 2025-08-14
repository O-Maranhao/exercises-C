#include<stdio.h>

int main(){
    int a, b, i;
    scanf("%d%d", &a, &b);
    i=a;
    while(i<=b-2){
        if(i==a){
            printf("[ %d ", a);
            i++;
        }
        else if(i>a){
            printf("%d ", i);
            i++;
        }
    }
    if(i=b-1){
        printf("%d ]\n", i);
    }
}