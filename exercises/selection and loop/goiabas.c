#include<stdio.h>
#include<math.h>

int main(){
    int c, b, g, m, f, min;
    
    scanf("%d%d%d%d", &c, &b, &g, &m);
    f=(b+g+m);

    if(f%c!=0){
        min=(f/c)+1;
    }
    else{
        min=(f/c);
    }
    printf("%d\n", min);
}
