#include<stdio.h>

int main(){
    //LEMBRA DE USAR A TABELA ASCII
    int soma;
    scanf("%d", &soma);
    if(soma){
        soma%=26;
        if(!soma)
        soma =26;
    soma += 'a'-1;
    printf("%c\n", soma);
    }
    else
    printf("joguem de novo\n");
}