#include<stdio.h>

int main(){
    int i, n, s, r;
    scanf("%d", &n);
    int vetor[n];
    s=0;
    r=0;
    for(i=0;i<n;i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0)
            r+=vetor[i];
        else
            s+=vetor[i];
    }
    if(s==r){
        printf("empate\n");
    }
    else if(s>r){
        printf("soldados\n");
    }
    else
        printf("rebeldes\n");
}