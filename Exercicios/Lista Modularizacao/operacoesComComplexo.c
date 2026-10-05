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

int main() {
    Complexo a, b;

    scanf("%d %d", &a.a, &a.b);
    scanf("%d %d", &b.a, &b.b);

    Complexo resultadoSoma = soma(&a, &b);
    Complexo resultadoMult = multiplicar(&a, &b);

    printf("Soma: %d + %di\n", resultadoSoma.a, resultadoSoma.b);
    printf("Multiplicacao: %d + %di\n", resultadoMult.a, resultadoMult.b);

    return 0;
}
