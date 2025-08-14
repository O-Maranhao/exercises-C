#include<stdio.h>

int main(){
    char entrada[101];
    int i, tam=0;
    scanf("%[^\n]", entrada);
    //Tamanho da String de Saída
    for(i=0;entrada[i]!='\0';i++)
        tam++;
    //Criando uma string invertida
    for(i=tam-1;i>=0;i--){ //Tam menos 1, vai até o zero, e o I vai decrescendo
        printf("%c", entrada[i]);
    }
    printf("\n");

    return 0;
    
}