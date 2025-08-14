#include<stdio.h>
#include<string.h>

int main(){
    char frase[99], vogais[99], consoantes[99],  sons[5]={'a','e','i','o','u'};
    //ENTRADA
    scanf("%[^\n]", frase);
    //Bora definir as variáveis e o tamanho
    int i, j, tam, v=0, c=0;
    tam=strlen(frase);

    //ANÁLISE
    for(i=0;i<tam;i++){
        if(frase[i]!=' ')
            for(j=0;j<5;j++){ //ANALISANDO PRA VER SE É VOGAL
                if(frase[i]==sons[j]){
                    vogais[v]=frase[i];
                    v++;
                    break;
                }else if(frase[i]!=sons[j] && j==4){  //AGORA SE FOR CONSOANTE
                    consoantes[c]=frase[i];
                    c++;
                    break;
                }
            }
    }

    //PRINTF PORRA
    for(i=0;i<v;i++)
        printf("%c", vogais[i]);
    printf("\n");
    printf("%s\n", consoantes);

    return 0;
}