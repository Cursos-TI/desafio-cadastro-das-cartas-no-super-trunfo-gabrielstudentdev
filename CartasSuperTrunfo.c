#include <stdio.h>

int main() {
// Variáveis para a primeira e segunda carta
char estado1[40], codigo1[3], cidade1[40], estado2[40], codigo2[3], cidade2[40];
int populacao1, populacao2, pontosturisticos1, pontosturisticos2, resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoSuperPoder;
float area1, area2, pib1, pib2, pibpercapita1, pibpercapita2, densidadepopulacional1, densidadepopulacional2 ;

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
scanf("%d", &pontosturisticos1);

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

// Operação Divisão para gerar o pibpercapita e densidade populacional
pibpercapita1 = pib1 / populacao1;
pibpercapita2 = pib2 / populacao2;
densidadepopulacional1 = populacao1 / area1;
densidadepopulacional2 = populacao2 / area2;

// Cálculo da densidade populacional invertida
float densidadepopulacional_invertida1 = area1 / (float)populacao1;
float densidadepopulacional_invertida2 = area2 / (float)populacao2;
float superpoder1, superpoder2;

// Cálculo do superpoder
superpoder1 = populacao1 + area1 + pib1 + pibpercapita1 + densidadepopulacional_invertida1 + pontosturisticos1;
superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + densidadepopulacional_invertida2 + pontosturisticos2;


// Comparações entre as cartas
resultadoA = populacao1 > populacao2;
resultadoB = area1 > area2;
resultadoC = pib1 > pib2;
resultadoD = pontosturisticos1 > pontosturisticos2;
resultadoE = densidadepopulacional1 > densidadepopulacional2;
resultadoF = pibpercapita1 > pibpercapita2;
resultadoSuperPoder = superpoder1 > superpoder2;

// Exibição dos dados da primeira carta
printf("\n--- Primeira Carta ---\n");
printf("Cidade: %s\n", cidade1);
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %4.2f km²\n", area1);
printf("PIB: %3.2f\n", pib1);
printf("Pontos turísticos: %d\n", pontosturisticos1);
printf("O PIB per capita: %3.2f\n", pibpercapita1);
printf("Densidade Populacional: %4.2f\n", densidadepopulacional1);

// Exibição dos dados da segunda carta
printf("\n--- Segunda Carta ---\n");
printf("Cidade: %s\n", cidade2);
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %4.2f km²\n", area2);
printf("PIB: %3.2f\n", pib2);
printf("Pontos turísticos: %d\n", pontosturisticos2);
printf("O PIB per capita: %3.2f\n", pibpercapita2);
printf("Densidade Populacional: %4.2f\n", densidadepopulacional2);

// Comparação das cartas
printf("\n--- Comparação de Cartas ---\n");
printf("População: %d carta 1 venceu (%d)\n", populacao1, resultadoA);
printf("Área: %4.2f km² carta 1 venceu (%d)\n", area1, resultadoB);
printf("PIB: %3.2f bilhões de reais Carta 1 venceu (%d)\n", pib1, resultadoC);
printf("Número de Pontos turísticos: %d Carta 1 venceu (%d)\n", pontosturisticos1, resultadoD);
printf("PIB per capita: %3.2f reais Carta 1 venceu (%d)\n", pibpercapita1, resultadoF);
printf("Densidade populacional: %4.2f hab/km² Carta 1 venceu: (%d)\n", densidadepopulacional1, resultadoE);
printf("Super poder Carta 1 venceu : (%d) \n", resultadoSuperPoder);
return 0;
}
