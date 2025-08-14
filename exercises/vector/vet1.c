#include<stdio.h>

int main(){
    int n, i;
    //Vetor não é do tipo inteiro, ele é um ponteiro(vamo ver dps), então não faz sentido atribuir um valor a v
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n", v[i]);
    }
 
    
}