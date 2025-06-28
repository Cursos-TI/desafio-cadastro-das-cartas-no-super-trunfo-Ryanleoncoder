// Descrição do projeto : Este código é uma implementação simples de um jogo de cartas chamado "Super Trunfo" em C.


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

char estado1; 
char codigo1[50]; 
char nomeCidade1[50]; 
int populacao1; 
float area1; 
float pib1; 
int pontosTuristicos1; 
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

// Carta 2:

// Estado: B
// Código: B02
// Nome da Cidade: Rio de Janeiro
// População: 6748000
// Área: 1200.25 km²
// PIB: 300.50 bilhões de reais
//Número de Pontos Turísticos: 30 

char estado2; 
char codigo2[50]; 
char nomeCidade2[50]; 
int populacao2; 
float area2; 
float pib2; 
int pontosTuristicos2; 

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

// Exibindo os dados da Carta 1

printf("\n\n--- Carta 1 ---\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("--------------");

// Exibindo os dados da Carta 2 

printf("\n\n--- Carta 2 ---\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("--------------");

return 0; // Retorna 0 para indicar que o programa terminou com sucesso

}

