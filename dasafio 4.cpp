#include <stdio.h>

int calcularPontos(int vitorias, int empates) {
    return (vitorias * 3) + empates;
}

int main() {
    char nomeTime[100];
    int vitorias, empates;

    printf("Digite o nome do time: ");
    scanf("%s", nomeTime);

    printf("Digite o n�mero de vit�rias: ");
    scanf("%d", &vitorias);

    printf("Digite o n�mero de empates: ");
    scanf("%d", &empates);

    int pontos = calcularPontos(vitorias, empates);

    printf("Time: %s\n", nomeTime);
    printf("Total de pontos: %d\n", pontos);

    return 0;
}
