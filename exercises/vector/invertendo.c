#include<stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
        scanf("%d", &vet[i]);
    printf("[");
    for(i=n-1;i>=0;i--)
        printf(" %d", vet[i]);
    printf(" ]\n");
    return 0;
}