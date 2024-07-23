#include <stdio.h>

//uma funcao recursiva que receba um numero inteiro n e calcule a soma dos dıgitos de n
int somaDig (int n){
    int resto, numDiv;
    if (n<10)
        return n;

    else {
        resto = n%10;
        numDiv = n/10;
        return resto + somaDig(numDiv);
    }     
}

int main (){
    int n;

    scanf("%d", &n);
    printf("%d\n", somaDig(n));

    return 0;
}