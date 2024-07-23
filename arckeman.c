#include <stdio.h>

int ackerman(int m, int n){
    if (m == 0)
        return n+1;
    
    else 
        if (m > 0 && n == 0)
        return  ackerman(m-1, 1);

    else
        if (m > 0 && n > 0)
            return ackerman(m-1, ackerman(m, n-1));
}

int main (){
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", ackerman(m, n));

    return 0;
}