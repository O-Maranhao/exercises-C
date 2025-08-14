#include<stdio.h>

int main(){
    int i, j;
    int n1, n2;
    //Lendo cada vetor
    scanf("%d", &n1);
    int vet1[n1];
    int anot[n1];

    for(i=0;i<n1;i++){
        scanf("%d", vet1);
        anot[i]=0;
    }
    scanf("%d", &n2);

    int vet2[n2]; 
    int ver[n2];
    for(i=0;i<n2;i++){
        scanf("%d", vet2);
        ver[n2]=0;
    }

    //Comparação
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++)
            if(vet1[i]==vet2[j] && ver[i]==0){
                anot[i]=vet1[i];
                ver[i]=1;
            }
    }
    int cont=0;
    for(i=0; i<n1; i++){
        if(anot[i]==vet1[i])
            cont++;
    }
    if(cont==n1)
        printf("sim\n");
    else
        printf("nao\n");
}