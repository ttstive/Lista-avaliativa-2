#include <stdio.h>
// um struct para alocar nome, posicao e forca;
typedef struct {
    char nome[31];
    char posicao;
    int forca;
} Jogador;
// outro para alocar nome do time e a quantidade de jogadores
typedef struct {
    char nomeTime[31];
    Jogador jogadores[11];
} Time;
// variavel para ler a quantidade de jogadores, usei o que vi em alguns videos extras do youtube onde nesse trecho do código, o apontamento é usado como um parametro
// esse parametro permite que a seguinte interação aconteça
//O loop for é executado 11 vezes e, em cada iteração, a função scanf é usada para ler informações de um jogador e armazená-las na estrutura Time apontada pelo ponteiro time
// "apontando" força, o nome e posição;
void lerJogadores(Time *time) {
    for (int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d%*c", time->jogadores[i].nome, &time->jogadores[i].posicao, &time->jogadores[i].forca);
    }
}

double calcularForca(Time time) {
    double forca = 0;
    for (int i = 0; i < 11; i++) {
        switch (time.jogadores[i].posicao) {
            case 'G':
                forca += 8 * time.jogadores[i].forca;
                break;
            case 'L':
                forca += 10 * time.jogadores[i].forca;
                break;
            case 'Z':
                forca += 5 * time.jogadores[i].forca;
                break;
            case 'V':
                forca += 8 * time.jogadores[i].forca;
                break;
            case 'M':
                forca += 11 * time.jogadores[i].forca;
                break;
            case 'A':
                forca += 12 * time.jogadores[i].forca;
                break;
        }
    }
    return forca / 100;
}

int main() {
    Time time1, time2;

    // Lê o nome do primeiro time
    scanf("%[^\n]%*c", time1.nomeTime);
    lerJogadores(&time1);

    // Lê o nome do segundo time
  // esse [^\n] é necessário para que a formatação fique especificamente como o marvim pede, afinal sem isso ele nao leria "nome;L;90 "
    scanf("%[^\n]%*c", time2.nomeTime);
    lerJogadores(&time2);

    double forcaTime1 = calcularForca(time1);
    double forcaTime2 = calcularForca(time2);

    printf("%s: %.2f de forca\n", time1.nomeTime, forcaTime1);
    printf("%s: %.2f de forca\n", time2.nomeTime, forcaTime2);

    if (forcaTime1 > forcaTime2) {
        printf("%s eh mais forte\n", time1.nomeTime);
    } else if (forcaTime2 > forcaTime1) {
        printf("%s eh mais forte\n", time2.nomeTime);
    } 
    return 0;
}
