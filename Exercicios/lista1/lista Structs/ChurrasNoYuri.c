#include <stdio.h>

typedef struct {
    char nome[20];
    int validade;
} Carne;

int main() {
    int n, i, j, menor;
    Carne carnes[100];
    Carne aux;

    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%s %d", carnes[i].nome, &carnes[i].validade);
        }

        for (i = 0; i < n - 1; i++) {
            menor = i;
            for (j = i + 1; j < n; j++) {
                if (carnes[j].validade < carnes[menor].validade) {
                    menor = j;
                }
            }
            if (menor != i) {
                aux = carnes[i];
                carnes[i] = carnes[menor];
                carnes[menor] = aux;
            }
        }

        for (i = 0; i < n; i++) {
            printf("%s", carnes[i].nome);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
