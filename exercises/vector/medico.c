#include<stdio.h>

int main(){
    int n, i, cont;
    scanf("%d", &n);
    int qnt[n];
    for(i=0;i<n;i++)
        scanf("%d", &qnt[i]);
    cont =0;
    for(i=0; i<n;i++)
        if(qnt[i]==0)
            if((i==0 || qnt[i-1]!=1) && (i== n-1 || qnt[i+1]!=1))
                cont++;

    printf("%d\n", cont);
}