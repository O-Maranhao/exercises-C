#include<stdio.h>

int main(){
    float a, g, ra, rg, fa, fg;

    scanf("%f %f %f %f", &a, &g, &ra, &rg);
    
    fa= ra/a;
    fg = rg/g;

    if(fa>fg){
        printf("A\n");
    }
    else{
        printf("G\n");
    }
}