#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[20];
  char codigo1[20];
  char cidade1[20];
  unsigned long int populacao1;
  int ponto1;
  float area1;
  float pib1; 
  float densidade1;
  float percapita1;
  float superpoder1;
  float inverso_densidade1;

  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  unsigned long int populacao2;
  int ponto2;
  float area2;
  float pib2;
  float densidade2;
  float percapita2;
  float superpoder2;
  float inverso_densidade2;


  // Área para entrada de dados da carta 1

  printf("Insira os dados da carta 1\n");

  printf("Digite uma letra de A a H que represente o estado da carta:\n");
  scanf(" %s", estado1);

  printf("Digite o código da carta de 01 a 04:\n");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade1);

  printf("Digite a população da cidade:\n");
  scanf(" %lu", &populacao1);

  printf("Digite a área da cidade:\n");
  scanf(" %f", &area1);

  printf("Digite o PIB da cidade:\n");
  scanf(" %f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf(" %d", &ponto1);

  printf("Agora insira os dados da carta 2\n");

  //Dados da Carta 2

  printf("Digite uma letra de A a H que represente o estado da carta:\n");
  scanf(" %s", estado2);

  printf("Digite o código da carta de 01 a 04:\n");
  scanf(" %s", codigo2);

  printf("Digite o Nome da cidade:\n");
  scanf("%s", cidade2);
  
  printf("Digite a população da cidade:\n");
  scanf(" %lu", &populacao2);

  printf("Digite a área da cidade:\n");
  scanf(" %f", &area2);

  printf("Digite o PIB da cidade:\n");
  scanf(" %f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf(" %d", &ponto2);


//Cálculo de Densidade e PIB
  densidade1 = (float)populacao1 / area1;
  percapita1 = pib1 / (float)populacao1;

  densidade2 = populacao2 / area2;
  percapita2 = (float)pib2 / populacao2;

   //calculo do inverso da densidade

  inverso_densidade1 = 1 / densidade1;
  inverso_densidade2 = 1 / densidade2;

  //Cálculo de super poder
  superpoder1 = (float)populacao1 + area1 + pib1 + percapita1, inverso_densidade1;
  superpoder2 = (float)populacao2 + area2 + pib2 + percapita2, inverso_densidade2;


  // Área para exibição dos dados da carta

 //Carta 1
  printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código:%s%s\n", estado1, codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área:%.2f Km²\n", area1);
  printf("PIB:%.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos:%d\n",ponto1);
  printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
  printf("PIB per Capita:%.6f reais\n", percapita1);

//Carta 2
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s%s\n", estado2, codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área:%.2f Km²\n", area2);
  printf("PIB:%.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos:%d\n",ponto2);
  printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
  printf("PIB per Capita:%.6f reais\n", percapita2);


//comparação de cartas
printf("Comparação de cartas\n");
printf("População:Carta 1 venceu (%d)\n",populacao1>populacao2);
printf("Área:Carta 1 venceu (%d)\n",area1>area2);
printf("PIB: Carta 1 venceu (%d)\n",pib1>pib2);
printf("Pontos turísticos: Carta 1 venceu (%d)\n",ponto1>ponto2);
printf("Densidade populacional: Carta 2 venceu (%d)\n",densidade1<densidade2);
printf("PIB per capita: Carta 1 venceu (%d)\n",pib1<pib2);
printf("Super poder:Carta 1 venceu (%d)\n",superpoder1<superpoder2);


return 0;
} 


