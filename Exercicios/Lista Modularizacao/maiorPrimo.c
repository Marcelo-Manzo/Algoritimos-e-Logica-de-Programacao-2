#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verificarPrimo(int *n) {
    if (*n <= 1) {
        return 0; 
    }

    int cont = 0;
    for(int i = 2; i <= sqrt(*n); i++) {
        if(*n % i == 0) {
            cont++;
            break; 
        }
    }

    if(cont > 0) {
        return 0;
    }
    return 1;
}

int main() {
    int n, maiorPrimo = 0;

    scanf("%d", &n);

    while(n != 404) {
        if(verificarPrimo(&n) == 1) {
            if(n > maiorPrimo) {
                maiorPrimo = n;
            }
        }
        scanf("%d", &n);
    }

    if(maiorPrimo == 0) {
        printf("SEM PRIMOS");
    } else {
        printf("%d", maiorPrimo);
    }

    return 0;
}
