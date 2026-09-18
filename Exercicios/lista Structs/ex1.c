typedef struct{
    char prontuario[50];
    char nome[50];
    char curso[50];
    char data[20];
}Aluno;

typedef struct{
    char fabricante[50];
    char modelo[20];
    char cor[20];
    int anoF;
}Veiculo;

int main() {
    Aluno alunos[1] = {
        {
            .prontuario = "SL3067459", 
            .nome = "Marcelo", 
            .curso = "BCC", 
            .data = "13/09/2006"
        }
    };

    Veiculo veiculos[1] = {
        {
            .fabricante = "Ford", 
            .modelo = "Fiesta", 
            .cor = "branco", 
            .anoF = 2016
        }
    };

    return 0;
}
