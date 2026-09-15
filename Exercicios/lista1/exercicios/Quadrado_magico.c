#include <stdio.h>
int main()
{
    int matriz[3][3], i, j, coluna = 0, linha = 0,n=0, diagonal = 0, d_secundaria = 0, achou = 1;

    for(i = 0; i<3; i++)
    {
        for(j = 0; j < 3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i<3; i++){
        diagonal += matriz[i][i]; d_secundaria += matriz[i][3-i-1];
    }
    n = diagonal;
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            linha += matriz[i][j];
            coluna += matriz[j][i];
        }
        if(linha != n ){
            achou = 0;
        }
        if(coluna != n)
        {
            achou = 0;
        }
        linha = 0;
        coluna = 0;
    }
    if(d_secundaria != n){
        achou = 0;
    }

    if(achou == 1){
        printf("E uma matriz quadrado magico\n");
    }else{
        printf("Nao e uma matriz quadrado magico\n");
    }

}