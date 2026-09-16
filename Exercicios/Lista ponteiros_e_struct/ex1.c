#include <stdio.h>
#include <stdlib.h> // 1. Necessário para calloc e free

typedef struct {
    int id, idade;
    double salario;
} Funcionario;

int main() {
    int n, i;
    int indice_maior_salario = 0; 
    double maior_salario = -1.0; // 2. Mudou para double e valor inicial baixo
    int indice_menor_idade = 0; 
    int menor_idade = 1000;

    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    // 3. Ponteiro do tipo correto e sintaxe do calloc ajustada
    Funcionario *funcionarios = (Funcionario*) calloc(n, sizeof(Funcionario));
    if (funcionarios == NULL) return 1; // Boa prática: checar se a memória foi alocada

    for(i = 0; i < n; i++) {
        // 4. Especificador %lf para double no scanf
        scanf("%d %d %lf", &funcionarios[i].id, &funcionarios[i].idade, &funcionarios[i].salario);

        if(funcionarios[i].salario > maior_salario) {
            maior_salario = funcionarios[i].salario;
            indice_maior_salario = i;
        }

        if(funcionarios[i].idade < menor_idade) {
            menor_idade = funcionarios[i].idade;
            indice_menor_idade = i;
        }
    }

    // 5. Especificador %.2f para double no printf e ajustes de quebra de linha
    printf("Maior Salario registrado\n");
    printf("ID: %d\n", funcionarios[indice_maior_salario].id);
    printf("Idade: %d\n", funcionarios[indice_maior_salario].idade);
    printf("Salario: %.2f\n\n", funcionarios[indice_maior_salario].salario);

    printf("Menor idade registrada\n");
    printf("ID: %d\n", funcionarios[indice_menor_idade].id);
    printf("Idade: %d\n", funcionarios[indice_menor_idade].idade);
    printf("Salario: %.2f\n", funcionarios[indice_menor_idade].salario);

    free(funcionarios);
    return 0;
}
