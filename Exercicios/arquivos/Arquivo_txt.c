#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt","r")  //le arquivo txt
    if(f == null)
    {
        return 1;
    }
    fclose(f);
}
int main(){
    FILE *f;
    f = fopen("arquivo.txt","w")  //escreve em arquivo txt
    if(f == null)
    {
        return 1;
    }
    fclose(f);
}

int main(){
    FILE *f;
    f = fopen("arquivo.txt","a")  //adiciona em arquivo txt
    if(f == null)
    {
        return 1;
    }
    fclose(f);
}