#include <stdio.h>

// DECLARAÇÃO DO PROTÓTIPO (Avisa o compilador que a função existe)
// pode tb so deixar a func soma acima da main....
int soma(int a, int b);

int main()
{
    int a, b, resultado;
    
    scanf("%d%d", &a, &b);
    
    resultado = soma(a, b);
    
    printf("%d", resultado); // Corrigido: adicionado o ';' no final
    
    return 0; // Boa prática: indica que o programa terminou com sucesso
}

// DEFINIÇÃO DA FUNÇÃO
// <tipo de retorno>  <identificador>  (<tipo parametro> <parametro>, etc.....)
int soma(int a, int b)
{
    return a + b;
}
