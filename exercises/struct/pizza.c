#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[20];
    int pontos;
}restaurante;

int main(){
    int n, i;
    scanf("%d", &n);
    restaurante lista[n]; //Lista é um vetor do tipo Restaurante
    for(i=0;i<n;i++){
        scanf(" %s%d", lista[i].nome, &lista[i].pontos);
    }
    int pmaior=0;
    char nmaior[21];
    
    for(i=0;i<n;i++){
        if(lista[i].pontos==pmaior){
            if(strcmp(nmaior, lista[i].nome)>0)
                strcpy(nmaior, lista[i].nome);
        }
        if(lista[i].pontos>pmaior){
            pmaior=lista[i].pontos;
            strcpy(nmaior, lista[i].nome);
        }
    }
    printf("%s\n", nmaior);
}