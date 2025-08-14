#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, a, b, competidor, dv, vencedor; //dv é diferença do vencedor
    scanf("%d", &n);
    int compet[n], jogada[n];
    dv = 10;
    vencedor = 0;
    for(competidor=0; competidor<n; competidor++){
        a=0;
        a=0;
        scanf("%d%d", &a, &b);
        if(a<10 || b<10)
            continue;
        jogada[competidor] = abs(a-b);
        if(jogada[competidor]<dv){
            dv = jogada[competidor];
            vencedor = competidor;
        }
    }
    if(vencedor == 0){
        printf("sem ganhador\n");
    }else 
    printf("%d\n", vencedor);
}