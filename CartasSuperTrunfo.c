#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Primeira carta
    char estado1;
    char carta1 [20], cidade1 [20];
    int população1, turisticos1;
    float area1, pib1;

  // Segunda carta
    char estado2;
    char carta2 [20], cidade2 [20];
    int população2, turisticos2;
    float area2, pib2;


  // Área para entrada de dados
  // Primeira Carta
    printf("Informações da primeira carta\n");

    printf("Uma letra de 'A' a 'H' representando um dois oito estados:\n");
    scanf("%c", &estado1);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", &carta1);

    printf("O nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("O número de habitantes da cidade:\n");
    scanf("%d", &população1);

    printf("A área da cidade em quilômetros quadrado:\n");
    scanf("%f", &area1);

    printf("O Produto Interno Bruto da cidade (PIB):\n");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turisticos1);


  // Entrada de dados da segunda carta 
    printf("Informações da segunda carta\n");

    printf("Uma letra de 'A' a 'H' representando um dois oito estados:\n");
    scanf("%s", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", &carta2);

    printf("O nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("O número de habitantes da cidade:\n");
    scanf("%d", &população2);

    printf("A área da cidade em quilômetros quadrado:\n");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade (PIB):\n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turisticos2);

  // Área para exibição dos dados da cidade
  // Primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1); 
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Ponto Turísticos: %d\n", turisticos1);

    
    printf("\n"); // Pula uma linha


//Exibe as informações da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2); 
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Ponto Turísticos: %d\n", turisticos2);

return 0;
} 
