#include<stdio.h>

int main(){
    char str[101];
    int i;
    scanf("%[^\n]", str);
    for(i=0;str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){ //Ele é maiúsculo 
            str[i]+=32;
            printf("%c", str[i]);
        }else if(str[i]>='a' && str[i]<='z'){ //Ele é minúsculo
            str[i]-=32;
            printf("%c", str[i]);
        }
    }
    printf("\n");
    printf("%s\n", str);

}