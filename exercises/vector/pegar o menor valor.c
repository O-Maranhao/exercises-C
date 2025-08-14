#include<stdio.h>
int main(){
    int menor, i;
    menor = 10;
    int v[5];
    for(i=0;i<5;i++){
        scanf("%d", &v[i]);
        if(v[i]<menor){
            menor=v[i];
        }
    }
    printf("%d", menor);
    return 0;
}