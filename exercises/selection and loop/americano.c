#include<stdio.h>

int main(){
    int a, b, c, d, t;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    t = a+b+c+d;

    if(t==0){
        printf("nenhum\n");
    }
    else if(t%4==1){
        printf("jog1\n");
    }
    else if(t%4==2){
        printf("jog2\n");
    }
    else if(t%4==3){
        printf("jog3\n");
    }
    else if(t%4==0){
        printf("jog4\n");
    }
}