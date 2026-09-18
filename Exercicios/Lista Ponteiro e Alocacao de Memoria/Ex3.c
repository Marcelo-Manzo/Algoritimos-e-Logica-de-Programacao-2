#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *p, maior, menor;
    
    scanf("%d", &n);
    
    p = (int *)calloc(n, sizeof(int));
    
    if (p == NULL) {
        return 1;
    }

    for(int x = 0; x < n; x++) {
        scanf("%d", &p[x]);
    }
    
    menor = p[0];
    maior = p[0];
    
    for(int i = 0; i < n; i++) {
        if(p[i] > maior) {
            maior = p[i];
        }
        if(p[i] < menor) {
            menor = p[i];
        }
    }
    
    printf("%d\n%d\n", menor, maior);
    free(p);
    
    return 0;
}
