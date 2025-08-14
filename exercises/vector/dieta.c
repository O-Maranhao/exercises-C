#include<stdio.h>

int main(){
    int d, i, soma;
    float res;
    scanf("%d", &d);
    int qtd[d];
    for(i=0, soma = 0;i<d;i++){
        scanf("%d", &qtd[i]);
        soma+=qtd[i];
    }
    res = soma/d;
    printf("%.1f\n", res);
}