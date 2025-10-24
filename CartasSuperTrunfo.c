#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1; // Letra do estado 1 (ex: 'A')
  char estado2; // Letra do estado 2 (ex: 'B')

  char nome_cidade1[100]; // Nome da cidade 1 (ex: "São Paulo")
  char nome_cidade2[100]; // Nome da cidade 2 (ex: "Campinas")

  char codigo_cidade1[3]; // Código da cidade 1 (ex: "A1")
  char codigo_cidade2[3]; // Código da cidade 2 (ex: "B2")

  int populacao1; // População da cidade 1
  int populacao2; // População da cidade 2
  int pontos1;    // Pontos da cidade 1
  int pontos2;    // Pontos da cidade 2

  float area1; // Área da cidade 1
  float area2; // Área da cidade 2
  float pib1;  // PIB da cidade 1
  float pib2;  // PIB da cidade 2

  // Apresentação do jogo
  printf("\nBem-vindo ao jogo Super Trunfo!\n");
  printf("Para começar, preencha todos os dados solicitados para criar suas cartas.\n");

  // Exemplo ilustrativo para orientar o usuário
  printf(
      "\nExemplo de preenchimento de carta:\n"
      "-----------------------------------\n"
      "Estado: C\n"
      "Código: C01\n"
      "Nome da cidade: Fortaleza\n"
      "População: 180000\n"
      "Área: 155000 \n"
      "PIB: 310000\n"
      "Número de pontos turísticos: 5\n"
      "-----------------------------------\n"
      "Pronto! Agora é só jogar!\n");
  printf("\n=============================\n");

  // Área para entrada de dados da carta 1
  printf("\n=== Primeira Carta ===\n");

  printf("Digite o estado (A até H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da cidade (1 até 4): ");
  scanf(" %2s", codigo_cidade1);

  printf("Digite o nome da cidade: ");
  scanf(" %s", nome_cidade1);

  printf("Digite a população da cidade: ");
  scanf("%i", &populacao1);

  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%i", &pontos1);

  // Área para entrada de dados da carta 2
  printf("\n=== Segunda Carta ===\n");

  printf("Digite o estado (A até H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da cidade (1 até 4): ");
  scanf(" %2s", codigo_cidade2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", nome_cidade2);

  printf("Digite a população da cidade: ");
  scanf("%i", &populacao2);

  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%i", &pontos2);
  printf("\n === Cadastro concluído! ===\n");

  // Exibição carta 1
  printf("\n=== Dados da Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo_cidade1);
  printf("Cidade: %s\n", nome_cidade1);
  printf("População: %d Habitantes\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f Bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pontos1);

  // Exibição carta 2
  printf("\n=== Dados da Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo_cidade2);
  printf("Cidade: %s\n", nome_cidade2);
  printf("População: %d Habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f Bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);

  printf("\n ===============================\n");

  return 0;
}
