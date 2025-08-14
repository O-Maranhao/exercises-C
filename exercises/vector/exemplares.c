#include <stdio.h>

void ordenar(int v[], int tam){
    int i, j, aux;
    for(i = 0; i < tam-1; i++)
        for(j = 0;j < tam-1-i; j++)
            if(v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
}

int main(){
    int n, i, tamRes = 0;
    scanf("%d", &n);

    int vet[n];
    int qnt[10001] = {0};
    int res[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < n; i++){
        if(qnt[vet[i]] == 0){
            qnt[vet[i]] = 1;
            res[tamRes] = vet[i];
            tamRes++;
        }
    }

    ordenar(res, tamRes);

    for(i = 0; i < tamRes; i++){
        if(i==(tamRes-1)){
            printf("%d\n", res[i]);
            break;
        }
        printf("%d ", res[i]);
    }

    return 0;
}