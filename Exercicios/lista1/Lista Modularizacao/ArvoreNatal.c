#include <stdio.h>

void mostrarPico(int n) { 
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < 2 * n; j++) { 
            // Começa com 2 caracteres no centro (n e n+1) e expande 1 para cada lado por linha
            if(j >= (n - i - 1) && j <= (n + i)) { 
                printf("X"); 
            } else { 
                printf(" "); 
            } 
        } 
        printf("\n"); 
    } 
}

void mostrarBase(int n) { 
    // Mantém a base com a mesma largura do topo (2 caracteres)
    for(int i = 0; i < n / 2; i++) { 
        for(int j = 0; j < 2 * n; j++) { 
            if(j >= n-1 && j <= (n)) { 
                printf("X"); 
            } else { 
                printf(" "); 
            } 
        } 
        printf("\n"); 
    } 
}

int main() { 
    int n; 
    if (scanf("%d", &n) != 1) return 1;
    
    mostrarPico(n); 
    mostrarBase(n); 
    
    return 0; 
}
