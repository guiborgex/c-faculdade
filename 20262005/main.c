#include <stdio.h>

#define MAX 10

typedef struct {
    int dados[MAX];
    int tamanho;
} Lista;

int inserir(Lista *L, int valor) {
    if (L->tamanho >= MAX) {
        printf("Lista cheia.\n");
        return 0;
    }

    L->dados[L->tamanho++] = valor;
    return 1;
}

void imprimir(Lista *L) {
    if (L->tamanho == 0) {
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista: ");
    for (int i = 0; i < L->tamanho; i++) {
        printf("%d ", L->dados[i]);
    }

    printf("\n");
}

int remover(Lista *L, int valor) {
    int i, encontrado = 0;

    for (i = 0; i < L->tamanho; i++) {
        if (L->dados[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Valor %d nao encontrado.\n", valor);
        return 0;
    }

    for (; i < L->tamanho - 1; i++) {
        L->dados[i] = L->dados[i + 1];
    }

    L->tamanho--;
    printf("Valor %d removido.\n", valor);
    return 1;
}

int main() {
    Lista L;
    L.tamanho = 0;

    inserir(&L, 10);
    inserir(&L, 20);
    inserir(&L, 30);

    imprimir(&L);

    remover(&L, 20);

    imprimir(&L);

    return 0;
}