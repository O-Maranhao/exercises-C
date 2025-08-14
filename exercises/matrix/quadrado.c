#include<stdio.h>

int main(){
    int mat[3][3];
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &mat[i][j]);
    int somal=0, somac=0, somad1=0, somad2=0;

    //Soma de Linhas
    int soml[3]={0,0,0};
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            soml[i]+=mat[i][j];
    if(soml[0]==soml[1] && soml[0]==soml[2] && soml[1] == soml[2])
        somal=soml[0];
    //Soma de Colunas
    int somc[3]={0,0,0};
    for(j=0;j<3;j++)
        for(i=0;i<3;i++)
            somc[j]+=mat[i][j];
    if(somc[0]==somc[1] && somc[0]==somc[2] && somc[1] == somc[2])
        somac=somc[0];
    //Soma de Diagonal Principal
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i==j)
                somad1+=mat[i][j];
    //Soma de Diagonal Secundaria
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i+j==4)
                somad2+=mat[i][j];

    //Comparation
    if(somal==somac && somal==somad1 && somal==somad2 && somac==somad1 && somac==somad2 && somad1==somad2)
        printf("sim\n");
    else
        printf("nao\n");
}