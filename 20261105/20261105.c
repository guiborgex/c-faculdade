#include <stdio.h>
#define MAX 20

// Estrutura da Fila
typedef struct {
    int dados[MAX];
    int fim;
} Fila;

void iniciar(Fila *f) {
    f->fim = -1;
}

int vazia(Fila *f) {
    return f->fim == -1;
}

int cheia(Fila *f) {
    return f->fim == MAX - 1;
}

void inserir(Fila *f, int valor) {
    if (cheia(f)) {
        printf("Fila cheia!\n");
        return;
    }
    f->fim++;
    f->dados[f->fim] = valor;
    printf("Inseriu: %d\n", valor);
}

int remover(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia!\n");
        return -1;
    }
    int valor = f->dados[0];
    
    // Desloca todos os elementos uma posição p frente
    for (int i = 0; i < f->fim; i++) {
        f->dados[i] = f->dados[i + 1];
    }
    
    f->fim--;
    printf("Removeu: %d\n", valor);
    return valor;
}

void mostrar(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia!\n");
        return;
    }
    
    printf("Fila: ");
    for (int i = 0; i <= f->fim; i++) {
        printf("%d ", f->dados[i]);
    }
    printf("\n");
}

//Função principal
int main() {
    Fila fila;
    iniciar(&fila);
    
    printf("Inserindo elementos \n");
    inserir(&fila, 10);
    inserir(&fila, 20);
    inserir(&fila, 30);
    mostrar(&fila);
    
    printf("\n Removendo elementos \n");
    remover(&fila);
    mostrar(&fila);
    
    printf("\n Inserindo mais elementos \n");
    inserir(&fila, 40);
    mostrar(&fila);
    
    return 0;
}