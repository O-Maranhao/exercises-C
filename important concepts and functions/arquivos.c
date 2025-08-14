#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){ //argc mostra quantos argumentos tem a chamada do programa
    FILE *pa; //para abrir, c usa fopen
    char ch;

    if(argc!=2){
        printf("Voce esqueceu de digitar o nome do arquivo.\n");
        exit(1);
    }
    if((pa = fopen(argv[1], "r+"))==NULL){ //r+ abre um arquivo e permite que você escreva, null significa que não deu, se o arquivo não abriu, ele envia "arquivo não pode ser aberto"
        printf("arquivo não pode ser aberto\n");
        exit(1);
    }
    do{
        ch = gethcat(); //scanf(" %c", &ch); 
        putc( ch, pa); //colocando ch em pa
    }while(ch!='$');
    fclose(pa);
}