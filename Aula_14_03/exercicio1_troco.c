#include <stdio.h>

void troco(int valor, int *notas100,
           int *notas50, int *notas10,
           int *notas5, int *notas1)
{
    *notas100 = valor / 100;
    *notas50 = valor % 100 / 50;
    *notas10 = valor % 100 % 50 / 10;
    *notas5 = valor % 100 % 50 % 10 / 5;
    *notas1 = valor % 100 % 50 % 10 % 5 / 1;
}

int main()
{
    int valor;
    int n100, n50, n10, n5, n1;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    troco(valor, &n100, &n50, &n10, &n5, &n1);
    printf("%d nota(s) de 100\n", n100);
    printf("%d nota(s) de 50\n", n50);
    printf("%d nota(s) de 10\n", n10);
    printf("%d nota(s) de 5\n", n5);
    printf("%d nota(s) de 1\n", n1);
}