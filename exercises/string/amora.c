#include<stdio.h>
#include<string.h>

int main(){
    int i, cont;
    char frase[101], trecho[21];
    scanf("%[^\n]s %[^\n]s", frase, trecho);
    cont = 0;
    for(i = 0; frase[i]!= ' /0' ; i++){
        if(frase[i]==trecho[0]){
            
            int j;
            for(j=0; j<strlen(trecho) && frase[i+j]==trecho[j]; j++);
                if(j==strlen(trecho))
                    cont++;
     }
    }
    printf("%d\n", cont);
}