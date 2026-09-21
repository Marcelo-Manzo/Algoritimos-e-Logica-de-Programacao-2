#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char sexo[2];
    int tipo; // 1 = inteira (R$40), outro = meia (R$20)
} Pessoa;

int main(void)
{
    int n, f, NUM_LISTAS = 3;
    double receitaTotal = 0, receitaFila = 0, mediaIdades = 0;
    int numeroH = 0, numeroM = 0;

    if (scanf("%d", &n) != 1) return 1;

    Pessoa *lista[NUM_LISTAS];
    for (int j = 0; j < NUM_LISTAS; j++) {
        lista[j] = calloc(n, sizeof(Pessoa));
        if (!lista[j]) return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < NUM_LISTAS; j++) {
            scanf("%d %1s %d", &lista[j][i].idade, lista[j][i].sexo, &lista[j][i].tipo);
        }
    }

    scanf("%d", &f);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < NUM_LISTAS; j++) {
            receitaTotal += (lista[j][i].tipo == 1) ? 40 : 20;

            if (lista[j][i].sexo[0] == 'M')
                numeroH++;
            else
                numeroM++;

            mediaIdades += lista[j][i].idade;
        }
    }

    mediaIdades /= (n * NUM_LISTAS);

    if (f >= 0 && f < NUM_LISTAS) {
        for (int i = 0; i < n; i++) {
            receitaFila += (lista[f][i].tipo == 1) ? 40 : 20;
        }
    }

    printf("Receita total: %.2f\n", receitaTotal);
    printf("Receita da fila %d: %.2f\n", f, receitaFila);
    printf("Homens: %d, Mulheres: %d\n", numeroH, numeroM);
    printf("Media de idades: %.2f\n", mediaIdades);

    for (int j = 0; j < NUM_LISTAS; j++) {
        free(lista[j]);
    }

    return 0;
}