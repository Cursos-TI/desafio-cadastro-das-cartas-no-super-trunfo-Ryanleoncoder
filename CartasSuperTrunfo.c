// Descrição do projeto : Este código é uma implementação simples de um jogo de cartas chamado "Super Trunfo" em C.
// nivel aventureiro

#include <stdio.h> // Biblioteca padrão de entrada e saída

int main(){ 

// Carta 1:
// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50
//Densidade Populacional: 8102.47 hab/km²
//PIB per Capita: 56724.32 reais

char estado1; 
char codigo1[50]; 
char nomeCidade1[50]; 
int populacao1; 
float area1; 
float pib1; 
int pontosTuristicos1; 
float densidadepopulacional, pibpercapita;
printf("\n--faça a primeira carta--\n");
printf("Digite o estado (A-H): "); 
scanf(" %c", &estado1); 
printf("Digite o código da carta (ex: A01): "); 
scanf("%s", codigo1); 
printf("Digite o nome da cidade: "); 
scanf("%s", nomeCidade1); 
printf("Digite a população da cidade: ");  
scanf("%d", &populacao1); 
printf("Digite a área da cidade: "); 
scanf("%f", &area1); 
printf("Digite o PIB da cidade: ");
scanf("%f", &pib1); 
printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);

densidadepopulacional = populacao1 / area1;
pibpercapita = (float) pib1 * 1000000000 / populacao1;

// Carta 2:

// Estado: B
// Código: B02
// Nome da Cidade: Rio de Janeiro
// População: 6748000
// Área: 1200.25 km²
// PIB: 300.50 bilhões de reais
//Número de Pontos Turísticos: 30 
// Densidade Populacional: 5622.24 hab/km²
// PIB per Capita: 44532.91 reais

char estado2; 
char codigo2[50]; 
char nomeCidade2[125]; 
int populacao2; 
float area2; 
float pib2; 
int pontosTuristicos2; 
float densidadepopulacional2, pibpercapita2;

printf("\n--faça a segunda carta--\n");
printf("Digite o estado (A-H): "); 
scanf(" %c", &estado2); 
printf("Digite o código da carta (ex: A01): "); 
scanf("%s", codigo2); 
printf("Digite o nome da cidade: "); 
scanf("%s", nomeCidade2); 
printf("Digite a população da cidade: ");  
scanf("%d", &populacao2); 
printf("Digite a área da cidade: "); 
scanf("%f", &area2); 
printf("Digite o PIB da cidade: ");
scanf("%f", &pib2); 
printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);
densidadepopulacional2 = (float) populacao2 / area2;
pibpercapita2 = (float) pib2 * 1000000000 / populacao2;

// Exibindo os dados da Carta 1

printf("\n\n--- Carta 1 ---\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional);
printf("PIB per capita: %.2f reais\n", pibpercapita);
printf("--------------\n\n");

// Exibindo os dados da Carta 2 

printf("\n\n--- Carta 2 ---\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional2);
printf("PIB per capita: %.2f reais\n", pibpercapita2);
printf("--------------\n\n");

return 0; // Retorna 0 para indicar que o programa terminou com sucesso

}