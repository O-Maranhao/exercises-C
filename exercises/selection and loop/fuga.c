#include<stdio.h>

int main(){
    int h, p, f, d;
    scanf("%d%d%d%d",&h,&p,&f,&d);
    while(1){
        f+= d;
        if(f==-1){
            f=15;
        }
        if(f==16){
            f=0;
        }
        if(f==h){
            printf("S\n");
            break;
        }
    if(f==p){
        printf("N\n");
        break;
        }
    }
}