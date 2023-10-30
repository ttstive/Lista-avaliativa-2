#include <stdio.h>


//uma função para somar vetores, ou seja, quero que cada elemento do meu vetor seja somado de 2 em 2
// até que reste somente 1 valor e nao tenha mais como somar;

int somaVetores(int valores[], int tamanho) {
    while (tamanho >1) {
        for (int i = 0; i < tamanho - 1; i++) {
            valores[i] = valores[i] + valores[i + 1];
        } // o while so vai funcionar enquanto meu vetor tiver mais que um valor, somando de 2 em 2 até que reste somente 1
        tamanho--;  // Atualiza o tamanho da lista
        for (int i = 0; i < tamanho; i++) {
            printf("%d", valores[i]); // tem somente um backspace apos %d, para que fiquem com espaçamento conforme o que foi pedido
        }
        printf("\n");
    }
}

int main() {
    int conjunto_de_valores[10];
    int n_elementos = 10;

    printf("\n");

    for (int i = 0; i < n_elementos; i++) {
        scanf("%d", &conjunto_de_valores[i]);
    }

    for (int i = 0; i < n_elementos; i++) {
        printf("%d", conjunto_de_valores[i]);
    }
    printf("\n");

    somaVetores(conjunto_de_valores, n_elementos);

    return 0;
}
