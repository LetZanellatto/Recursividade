#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
//um algoritmo recursivo que inverta a ordem dos elementos de um vetor.
 void invete (int *n, int a, int b){
    printf("%d %d\n", a, b);
    if (a >= b)
        return ;

    else {
        troca(&n[a], &n[b]);
        invete(n, a+1, b-1);
    }
}

int main (){
    int *n, aux;
    int a, b;

    scanf("%d", &aux);
    n = (int*)malloc(aux*sizeof(int));

    for (int i = 0; i<aux; i++)
        n[i] = i+1;

    a = 0;
    b = aux-1;

    invete(n, a, b);

    for (int i = 0; i<aux; i++)
        printf("%d ", n[i]);

    free(n); 
    n = NULL;   

    return 0;   
}