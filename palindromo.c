#include <stdio.h>
#include <string.h>
#define MAX 100


//um algoritmo recursivo que dada uma cadeia de caracteres str, decida se str eh palındrome ou nao
int palindromo (char str[], int tam, int comeco){
    if (tam == comeco || tam == comeco+1)
         return 1;
    
    else 
        if (str[comeco] != str[tam])
            return 0;

    return palindromo(str, tam-1, comeco+1); 

}

int main (){
    char str[MAX];
    int tam, comeco;

    
    scanf("%s", str);
    tam = strlen(str)-1;
    comeco = 0;

    if (palindromo(str, tam, comeco))
        printf("eh palindromo\n");
    else
        printf("nao eh palindromo");
    
    return 0;
}