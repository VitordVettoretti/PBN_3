#include <stdio.h>

void quadrado(); // protótipo

void quadrado() // sem valor de retorno/parâmetros de entrada
{               // corpo da função}
    int k;
    for (k = 1; k <= 10; k++)
        printf("%d\n", k * k);
}

int main()
{
    quadrado(); // chamada da função
}