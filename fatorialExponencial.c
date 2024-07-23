#include <stdio.h>
#include <math.h>

//funcao recursiva para calcular o fatorial exponencial de um inteiro n
int elevado (int n){
    if (n>0)
        return pow(n, elevado(n-1));
    
    else    
        return 1;
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d ", elevado(n));


    return 0;
}