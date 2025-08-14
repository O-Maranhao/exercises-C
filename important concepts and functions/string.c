#include<stdio.h>
#include<string.h> //4 funções fodas de mais

int main(){
    char s1[30], s2[30];
    int i;
    scanf("%[^\n]s", s1);
    scanf("%[^\n]s", s2);
   
    //i=strlen(s1); // dá o tamanho da string
    i = strcmp(s1, s2);// compara elas, se forem iguais dá 0, ent testa a diferença dela?
    //strcpy(s2, s1); //vai copiar o conteúdo de S1 em S2
    //strcat(s1,s2); //Copia o ocnteúdo de s2 e coloca no final de s1
    printf("%d", i);
}
