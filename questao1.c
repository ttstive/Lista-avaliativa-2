#include <stdio.h>

// Uma função para somar vetores, ou seja, quero que cada elemento do meu vetor seja somado de 2 em 2
// até que reste somente 1 valor e não tenha mais como somar;

int somaVetores(int valores[], int tamanho) {
    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            valores[i] = valores[i] + valores[i + 1];
        } // o while só vai funcionar enquanto meu vetor tiver mais que um valor, somando de 2 em 2 até que reste somente 1
        tamanho--;  // Atualiza o tamanho da lista
        for (int i = 0; i < tamanho; i++) {
            printf("%d", valores[i]);
            if (i < tamanho - 1) {
                printf(" "); // Adicione um espaço entre os valores, exceto para o último valor
            }
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

    // Imprima os valores lidos aqui
    printf("Valores lidos: ");
    for (int i = 0; i < n_elementos; i++) {
        printf("%d", conjunto_de_valores[i]);
        if (i < n_elementos - 1) {
            printf(" "); // Adicione um espaço entre os valores lidos, exceto para o último valor
        }
    }
    printf("\n");

    somaVetores(conjunto_de_valores, n_elementos);

    return 0;
}
