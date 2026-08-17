#include <stdio.h>
int main(){
    char entradas[8][8];
    ['b','o','l','i','b','h','e'

      'c', 'i', 'n', 'e', 'm', 'a']
    entradas[0] retornaria: "boliche";
    int cinema = 0, boliche = 0, i=0, j = 0;; 
    while(entradas[i] != "\0")
    {
        while(entradas[i][j] != "\0"){
            if(entradas[i][j] > 97 && entradas[i][j] < 122){
                entradas[i][j] -= 32;
            }
            j++;
        }
        if(strcmp(entradas[i], "cinema") == "\0")
        {
            cinema++;
        }
        else{
            boliche++;
        }
    }
}