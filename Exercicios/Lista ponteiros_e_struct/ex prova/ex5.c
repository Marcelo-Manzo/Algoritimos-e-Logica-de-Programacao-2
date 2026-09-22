#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
}Pessoa;

typedef struct 
{
    int qtd;
    Pessoa *alunos;
}Turma;

void criarTurma(Turma *t, int n)
{
    t->alunos = (Pessoa*)calloc(n, sizeof(Pessoa));
    t->qtd = n;
    for(int i = 0; i<n; i++)
    {
        scanf("%s%d", t->alunos[i].nome, &t->alunos[i].idade);
    }
    free(&t->alunos);
}
void imprimirTurma(Turma *t)
{
    printf("qtd: %d", t->qtd);
    for(int i = 0; i<t->qtd; i++)
    {
        printf("Nome: %s", t->alunos[i].nome);
        printf("idade: %d", t->alunos[i].idade);
    }
}
int main()
{
    Turma minhaTurma;
    Turma *p = &minhaTurma;
    int n;
    scanf("%d", &n);
    criarTurma(p, n);
    imprimirTurma(p);
    return 0;
}
