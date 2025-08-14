#include<stdio.h>

int main(){
    int a, b, i;
    scanf("%d%d", &a, &b);

    for(i=a;i<=b;i++){
        if(i%3==0 && i%5!=0){
            printf("zig\n");
            continue;
        }
        else if(i%3!=0 && i%5==0){
            printf("zag\n");
            continue;
        }
        else if(i%15==0){
            printf("zigzag\n");
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
}