#include <stdio.h>

int main() {
    float distancia[7]; // Vetor para armazenar os valores de distância
    char dias_semana[7][20] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};
    int i;

    // Loop para inserir os valores de distância
    printf("Insira o valor de distancia corrida para cada dia da semana:\n");
    for (i = 0; i < 7; i++) {
        printf("%s: ", dias_semana[i]);
        scanf("%f", &distancia[i]);
    }

    // Imprimir os valores de distância e calcular a média total
    float total = 0;
    printf("\nValores de distancia inseridos:\n");
    for (i = 0; i < 7; i++) {
        printf("%s: %.2f km\n", dias_semana[i], distancia[i]);
        total += distancia[i]; // Adicionando o valor de distância ao total
    }

    // Calculando a média total
    float media_total = total / 7;
    printf("\nMedia total da distancia percorrida durante toda a semana: %.2f km\n", media_total);

    return 0;
}