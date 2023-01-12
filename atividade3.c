#include <stdio.h>

int main(void)
{
    const int tamanho = 20;
    int numeros[tamanho];
    int qtdPar = 0;
    int qtdImpar = 0;

    for (int i=0; i<tamanho; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for (int i=0; i<tamanho; i++) {
        if (numeros[i] % 2 == 0) {
            qtdPar++;
        } else {
            qtdImpar++;
        }
    }

    printf("Quantidade Par: %d\n", qtdPar);
    printf("Quantidade Impar: %d", qtdImpar);
}