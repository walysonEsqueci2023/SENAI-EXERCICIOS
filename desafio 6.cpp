#include <stdio.h>

int main() {
    float velocidadeCruzeiro = 900.0; // Velocidade de cruzeiro em km/h
    float distancia; // Dist�ncia em quil�metros
    float tempo; // Tempo em horas

    // Solicitar a dist�ncia em quil�metros
    printf("Digite a dist�ncia em quil�metros: ");
    scanf("%f", &distancia);

    // Calcular o tempo necess�rio (tempo = dist�ncia / velocidade)
    tempo = distancia / velocidadeCruzeiro;

    // Exibir o tempo necess�rio
    printf("Tempo necess�rio para sobrevoar %.2f km: %.2f horas\n", distancia, tempo);

    return 0;
}
