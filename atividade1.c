#include <stdio.h>

int main(void) 
{
    const int tamanho = 10;
    double numeros[tamanho];

    for (int i=0; i<tamanho; i++) {
        printf("Digite um número: ");
        scanf("%lf", &numeros[i]);
    }

    for (int i=0; i<tamanho; i++) {
        printf("valor do vetor ao quadrado: %f\n", numeros[i]*numeros[i]);
    }
}