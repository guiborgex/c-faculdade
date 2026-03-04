#include <stdio.h>

int main() {

    int i, j, aux, y;
    int vetor[] = {17, 22, 11, 33, 18, 9};
    int n = (int)(sizeof(vetor) / sizeof(vetor[0]));

    printf("Digite um valor para verificar se esta dentro do vetor:\n");
    scanf("%d", &y);

    aux = 0;
    for (i = 0; i < n; i++){
        if (y == vetor[i]){
            aux = 1;
            break;
        }
    }

    if (aux == 1){
        printf("O valor %d esta dentro do vetor!", y);
    }
    else {
        printf("O valor %d nao esta dentro do vetor!", y);
    }

    return 0;
}