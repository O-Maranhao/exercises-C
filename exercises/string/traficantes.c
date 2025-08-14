#include <stdio.h>

int tss(char str[], char subs[], int pos);

int tamstring(char str[]);

int main(){
    char texto[101], palavra[21], subs[21], saida[101];
    scanf("%[^\n] %s%s", texto, palavra, subs);
    int j=0;
    int ta;
    for(int i=0; texto[i]!='\0'; i++){
        if(texto[i]==palavra[0])
            ta = tss(texto, palavra, i);
        if(!ta || texto[i]!=palavra[0]){
            saida[j]=texto[i];
            j++;
        }
        else{
            for(int k=0; subs[k]!='\0'; k++){
                saida[j]=subs[k];
                j++;
            }
            i+=tamstring(palavra)-1;
        }
    }
    saida[j]='\0';
    printf("%s", saida);
}

int tss(char str[], char subs[], int pos){
    int sim=1;
    int i;
    for(i=0; subs[i]!='\0'; i++){
        if(str[pos+i]!=subs[i])
            sim=0;
    }
    return sim;
}

int tamstring(char str[]){
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}


