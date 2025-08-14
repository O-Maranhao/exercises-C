#include <stdio.h>
#include <string.h>

int main() {
    char str[99];
    scanf("%s", str);

    int i, tam = strlen(str);
    for (i = 0; i < tam / 2; i++){
        // Troca os caracteres
        char troc = str[i];
        str[i] = str[tam - i - 1];
        str[tam - i - 1] = troc;
    }

    printf("%s\n", str);

    return 0;
}
