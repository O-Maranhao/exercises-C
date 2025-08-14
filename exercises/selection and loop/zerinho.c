#include<stdio.h>

int main(){
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if((a!=b)&&(a!=c)){
        printf("jog1\n");
    }
    else if((b!=a)&&(b!=c)){
        printf("jog2\n");
    }
    else if((c!=a)&&(c!=b)){
        printf("jog3\n");
    }
    else if((a=b)&&(b=c)&&(a=c)){
        printf("empate\n");
    }
}