#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a,b;
    a=n;
    b=n;
    int mat[a][b];
    int i, j;
    //Anotando a Matriz
    for(i=0;i<n;i++) //linha
        for(j=0;j<n;j++) //Coluna
            scanf("%d", &mat[i][j]);
    //Soma de coluna
    int soma[n];
    for(i=0;i<n;i++)
        soma[i]=0;
    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
            soma[j] += pow(mat[i][j],2);

    //Comparação
    int maior=0, copica=0;
    for(j=0;j<n;j++)
        if(soma[j]>maior && maior!=soma[j]){
            maior=soma[j];
            copica=j;
        }
    printf("%d", copica);
    
    return 0;

}