#include<stdio.h>

int main(){
    int a, b, c, h, l;
    scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);

    if((h*l)>(a*b)||(h*l)>(a*c)||(h*l)>(b*c)){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

}