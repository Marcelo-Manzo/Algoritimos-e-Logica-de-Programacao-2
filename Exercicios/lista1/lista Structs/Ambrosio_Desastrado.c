#include <stdio.h>

#define TAM_MAX 20

typedef struct {
    int posicao;
    char caractere;
} Mensagem;

int main() {

    char frase[TAM_MAX + 1] = {0}; 
    Mensagem m;
    int total_mensagens, i;
    if (scanf("%d", &total_mensagens) != 1) {
        return 1;
    }

    for (i = 0; i < total_mensagens; i++) {
        if (scanf("%d %c", &m.posicao, &m.caractere) == 2) {
            if (m.posicao >= 1 && m.posicao <= TAM_MAX) {
                frase[m.posicao - 1] = m.caractere;
            }
        }
    }
    for (i = 0; i < TAM_MAX; i++) {
        if (frase[i] == '\0') {
            frase[i] = ' ';
        }
    }
    frase[TAM_MAX] = '\0';

    printf("%s\n", frase);

    return 0;
}
