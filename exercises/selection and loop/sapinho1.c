#include<stdio.h>

int main(){
    int p, h, s, e;
    scanf("%d%d%d", &h, &s, &e);
    p = 0;
    while(p<h){
        printf("%d ",p);
        p+=s;
        if(p>=h){
            printf("saiu\n");
            break;
        }
        printf("%d\n", p);
        p-=e;

    }
}