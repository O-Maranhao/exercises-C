#include<stdio.h>

int main(){
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    printf("[ ");
    for(i=a, j=b;i<=b;i++, j--){
        printf("%d ", i);
        printf("%d ", j);
    }
    printf("]\n");

}