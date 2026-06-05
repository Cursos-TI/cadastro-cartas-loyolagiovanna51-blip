#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoder1;

  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = pib1 / (float)populacao1;

  printf("Densidade Populacional: %.2f\n", densidadePopulacional1);

  printf ("PIB per Capita: %.2f\n", pibPerCapita1);

  // Área para entrada de dados
  printf("=== Cadastro da Carta 1 ===\n");

  printf("Digite o estado (A a H):");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta: ");
  scanf(" %[^\n]", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %s[^\n]", cidade1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade: ");
  scanf("%f", &area1); 

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("Digite a densidade populacional: ");
  scanf("%f", &densidadePopulacional1);

  printf("Digite o PIB Per Capita: ");
  scanf("%f", &pibPerCapita1);

  // Área para exibição dos dados da cidade
  printf("\n=== Carta 1 ===\n");

  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos; %d\n", pontosTuristicos1);
  printf("Densidade Populacional; %.2f\n", densidadePopulacional1);
  printf("PIB Per Capita;%.2f\n", pibPerCapita1);

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // Área para entrada de dados
  printf("=== Cadastro da Carta 2 ===\n");

  printf("Digite o estado (A a H):");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta: ");
  scanf(" %[^\n]", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade: ");
  scanf("%f", &area2); 

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

   printf("Digite a densidade populacional: ");
  scanf("%f", &densidadePopulacional2);

  printf("Digite o PIB Per Capita: ");
  scanf("%f", &pibPerCapita2);

  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / (float)populacao2;

  printf("Densidade Populacional: %.2f\n", densidadePopulacional2);

  printf ("PIB per Capita: %.2f\n", pibPerCapita2);

  // Área para exibição dos dados da cidade
  printf("\n=== Carta 2 ===\n");

  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos; %d\n", pontosTuristicos2);
  printf("Densidade Populacional; %.2f\n", densidadePopulacional2);
  printf("PIB Per Capita;%.2f\n", pibPerCapita2);

  // Super Poder Carta 1
  superPoder1 =
       populacao1 +
       area1 +
       pib1 +
       pontosTuristicos1 +
       pibPerCapita1 +
       (1.0 / densidadePopulacional1);
      
  // Super Poder Carta 2 
  superPoder2 =
        populacao2 +
        area2 +
        pib2 + 
        pontosTuristicos2 + 
        pibPerCapita2 +
        (1.0 / densidadePopulacional2);

  int resultadoPopulacao = populacao1 > populacao2; 
  int resultadoArea = area1 > area2; 
  int resultadoPib = pib1 > pib2; 
  int resultadoTurismo = pontosTuristicos1 > pontosTuristicos2;
  int resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2;

  // Na densidade ganha o MENOR valor 
  int resultadoDensidade = densidadePopulacional1 < densidadePopulacional2;

  int resultadoSuperPoder = superPoder1 > superPoder2; 

  printf("\n=== COMPARACAO DAS CARTAS ===\n");

  printf("Populacao: %s (%d)\n", resultadoPopulacao ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPopulacao);
  printf("Area: %s (%d)\n", resultadoArea ? "Carta 1 venceu" : "Carta 2 venceu", resultadoArea);
  printf("PIB: %s (%d)\n", resultadoPib ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPib);
  printf("Pontos Turistiscos: %s (%d)\n", resultadoTurismo ? "Carta 1 venceu" : "Carta 2 venceu", resultadoTurismo);
  printf("PIB per Capita: %s (%d)\n", resultadoPIBPerCapita ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPIBPerCapita);
  printf("Densidade Populacional: %s (%d)\n", resultadoDensidade ? "Carta 2 venceu" : "Carta 1 venceu", resultadoDensidade);
  printf("Super Poder: %s (%d)\n", resultadoSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu", resultadoSuperPoder); 
return 0;
} 
