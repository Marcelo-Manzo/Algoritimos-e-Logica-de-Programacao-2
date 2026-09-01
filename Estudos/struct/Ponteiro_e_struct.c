typedef struct{
    char nome[50];
    int idade;
    float altura;
}Pessoa;
int main()
{
    // Criando uma variável do tipo 'struct Pessoa'
    Pessoa p1;
    int *p;
    p = (Pessoa*)calloc(1,sizeof(Pessoa));
    p = &p1;

    // Atribuindo valores aos campos usando o operador de ponto (.)
    strcpy(p1.nome, "Ana");
    p1.idade = 28;
    p1.altura = 1.65;

    // Acessando os dados
    printf("Nome: %s, Idade: %d\n", p1.nome, p1.idade);

    return 0;
}