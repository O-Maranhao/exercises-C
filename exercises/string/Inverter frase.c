#include<stdio.h>

int main(){
    char frase[101];//Quando é string, tu bota 101. 
    int i;
    scanf("%[^\n]", frase);
    for(i=0;frase[i]='\0';i++){
        if(frase[i]>='A' &&frase[i]<='Z')
            frase[i]+=32;
        else if(frase[i]>='a'&&frase[i]<='Z')
            frase[i]-=32;
    }
    printf("%s\n", frase);

}