#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//usado para ler int, float, double.... tb da para ler char e strings
//usadas preferencialmente em binarios

int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "rb");
    if(f == null)
    {
        return 1;
    }
    int dados[5];
    // ponteiro dos nums ; tamanho; qtd; arquivo
    if(fread(dados, sizeof(int), 5, f) != null)
    {
        printf("%d%d%d%d%d", v[0],v[2],v[3],v[4],v[5]);
    }
    else{
        printf("erro")
    }
    fclose(f);
}
// com endereco pois nao eh vetor (vetor ja passa um endereco)
int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "rb");
    if(f == null)
    {
        return 1;
    }
    int dados[5];
    float x; 
    char nome[20];
    // ponteiro dos nums ; tamanho; qtd; arquivo
    fread(dados, sizeof(int), 5, f);
    fread(&x, sizeof(float), 1, f);
    fread(nome, sizeof(char), 20, f);
    else{
        printf("erro")
    }
    fclose(f);
}

//com struct

typedef struct{
    char nome[20]; 
    int idade;
} Pessoa;

int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "rb");
    if(f == null)
    {
        return 1;
    }
    Pessoa p;
    fread(&p, sizeof(Pessoa), 1, f);
    printf("%s%d", p.nome, p.idade);
    fclose(f);
    return 0;
}