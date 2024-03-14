#include <stdio.h>

void exibe(const int vetor[], int tam)
{
    // vetor[0] = -1;
    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

void incrementa(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
        vetor[i]++;
}

int maior(const int vetor[], int tam)
{
    int m = vetor[0];
    int i;
    for (i = 1; i < tam; i++)
        if (vetor[i] > m)
            m = vetor[i];
    return m;
}

int main()
{
    int numeros[10] = {5, 7, 80, 12, 30, 9, 4, 1, 10, 3};
    int valMaior = maior(numeros, 10);
    exibe(numeros, 10);
    printf("Maior: %d\n", valMaior);
    incrementa(numeros, 10);
    exibe(numeros, 10);
}