#include <stdio.h>

//funcao recursiva que receba um n´umero inteiro n e imprima todos os inteiros entre 0 e n
//em ordem decrescente
void decrescente (int n){
    if (n > 0){
        printf("%d ", n);
        decrescente(n-1);  
    }    
    
    else{
        printf("%d ", n);
    }   
}

int main (){
    int n;

    scanf("%d", &n);
    decrescente(n);

    return 0;
}