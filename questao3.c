#include <string.h>
#include <stdio.h>
#include <string.h>

void soma(int matriz1[4][4], int matriz2[4][4], int matriz3[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtracao(int matriz1[4][4], int matriz2[4][4], int matriz3[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void multiplica(int matriz1[4][4], int matriz2[4][4], int matriz3[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz3[i][j] = 0;
            for(int k = 0; k < 4; k++){
                matriz3[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprimeMatriz(int matriz[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz1[4][4], matriz2[4][4], matriz3[4][4];
    char operacao[10];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }

    scanf("%s", operacao);

    if(strcmp(operacao, "soma") == 0){
        soma(matriz1, matriz2, matriz3);
    } else if(strcmp(operacao, "sub") == 0){
        subtracao(matriz1, matriz2, matriz3);
    } else if(strcmp(operacao, "mult") == 0){
        multiplica(matriz1, matriz2, matriz3);
    }

    imprimeMatriz(matriz3);

    return 0;
}
