#include <stdio.h>
// primeiro estou criando uma função que soma vetores
void somaVetores(int valores[], int tamanho) {
    if (tamanho == 1) {
        return;
    }
// aqui terei a minnha nova função do vetor, pois após a primeira interação, ele tera um novo tamanho;
    int novoVetor[tamanho-1];
    for (int i = 0; i < tamanho - 1; i++) {
        novoVetor[i] = valores[i] + valores[i + 1];
        printf("%d", novoVetor[i]);
        if (i < tamanho - 2) {
            printf(" "); // adicionando espaço de novo aqui
        }
    }
    printf("\n");

    somaVetores(novoVetor, tamanho - 1);
}

int main() {
    int conjunto_de_valores[10];
    int n_elementos = 10;

    for (int i = 0; i < n_elementos; i++) {
        scanf("%d", &conjunto_de_valores[i]);
    }

    // Imprima os valores lidos aqui
    for (int i = 0; i < n_elementos; i++) {
        printf("%d", conjunto_de_valores[i]);
        if (i < n_elementos - 1) {
            printf(" "); // Adicionei um espaço entre os valores lidos, mas não para o último valor
        }
    }
    printf("\n");

    somaVetores(conjunto_de_valores, n_elementos);

    return 0;
}
