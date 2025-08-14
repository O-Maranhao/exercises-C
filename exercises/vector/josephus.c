#include<stdio.h>

int main(){
    int n, x, prox, i; //x é quem pega a espada, 
    scanf("%d%d", &n, &x);
    int v[n];
    for(int i=0; i<n; i++)
        v[i]=i+1;
    if(x==n)
        prox=1;
    else
        prox=x+1;
    while(x!=prox){
        v[prox-1]=0;
        if(x==n){
            x=0;
        }
        for(x++; v[x-1]==0;x++)
            if(x==n)
                x=0;
        if(x==n)
                x=0;
        else
            prox = x;
        for(prox=x+1;v[prox-1]==0;prox++){
            if(prox==n)
                prox=0;
        }
    } 
    printf("%d\n", x);
}