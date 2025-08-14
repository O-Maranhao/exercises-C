#include<stdio.h>

typedef struct{
    int vida;
    int ataque;
}personagem;

void luta(personagem *, personagem *); //o asterisco é pra sinalizar o ponteiro que vou botar

int main(){
    personagem a, b;
    scanf("%d%d%d%d", &a.vida, &a.ataque, &b.vida, &b.ataque);
    luta(&a, &b);
    if(a.vida>0){
        printf("Personagem 1\n");
    } else if(b.vida>0){
        printf("Personagem 2\n");
    } else
        printf("Empate\n");
}
void luta(personagem *p1, personagem *p2){
    while(p1->vida>0&&p2->vida>0){ //essa seta é tipo o . ao acessar um struct, só que usando ponteiro
        p1->vida-= p2->ataque;
        p2->vida-=p1->ataque;
    }
}