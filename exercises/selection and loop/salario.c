#include<stdio.h>
#include<math.h>

int main(){
    float s, a;
    scanf("%f", &s);

    if(s<=1000){
        a = (s*1.20);
        printf("%.2f\n", a);
    }
    else if((s<=1500)&&(1000<s)){
        a = (s*1.15);
        printf("%.2f\n", a);
    }
    else if((s<=2000)&&(1500<s)){
        a = (s*1.10);
        printf("%.2f\n", a);
    }
    else if(s>=2000){
        a = (s*1.05);
        printf("%.2f\n", a);
    }

}