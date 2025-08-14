#include<stdio.h>

int main(){
    int l, d, r;
    scanf("%d%d%d", &l, &r, &d);

    if ((l<r)&&(d<r)&&(r>50)){
    printf("S\n");
    }
    else((l>r)||(d>r)||(50>r)){
    printf("N\n");
    }
    
}