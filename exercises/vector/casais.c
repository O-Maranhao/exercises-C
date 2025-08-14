#include<stdio.h>

int main(){
    int n, casais, i, j;
    scanf("%d", &n);
    int qnt[n];
    for(i=0;i<n;i++)
        scanf("%d", &qnt[i]);
    casais = 0;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            if(qnt[i] + qnt[j]==0 && qnt[i]!=0){
                qnt[i]=0;
                qnt[j]=0;
                casais++;
            }
        }
    }
    printf("%d\n", casais);

    return 0;
}