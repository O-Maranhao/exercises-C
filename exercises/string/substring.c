#include<stdio.h>

int main(){
    char string[99];
    scanf("%[^\n]", string);
    int i, n;
    scanf("%d%d", &i, &n); //N é quantidade de caracteres

    char substring[n]; //Saida é a substring que o programa

    int cont; // O cont serve pra  começar a string saida do 0, o j é o leitor
    for(cont=0; cont<n; i++, cont++){
        substring[cont]=string[i];
    }
    printf("%s\n", substring);
    return 0;
}