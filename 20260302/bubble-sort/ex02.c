#include <stdio.h>

int main(){

    int i, j, aux;
    int vetor[6];
    int n = (int)(sizeof(vetor) / sizeof(vetor[0]));
    //n recebe o número de elementos do vetor, nesse caso sera 6;

    printf("Digite 6 valores para preencher o vetor:\n");
    scanf("%d %d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5]);

    for (i = 0; i < n - 1; i++){
    //nesse for o i percorre o vetor do inicio ao fim, ou seja, de 0 ate n-2;
        for (j = 0; j < n - 1 - i; j++){
        //nesse for o j percorre o vetor do inicio ao penultimo elemento, ou seja, de 0 a 4;
            if (vetor[j] > vetor[j + 1]){
            //aqui é onde será feita a troca dos elementos, caso o elemento atual seja maior que o próximo elemento, eles serão trocados de posição;
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++){
    //nesse for o i percorre o vetor do inicio ao fim para imprimir os elementos do vetor ordenado;
        printf("%d ", vetor[i]);
    } 
    printf("\n");

    return 0;
}