#include<stdio.h>

int main(){
    int i, j, total, n, fig;
    scanf("%d%d", &total, &n);
    int album[51]={0};

    // Figurinhas Repetidas
    fig=0;
    for(i=0; i<n; i++){
        scanf("%d", &fig);
        album[fig]++;
    }

    int rept=0, falta=0;
    int printed = 0;
    for(i=1; i<=total; i++) {
        if(album[i] > 1) {
            for(j=1; j<album[i]; j++) {
                if (printed) printf(" ");
                printf("%d", i);
                printed = 1;
                rept = 1;
            }
        }
    }
    if(!rept) printf("N");
    printf("\n");

    printed = 0;
    // Faltando
    for(i=1; i<=total; i++) {
        if(album[i]==0){
            if (printed) printf(" ");
            printf("%d", i);
            printed = 1;
            falta = 1;
        }
    }
    if(!falta) printf("N");
    printf("\n");

    return 0;
}