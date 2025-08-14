#include<stdio.h>
#include<stdlib.h>

int main(){
    //malloc //Memory Allocation, vai alocar um certo número de bytes na memória e vai devolver um ponteiro pra void
    int *p, i;
    if(!(p = malloc(10*sizeof(int)))){
        printf("Falha na alocação de Memoria");
        exit(1);
    } // p = malloc(10*sizeof(int)) //P tá apontando para um endereço de memória que possui 40 bytes, acabamos de declarar um vetor.

    for(i=0;i<10;i++){
        p[i]=i+1;
    }
    free(p);

    return 0;
}