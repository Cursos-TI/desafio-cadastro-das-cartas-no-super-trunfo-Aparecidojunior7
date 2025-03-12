#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

// declaração de variaveis para a primeira carta

    char estado1;
    char codigo1[4];
    char nomedacidade1[50];
    int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // declaração de variaveis para a segunda carta

    char estado2;
    char codigo2[4];
    char nomedacidade2[50];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // entrada de dados para a primerira carta

    printf(" cadastro da carta 1:");
    printf("estado (A-H):");
    scanf("%c", &estado1);
    printf("codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("nome da cidade ");
    scanf("%49s", nomedacidade1);
    printf("populaçao ");
    scanf("%d", populaçao1);
    printf("área (em km²): ");
    scanf("%f", area1);
    printf("PIB (em bilhoes de reais): ")
    scanf("%f", pib1);
    printf("pontos turisticos");
    scanf("%d", pontosturisticos1);

 // entrade de dados para a segunda carta 

    printf(" cadastro da carta 2:");
    printf("estado (A-H):");
    scanf("%c", &estado2);
    printf("codigo da carta (ex: A01): ");
    scanf("%3s", codigo2);
    printf("nome da cidade ");
    scanf("%49s", nomedacidade2);
    printf("populaçao ");
    scanf("%d", populaçao2);
    printf("área (em km²): ");
    scanf("%f", area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", pib2);
    printf("pontos turisticos");
    scanf("%d", pontosturisticos2);

 // Exibiçao das informaçoes da primeira carta
    
    printf("\n carta 1:\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("nome da cidade: %s\n", nomedacidade1);
    printf("popolaçao: %d", populaçao1);
    printf("area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("pontos turisticos: %d\n", pontosturisticos1);

// exibiçao das informaçoes da segunda carta 
 
    printf("\n carta 2:\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", nomedacidade2);
    printf("popolaçao: %d", populaçao2);
    printf("area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}
