#include <stdio.h>

int contarepetidos(int v[], int qtd)
{
    // { 1, 2, 3, 4, 5, 3, 6, 7, 2, 8 }
    int total = 0;
    for(int i=0; i<qtd-1; i++) {
        int repet = 0;
        for(int j=i+1; j<qtd; j++) {
            if(v[i] == v[j]) {
                // conta quantas vezes o número
                // é encontrado
                repet++;                
            }
        }
        // Se encontrei exatamente um repetido,
        // conta esse número
        if(repet == 1) {
            total++;
        }
    }
    return total;
}

int main()
{
    int vet[10] = {1,2,3,2,5,3,6,3,3,8};
    int qtdrepet = contarepetidos(vet, 10);
    printf("Total de repetidos: %d\n",
        qtdrepet);
}