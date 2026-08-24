#include <stdio.h>
#include <string.h>

int main() {
    int n, continuar_leitura = 1;;
    scanf("%d", &n);

    // Dicionário com tamanho máximo de 50 letras por palavra
    char palavrasIngles[n][50], setas[n][50],traducao[n][50], frase[500];

    // 1. Lendo o dicionário
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", palavrasIngles[i], setas[i], traducao[i]);
    }

    // 2. Lendo a frase inteira até o "Enter" e enquanto não for digitado "*"
    while (continuar_leitura && scanf(" %[^\n]", frase) == 1) {
        
        // Se a frase for apenas o asterisco, altera a variável para encerrar o programa
        if (strcmp(frase, "*") == 0) {
            continuar_leitura = 0;
        } 
        else {
            char palavraAtual[50];
            int tamanho_palavra = 0;
            int tam_frase = strlen(frase);

            for (int j = 0; j <= tam_frase; j++) {
                
                if (frase[j] == ' ' || frase[j] == '\0') {
                    
                    if (tamanho_palavra > 0) {
                        palavraAtual[tamanho_palavra] = '\0';

                        int achou = 0;
                        // Substituído o break adicionando !achou na condição do for
                        for (int z = 0; z < n && !achou; z++) {
                            if (strcmp(palavraAtual, palavrasIngles[z]) == 0) {
                                printf("%s", traducao[z]);
                                achou = 1;
                            }
                        }
                        if (!achou) {
                            printf("%s", palavraAtual);
                        }
                        // Se nao for o ultimo caractere da frase, imprime o espaco
                        if (frase[j] == ' ') {
                            printf(" ");
                        }
                        tamanho_palavra = 0; // Reinicia para a próxima palavra
                    }
                } 
                // Se for um caractere normal
                else {
                    palavraAtual[tamanho_palavra] = frase[j];
                    tamanho_palavra++;
                }
            }
            printf("\n"); 
        }
    }

    return 0;
}
