struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
int main()
{
    // Criando uma variável do tipo 'struct Pessoa'
    struct Pessoa p1;

    // Atribuindo valores aos campos usando o operador de ponto (.)
    strcpy(p1.nome, "Ana");
    p1.idade = 28;
    p1.altura = 1.65;

    // Acessando os dados
    printf("Nome: %s, Idade: %d\n", p1.nome, p1.idade);

    return 0;
}

//ou 

typedef struct{
    char nome[50];
    int idade;
    double codigo;
}Animal;

int main()
{
    Animal a1;
    strcpy(a1.nome, "Pinto");
    a1.idade = 23;
    a1.codigo = 23123131;
}