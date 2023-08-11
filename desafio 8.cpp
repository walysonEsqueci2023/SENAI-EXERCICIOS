#include <stdio.h>
int main() {
    float raio, altura;
    const float pi = 3.14159;

    // Solicitar o raio e a altura do cilindro
    printf("Digite o raio do cilindro (cm): ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro (cm): ");
    scanf("%f", &altura);

    // Calcular a �rea da superf�cie lateral do cilindro
    float areaLateral = 2 * pi * raio * altura;

    // Calcular a �rea total do cilindro (incluindo as bases)
    float areaTotal = 2 * pi * raio * (raio + altura);

    // Calcular o volume do cilindro
    float volume = pi * pow(raio, 2) * altura;

    // Exibir os resultados
    printf("�rea da superf�cie lateral do cilindro: %.2f cm2\n", areaLateral);
    printf("�rea total do cilindro: %.2f cm2\n", areaTotal);
    printf("Volume do cilindro: %.2f cm3\n", volume);

    return 0;
}

