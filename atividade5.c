#include <stdio.h>

int main (void)
{
    const int tamanho = 10;
    int numeros[tamanho];
    int indice[2];
    int menor, maior;

    for (int i=0; i<tamanho; i++) {
        printf("Digite o número da posição %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for (int i=0; i<tamanho; i++) {
        if (i == 0) {
            menor = maior = numeros[i];
            indice[0] = indice[1] = i;

        } else if (numeros[i] < menor) {
            menor = numeros[i];
            indice[0] = i;

        } else if (numeros[i] > maior) {
            maior = numeros[i];
            indice[1] = i;
        }
    }

    printf("O menor valor foi |%d| e ficou na posição |%d|\n", menor, indice[0]);
    printf("O maior valor foi |%d| e ficou na posição |%d|", maior, indice[1]);
}