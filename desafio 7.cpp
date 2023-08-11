#include <stdio.h>

int main() {
    float capacidadeCaminhao = 18.0; // Capacidade do caminh�o em toneladas
    float producaoAlqueire = 250.0; // Produ��o m�dia de laranjas por alqueire em toneladas
    float totalToneladas; // Total de toneladas de laranjas
    int numCaminhoes; // N�mero de caminh�es necess�rios
    float numAlqueires; // N�mero de alqueires necess�rios

    // Solicitar o total de toneladas de laranjas
    printf("Digite o total de toneladas de laranjas: ");
    scanf("%f", &totalToneladas);

    // Calcular o n�mero de caminh�es necess�rios
    numCaminhoes = totalToneladas / capacidadeCaminhao;

    // Calcular o n�mero de alqueires necess�rios
    numAlqueires = totalToneladas / producaoAlqueire;

    // Exibir os resultados
    printf("N�mero de caminh�es necess�rios: %d\n", numCaminhoes);
    printf("N�mero de alqueires necess�rios: %.2f\n", numAlqueires);

    return 0;
}
