#include <stdio.h>

int main(void) 
{
    int tam = 0;
    int a = 0, b = 1, aux = 0;    
    printf("Informe um numero para calcular a seq. de Fibonacci.\n ");

    scanf("%d", &tam);
    
    int val[tam];

    printf("1 ");

    for (int i=0; i<tam; i++) {
        aux = a + b;
        a = b;
        b = aux;
        val[i] = aux;
    }

    for (int i=0; i<tam; i++) {
        printf("%d ", val[i]);
    }

  return 0;
}