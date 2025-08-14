#include<stdio.h>

//é um vetor bidimensional, vamos percorrer a Matriz, vc decla com Int M[4][5]
/*
int main(){
    int M[4][5]; //i é linhas, que é o [4], o j é colunas[5]
    int M[][3]={3,4,5,2,3,4,2,1,4};
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int mat[n][m];
    for(int i=0; i<n*m-1;i++)
            scanf("%d", &mat[i/m][i%m]);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            printf("%02d ", mat[i][j]);
        printf("\n");
    }
==========================================*/
//Bora trocar linha por coluna galera
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int mat[n][m];
    for(int i=0; i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &mat[i][j]);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            printf("%02d ", mat[i][j]);
        printf("\n");
    }

}