#include<stdio.h>
#include<math.h>

int main(){

    float n1, n2, n3, t, s, mf;
  
    scanf("%f%f%f%f", &n1, &n2, &n3, &t);
    s = n1+n2+n3;
    if((n1<=n2)&&(n1<=n3)){
        s -= n1;
    }
    else if((n2<=n1)&&(n2<=n3)){
        s -= n2;
    }
    else if((n3<=n1)&&(n3<=n2)){
        s -= n3;
    }
    mf=(s+t)/3;
    //APROVADO DE UM JEITO OU DE OUTRO
    if(mf>=7){
        printf("Aprovado com %.1f\n", mf);
    }
    else if(mf<7){
        printf("Final com %.1f\n", mf);
    }
}