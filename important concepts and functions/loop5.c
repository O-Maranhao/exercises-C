#include<stdio.h>

int main(){
    int a, b, i;
    scanf("%d%d", &a, &b);

    for(i=a;i<b;i++){
        if((i%2)==0){
            continue;
        } else{
            if(((i==a)&&((a%2)!=0))||((i==(a+1))&&(a%2==0))){
                printf("[ %d", i);
                continue;
            } else{
            if(((i==(b-1))&&((b%2)==0))||((i==(b-2))&&(i%2!=0))){
                printf(" %d ]\n", i);
                continue;
            }else{
                printf(" %d", i);
                continue;
                }
            }
        }
    }
}
