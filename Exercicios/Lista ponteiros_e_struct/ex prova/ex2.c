#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[20];
    float nota1, nota2; 
}Aluno;

int main()
{
    int n; 
    scanf("%d", &n);
    Aluno *alunos = (Aluno*)malloc(n * sizeof(Aluno));
    Aluno *p = alunos;
    for(int i = 0; i< n; i++)
    {
        scanf("%s%f%f", *(p).nome, p->nota1, p->nota2);    // *(p).nome == p->nome
        p++;
    }
    printf("%f", media(alunos));
    return 0;
}
float media(Aluno *a)
{
    double media = 0;
    Aluno *p = a;
    while(p != 0)
    {
        media += *p.nota1 + *p.nota2;
        p++;
    }
    return (double) media/2;
}
