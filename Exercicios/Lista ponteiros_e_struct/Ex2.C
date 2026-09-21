#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char nome[20];
} Aluno;

int main() {
    int n, indice_menor = 0, indice_maior = 0;
    
    if (scanf("%d", &n) != 1) return 0;
    
    Aluno *alunos = (Aluno*) calloc(n, sizeof(Aluno));
    Aluno *alunos_menores = (Aluno*) calloc(n, sizeof(Aluno));
    Aluno *alunos_maiores = (Aluno*) calloc(n, sizeof(Aluno));
    
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%d", &alunos[i].idade);
        
        if (alunos[i].idade < 14) {
            strcpy(alunos_menores[indice_menor].nome, alunos[i].nome);
            alunos_menores[indice_menor].idade = alunos[i].idade;
            indice_menor++;
        } else {
            strcpy(alunos_maiores[indice_maior].nome, alunos[i].nome);
            alunos_maiores[indice_maior].idade = alunos[i].idade;
            indice_maior++;
        }
    }
    
    for (int i = 0; i < indice_menor; i++) {
        printf("%s\n%d\n", alunos_menores[i].nome, alunos_menores[i].idade);
    }
    
    for (int i = 0; i < indice_maior; i++) {
        printf("%s\n%d\n", alunos_maiores[i].nome, alunos_maiores[i].idade);
    }
    
    free(alunos);
    free(alunos_menores);
    free(alunos_maiores);
    
    return 0;
}
