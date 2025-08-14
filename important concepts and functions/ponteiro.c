#include<stdio.h>

void troca(int *, int *);

int main(){
    int *p, a; //p é um ponteiro, ele é um endereço de memória
    p = &a; //p vai receber o endereço de memória de a, p está apontando para a;
    printf("%p\n", p);
    /*a=10;
    printf("%p", p); // isso não muda o endereço de a
    a=0;
    *p=20; //a variável para qual p está apontando vai se tornar 20.
    printf("%d", a);
    */
   int n1, n2, *p1, *p2;
   p1 = &n1;
   p2 = &n2;
   scanf("%d%d", &n1, &n2);
   troca(p1, p2);
   printf("%d\n%d", n1, n2);
    return 0;
}

void troca(int *a, int *b){
    int aux=*a;
    *a=*b; //Asterisco significa "variável para qual 'a' aponta"
    *b=aux;
}