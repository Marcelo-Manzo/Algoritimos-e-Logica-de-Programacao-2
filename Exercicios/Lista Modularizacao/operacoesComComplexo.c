#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int a; // Parte Real
    int b; // Parte Imaginária
} Complexo;

Complexo soma(Complexo *a, Complexo *b) {
    Complexo resultado;
    resultado.a = a->a + b->a;
    resultado.b = a->b + b->b;
    return resultado;
}

Complexo multiplicar(Complexo *a, Complexo *b) {
    Complexo resultado;
    resultado.a = (a->a * b->a) - (a->b * b->b);
    resultado.b = (a->a * b->b) + (a->b * b->a);
    return resultado;
}

void imprimir(Complexo n)
{
    printf("%d %di", n.a, n.b);
}

int main() {
    Complexo a, b;

    scanf("%d %d", &a.a, &a.b);
    scanf("%d %d", &b.a, &b.b);

    Complexo resultadoSoma = soma(&a, &b);
    Complexo resultadoMult = multiplicar(&a, &b);

    imprimir(resultadoSoma);
    imprimir(resultadoMult);

    return 0;
}

