#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main(){

// Armazena as entradas da primeira carta.
    char estado1;
    char codigo1 [20]; 
    char cidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade1;
    float capita1;
    float superPoder1;
    float densiinvertida1;

// Armazena as entradas da segunda carta.
    char estado2;
    char codigo2 [20];
    char  cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float capita2;
    unsigned long int superpoder2;
    float densiinvertida2;
   

// Entrada de dados da primeira carta. 
    printf("Informações da primeira carta\n");

    printf("Uma letra de 'A' a 'H' representando um dois oito estados:\n");
    scanf("%c", &estado1);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo1);

    printf("O nome da cidade:\n");
    scanf("%s", cidade1);

    printf("O número de habitantes da cidade:\n");
    scanf("%lu", &populacao1);

    printf("A área da cidade em quilômetros quadrado:\n");
    scanf("%f", &area1);

    printf("O Produto Interno Bruto da cidade (PIB):\n");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turisticos1);

// Calcula a Densidade Populacional e o PIB per Capita.
    densidade1 = populacao1 / area1;
    capita1 = pib1 / populacao1;

// Calculo para inverter a Dencidade Populacional.
    densiinvertida1 = densidade1 / -1;

// Calcula o Super Poder da carta. 
    superPoder1 = populacao1 + turisticos1 + area1 + pib1 + capita1 + densiinvertida1;
    

    printf("\n"); // Pula uma linha.


// Entrada de dados da segunda carta.
    printf("Informações da segunda carta\n");

    printf("Uma letra de 'A' a 'H' representando um dois oito estados:\n");
    scanf("%c", &estado2);

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigo2);

    printf("O nome da cidade:\n");
    scanf("%s", cidade2);

    printf("O número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);

    printf("A área da cidade em quilômetros quadrado:\n");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turisticos2); 

// Calcula a Densidade Populacional e PIB per Capita.
    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2; 


    densiinvertida2 = densidade2 / -1;

    superpoder2 = populacao2 + turisticos2 + area2 + pib2 + capita2 + densiinvertida2;


    printf("\n");// Pula uma linha.


//Exibe as informações da primeira carta.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1); 
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Ponto Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", capita1);

    
    printf("\n"); // Pula uma linha.


//Exibe as informações da segunda carta.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2); 
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Ponto Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", capita2);


    printf("\n"); // Pula uma linha.

// Exibe a carta que venceu. 
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu %lu\n", turisticos1 > turisticos2);
    printf("Dencidade Populacional: Carta 2 venceu %d\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu %d\n", capita1 > capita2);
    printf("Super Poder: Carta 1 venceu %d\n", superPoder1 > superpoder2);

    return 0;

}


