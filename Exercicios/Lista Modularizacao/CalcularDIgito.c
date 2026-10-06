#include <stdio.h>
#include <string.h>

static int maior_do_bloco(const char *chave, int inicio) {
    char m = chave[inicio];
    if (chave[inicio + 1] > m) m = chave[inicio + 1];
    if (chave[inicio + 2] > m) m = chave[inicio + 2];
    return m - '0';
}

static char calcular_digito(const char *chave) {
    int soma = maior_do_bloco(chave, 0)
             + maior_do_bloco(chave, 4)
             + maior_do_bloco(chave, 8);
    return '0' + soma % 10;
}

static int validar_digito(const char *chave) {
    return chave[12] == calcular_digito(chave);
}

int main(void) {
    char chave[16];

    while (scanf("%15s", chave) == 1 && strcmp(chave, "FIM") != 0) {
        puts(validar_digito(chave) ? "VALIDO" : "INVALIDO");
    }
    return 0;
}