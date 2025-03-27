#include <stdio.h>

int main() {
    // Classe variaveis pra primeira e segunda carta
    char estado1[40], codigo1[3], cidade1[40],estado2[40], codigo2[3], cidade2[40];
    int populacao1, pontoturisticos1,populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2;

    // Perguntas para a primeira carta
    printf("Digite o nome do estado da sua primeira carta: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", cidade1);

    printf("Digite o código da sua primeira carta: ");
    scanf("%s", codigo1);

    printf("Digite a população de pessoas da sua primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite quantos km² tem a área da sua primeira carta: ");
    scanf("%f", &area1);

    printf("Digite qual o PIB da sua primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem sua primeira carta: ");
    scanf("%d", &pontoturisticos1);
    
    // Perguntas para a segunda carta
    printf("\nDigite o nome do estado da sua segunda carta: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade da sua segunda carta: ");
    scanf("%s", cidade2);

    printf("Digite o código da sua segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite a população de pessoas da sua segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite quantos km² tem a área da sua segunda carta: ");
    scanf("%f", &area2);

    printf("Digite qual o PIB da sua segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem na sua segunda carta: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados da primeira carta
    printf("\n--- Primeira Carta ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontoturisticos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Segunda Carta ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;
}
