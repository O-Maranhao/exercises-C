#include<stdio.h>
#include<stdlib.h>

int main(){
    int v, p, s;
    scanf("%d%d%d", &v, &p, &s);

    if(abs(v-p)<abs(v-s)){
        printf("primeiro\n");
    }
    else if(abs(v-p)>abs(v-s)){
        printf("segundo\n");
    }
    else if(abs(v-p) == abs(v-s)){
        printf("empate\n");
    }
    
}