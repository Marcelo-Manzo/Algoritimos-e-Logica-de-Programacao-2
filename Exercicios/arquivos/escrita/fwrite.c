#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//usado para colocar int, float, double.... tb da para colocar char e strings
//usadas preferencialmente em binarios

int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "wb");
    if(f == null)
    {
        return 1;
    }
    int nums[5] = {1,2,3,4,5}
    // ponteiro dos nums ; tamanho; qtd; arquivo
    fwrite(nums, sizeof(int), 5, f);
    fclose(f);

}