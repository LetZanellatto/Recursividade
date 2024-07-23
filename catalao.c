#include <stdio.h>

//funcao recursiva para calcular o n-esimo numero catalao
int catalao (int n){
    if (n>0)
        return (2*(2*n-1)/n+1)*catalao(n-1);
    else 
        return 1;  
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d", catalao(n));

    return 0;
}