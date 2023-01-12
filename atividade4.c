#include <stdio.h>

int main(void) 
{
    const int tamanho = 30;
    int medias[tamanho];
    int qtdAcimaMedia = 0;
    double mediaTurma = 0;

    for (int i=0; i<tamanho; i++) {
        printf("Digite o valor da media %d: ", i);
        scanf("%d", &medias[i]);
    }

    for (int i=0; i<tamanho; i++) {
        mediaTurma += medias[i];
        
        if (medias[i] > 60) {
            qtdAcimaMedia++;
        }
    }

    mediaTurma /= tamanho;

    printf("A media da turma foi %.2f\n", mediaTurma);
    printf("Teve %d com a média acima de 60", qtdAcimaMedia);
}