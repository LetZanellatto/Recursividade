#include <stdio.h>


//funcao  recursiva que receba um n´umero inteiro n e calcule o somat´orio dos n´umeros entre
//0 e n 
int somatorio (int n){
    if (n>0)
        return n + somatorio(n-1);

    else
        return 0;    
}

int main (){
    int n;

    scanf("%d", &n);
    printf("%d\n", somatorio(n));

    return 0;
}