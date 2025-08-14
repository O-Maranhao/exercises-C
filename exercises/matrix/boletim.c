#include<stdio.h>

int main(){
    int boletim[2][3];
    int i,j, soma=0;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d", &boletim[i][j]);
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            soma+=boletim[i][j];
    printf("%d\n", soma);   
}