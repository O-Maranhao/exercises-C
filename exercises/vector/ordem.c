#include<stdio.h>

void bubblesort(int [], int);

int main(){
    int tam;
    scanf("%d", &tam);
    int fila[tam], i;
    for(i=0; i<tam;i++)
        scanf("%d", &fila[i]);
    bubblesort(fila, tam);
    for(i=0;i<tam-1;i++)
        printf("%d ", fila[i]);
    printf("%d\n", fila[tam-1]);
    
    return 0;
}

void bubblesort(int v[], int n){
    int i, j, aux;
    for(i=0;i<n-1;i++)//Contador de Repetição
        for(j=0; j<n-1; j++) //Cada index vai se comparando.
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
}