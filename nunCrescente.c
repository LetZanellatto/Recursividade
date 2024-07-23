#include <stdio.h>

//funcao recursiva que receba um n´umero inteiro n e imprima todos os inteiros entre 0 e n
//em ordem crescente
void crescente (int n){
    if (n==0) 
        printf("%d ", n);

    else {
        crescente(n-1);
        printf("%d ", n);
    }
}

int main (){
    int n;
    
    crescente(5);

    return 0;
}