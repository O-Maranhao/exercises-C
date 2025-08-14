#include<stdio.h>
#include<string.h>

int main(){
    char string[199];
    scanf("%[^\n]", string);
    long int i, tam;
    tam=strlen(string);
    long int j, cont; // O cont serve pra contar o número de espaços
    for(i=0, cont=0; i<tam; i++){
        if(string[i]==' ')
            cont++;
    }
    cont-=1;//Numero de espaços menos o único espaço que precisa aparecer
    char saida[tam-cont]; //A Saida vai ter o tamanho da string menos os espaços que vou tirar
    for(i=0, j=0;i<tam; i++) //Loop para anotar a Saida
       if(string[i]!=' '){  //Se não é um espaço, copia para a Saida
            saida[j]=string[i];
            j++;
       } else if(string[i]==' ' && string[i+1]!=' '){ //Se é o primeiro espaço e o próximo não é um espaço, copia tbm
            saida[j]=string[i];
            j++;
       }
    for(i=0;i<tam-cont;i++)
        printf("%c", saida[i]);
    printf("\n");
    
    return 0;

}