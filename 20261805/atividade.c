#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dados;
    struct no* prox;
} No;

void imprimirLista(No* inicio) {
    No* L = inicio;

    while (L != NULL) {
        printf("\n ==> %d", L->dados);
        L = L->prox;
    }
}

int somarLista(No* inicio) {
    int soma = 0;
    No* L = inicio;

    while (L != NULL) {
        soma = soma + L->dados;
        L = L->prox;
    }

    return soma;
}

int main() {
    No *pNode1 = (No*) malloc(sizeof(No));
    No *pNode2 = (No*) malloc(sizeof(No));
    No *pNode3 = (No*) malloc(sizeof(No));
    No *pNode4 = (No*) malloc(sizeof(No));
    No *pNode5 = (No*) malloc(sizeof(No));

    pNode1->dados = 10;
    pNode2->dados = 20;
    pNode3->dados = 30;
    pNode4->dados = 40;
    pNode5->dados = 50;

    pNode1->prox = pNode2;
    pNode2->prox = pNode3;
    pNode3->prox = pNode4;
    pNode4->prox = pNode5;
    pNode5->prox = NULL;

    No* L = pNode1;

    imprimirLista(L);

    int total = somarLista(L);

    printf("\n\nSoma total: %d", total);

    free(pNode5);
    free(pNode4);
    free(pNode3);
    free(pNode2);
    free(pNode1);

    return 0;
}