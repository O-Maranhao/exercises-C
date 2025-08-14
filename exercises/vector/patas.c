#include<stdio.h>
#include<stdlib.h>
int main(){
    int b, c, qtd, i, patas;
    scanf("%d %d %d",  &b, &c, &qtd);
    char p[qtd];
    
    patas=0;
    
    for(i=0;i<=qtd-1;i++){
        scanf("%c \n", &p[i]);
         if(p[i]=='g')
            patas+=2;
        else 
            patas+=4;
    }
    
    printf("%d\n", patas);
    if(abs(patas-b)==abs(patas-c)){
        printf("empate\n");
    }else if(abs(patas-b)<abs(patas-c)){
        printf("Chico Bento\n");
    }else if(abs(patas-b)>abs(patas-c)){
        printf("Cebolinha\n");
    }
    else{
        printf("deu errado aqui\n");
    }
}