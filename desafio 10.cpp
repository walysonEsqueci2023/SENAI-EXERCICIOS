#include <stdio.h>

int main() {
    char nomeCidade[100];
    int totalEleitores, totalVotosApurados;
    float participacao;

    // Solicitar o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    // Solicitar o n�mero total de eleitores
    printf("Digite o n�mero total de eleitores: ");
    scanf("%d", &totalEleitores);

    // Solicitar o n�mero total de votos apurados
    printf("Digite o n�mero total de votos apurados: ");
    scanf("%d", &totalVotosApurados);

    // Calcular a porcentagem de participa��o
    participacao = (float)totalVotosApurados / totalEleitores * 100;

    // Exibir a porcentagem de participa��o
    printf("Porcentagem de participa��o dos eleitores em %s: %.2f%%\n", nomeCidade, participacao);

    return 0;
}
