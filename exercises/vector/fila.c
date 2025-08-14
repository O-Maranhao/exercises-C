#include<stdio.h>

int main(){
    int n, p, i;
    scanf("%d", &n);
    int vetor[n];
    for(i=0; i<n; i++)
        scanf("%d", &vetor[i]);

        //NÚMEROS IMPARES
    printf("[ ");
    for(i=0; i<n; i++)
        if(vetor[i]%2!=0)
            printf("%d ", vetor[i]);
    printf("]\n");
        //NUMEROS PARES PAPAI
    printf("[ ");
    for(i=0; i<n; i++)
        if(vetor[i]%2==0)
            printf("%d ", vetor[i]);
    printf("]\n");

    return 0;
}