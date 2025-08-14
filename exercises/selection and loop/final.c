#include<stdio.h>
#include<math.h>

int main(){

    int n1, n2, nf, m1, m2;

    scanf("%d%d%d", &n1, &n2, &nf);

    m1=(n1+n2)/2;
    m2=(m1+nf)/2;
   
    //APROVADO DE UM JEITO OU DE OUTRO
    if(m1>=7){
        printf("aprovado\n");
    }
    else if((m1<7)&&(m1>4)){
        if(m2>=5){
            printf("aprovado na final\n");
        }
        //REPROVADO
        if(m2<5){
            printf("reprovado na final\n");
        }
    }
    else if(m1<4){
        printf("reprovado\n");
    }
}