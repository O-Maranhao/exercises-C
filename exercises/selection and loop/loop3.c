#include<stdio.h>

int main(){
    int a, b, i;
    scanf("%d%d", &a, &b);
    i=a;
    printf("[ %d ", a);
    i--;
    while(i>b+1){
        printf("%d ", i);
        i--;
    }
    if(i=b+1){
        printf("%d ]\n", i);
    }
}