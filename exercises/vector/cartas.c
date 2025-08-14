#include<stdio.h> 

int main(){
    int n, i;
    scanf("%d", &n);
    int mao[n];
    for(i=0;i<n;i++){
        scanf("%d", &mao[i]);
    }
    printf("[");
    for(i=0;i<n;i++){
        if(i==n-1){
            if(mao[i]==1)
            printf("A");
        else if(mao[i]==11)
            printf("J");
        else if(mao[i]==12)
            printf("Q");
        else if(mao[i]==13)
            printf("K");
        else
            printf("%d", mao[i]);
        }
        else{
        if(mao[i]==1)
            printf("A, ");
        else if(mao[i]==11)
            printf("J, ");
        else if(mao[i]==12)
            printf("Q, ");
        else if(mao[i]==13)
            printf("K, ");
        else
            printf("%d, ", mao[i]);
        }
    }
    printf("]\n");
}