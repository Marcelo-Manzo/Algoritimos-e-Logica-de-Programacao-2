#include <stdio.h>
#include <string.h>

int main() {
    int k, i = 0;
    char texto[31], textoOriginal[31];

    scanf("%30[^\n]%*c", texto);
    scanf("%d", &k);

    strcpy(textoOriginal, texto);

    while (texto[i] != '\0') {
        texto[i] += k;
        if(texto[i]>65 && texto[i] < 90)
        {
            texto[i]+=32;
        }
        i++;
    }

    printf("%s\n%s\n", textoOriginal, texto);

    return 0;
}
