#include<stdio.h>

int main() {

    float a, b;
    scanf("%f%f", &a, &b);

    float resultado;
    resultado = (a+b)/2;

    printf("%.1f\n", resultado); /*Para exibir um número de ponto flutuante do tipo float com apenas uma casa
     decimal em C, use o especificador de formato %.1f na função printf. 
     O número 1 após o ponto indica o número de casas decimais a serem exibidas.*/

}