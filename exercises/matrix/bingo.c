#include<stdio.h>

int main(){
    int silvio[6], i;
    for(i=0;i<6;i++) //botando aqui o nome das bolinha que a filha do silvio fala
        scanf("%d", &silvio[i]);
    int cartela[4][4]={1, 9, 13, 20, 23, 27, 30, 34, 37, 47, 55, 60, 66, 69, 87, 99};

    int j, k, cont=0; //São contadores
    for(k=0;k<6;k++)//Números que o Silvio Santos fala, vou comparar
        for(i=0; i<4;i++) //Linhas
            for(j=0;j<4;j++) //Colunas
                if(cartela[i][j]==silvio[k]){
                    cont++;
                }
    printf("%d\n", cont);
}   