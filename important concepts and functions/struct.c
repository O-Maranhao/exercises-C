#include<stdio.h>

typedef struct{ //Estrutura que criou, você pode criar variáveis dessa estrutura chamada ALUNO
        char nome[51]; //Cada um desses itens se chama Campo ou Elemento da estrutura.
        char logradouro[51];
        int numend;
        float altura;
        float peso;
    }aluno; //Renomeamos a struct pra ela se chamar
float imc(aluno);

int main(){
    
    aluno a1; //a1 é o nome da variável, o tipo dela é struct aluno
    // **** a1.altura = 1.76;//Essa é uma variável do tipo Float, você coloca o nome da estrutura e o campo dela
    printf("Nome: ");
    scanf(" %[^\n]", a1.nome);

    printf("Logradouro: ");
    scanf(" %[^\n]", a1.logradouro);

    printf("Número: ");
    scanf(" %d", &a1.numend);

    printf("Peso: ");
    scanf(" %f", &a1.peso);
    
    printf("Altura: ");
    scanf(" %f", &a1.altura);

    float imca;
    imca=imc(a1);
    printf("%f", imca);
}

float imc(aluno a){
    float i;
    i = a.peso/a.altura*a.altura;
    return i;
}