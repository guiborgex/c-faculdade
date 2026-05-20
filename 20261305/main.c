#include <stdlib.h>
#include <stdio.h>  

typedef struct no {
    int dados;
    struct no* prox;
} No;

No *pNode1;
No *pNode2;
No *pNode3;

int main() {

    pNode1 = (No*)malloc(sizeof(No));
    pNode2 = (No*)malloc(sizeof(No));
    pNode3 = (No*)malloc(sizeof(No));

    pNode1->dados = 10;
    pNode2->dados = 20;
    pNode3->dados = 30;

    pNode1 -> prox = pNode2;
    pNode2 -> prox = pNode3;    
    pNode3 -> prox = NULL;

    No* L = pNode1;

    while(L !=NULL){
        printf("\n ==> %d",L->dados);
        L = L->prox;
    }

    pNode1;

    printf("\n --> %d",pNode1->dados, (void*)pNode1->prox);

    free(pNode3);
    free(pNode2);
    free(pNode1);


return 0;
}