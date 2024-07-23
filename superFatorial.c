#include <stdio.h>

//funcao recursiva que receba um n´umer inteiro n e calcule seu superfatorial (sf), onde o
//superfatorial de n eh o produtos dos n primeiros fatoriais. 

int fatorial (int n){
    if (n>0)
        return n*fatorial(n-1);

    else
        return 1;
}

int super_fatorial (int n){
    if (n>1)
        return fatorial(n)*super_fatorial(n-1);

    else    
        return 1;
}

int main (){

    printf("%d", super_fatorial(5));

    return 0;
}