#include<stdio.h>

int main(){
    int x, n, i, rep;
    scanf("%d%d", &x, &n);
    int qnt[n];
    rep=0;
    for(i=0;i<n;i++){
        scanf("%d", &qnt[i]);
        if(qnt[i]==x)
            rep++;
    }
    printf("%d\n", rep);
}