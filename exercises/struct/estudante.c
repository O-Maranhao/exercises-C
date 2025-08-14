#include<stdio.h>
#include<string.h>

//STRUCT ALUNO STRUCT ALUNO STRUCT ALUNO STRUCT ALUNO STRUCT ALUNO STRUCT ALUNO STRUCT ALUNO 
typedef struct{
    char nome[51];
    float n1, n2, n3;
    float media;
}aluno;

//Funções
float med(float x, float y, float z);  // Função da Média
void bubblesort(aluno v[], int n);  //Função de Ordenação por média

//INT MAIN INT MAIN INT MAIN INT MAIN INT MAIN INT MAIN INT MAIN INT MAIN INT MAIN INT MAIN 
int main(){
    int n, i;
    scanf("%d", &n);
    aluno al[n];
    //Leitura vamo la
    for(i=0;i<n;i++){
        scanf(" %[^\n]", al[i].nome);
        scanf("%f%f%f", &al[i].n1, &al[i].n2, &al[i].n3);
        al[i].media=med(al[i].n1, al[i].n2, al[i].n3);
    }
    bubblesort(al, n);
    //Vamos ao printf
    for(i=0;i<n;i++){
        printf("%d:", i); //Indice
        printf(" %s\n", al[i].nome); //Nome
        printf("   Media: %.2f\n", al[i].media); //Media
        printf("   N1: %.2f, N2: %.2f, N3: %.2f\n", al[i].n1, al[i].n2, al[i].n3);
    }

    return 0;

}
//FUNÇÃO MEDIA FUNÇÃO MEDIA FUNÇÃO MEDIA FUNÇÃO MEDIA FUNÇÃO MEDIA FUNÇÃO MEDIA FUNÇÃO MEDIA
float med(float x, float y, float z){
    float calculo;
    calculo=(x+y+z)/3;
    return calculo;
}
void bubblesort(aluno v[], int n){
    int i, j;
    aluno aux;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if(v[j].media>v[i].media){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
