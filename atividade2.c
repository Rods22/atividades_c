#include <stdio.h>

int main(void) 
{
    const int tamanho = 20;
    int vetor[tamanho], swap;

    for (int i=0; i<tamanho; i++) {
        printf("\nDigite o valor pra ser inserido na posição %d:  ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i=0; i<tamanho; i++) {
        for(int z=i+1; z<tamanho; z++) {
            if (vetor[z] < vetor[i]) {
                swap = vetor[i];
                vetor[i] = vetor[z];
                vetor[z] = swap;
            }
        }
    }

    printf("O valor do array em ordem crescente:[");
    for (int i=0; i<tamanho; i++) {
        printf("%d,", vetor[i]);
    }
    printf("]");
}