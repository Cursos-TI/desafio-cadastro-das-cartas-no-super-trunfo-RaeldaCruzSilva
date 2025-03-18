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
    //Carta 1

    char estado;
    char codigo_cidade[10];
    char nome_cidade[15];
    int populacao;
    float area_cidade;
    float pib;
    int ponto_turistico;

    printf("CADASTRO CARTA 01\n");
    
    printf("Estado:");
    scanf("%c", &estado);

    printf("Código da Cidade: ");
    scanf("%s", codigo_cidade);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Digita Área da Cidade: ");
    scanf("%f", &area_cidade);

    printf("Pib da Cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico);

    printf("CARTA 01\n");

    printf(" Estado: %c\n Codigo da Cidade: %s\n Nome da Cidade: %s\n População: %d\n", estado, codigo_cidade, nome_cidade, populacao);
    printf(" Área da Cidade: %.2f\n Pib da Cidade: %.2f\n Número de Pontos Turísticos: %d\n", area_cidade, pib, ponto_turistico);
    
    printf("CADASTRO CARTA 02\n");
    
    printf("Estado:");
    scanf(" %c", &estado);

    printf("Código da Cidade: ");
    scanf("%s", codigo_cidade);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Digita Área da Cidade: ");
    scanf("%f", &area_cidade);

    printf("Pib da Cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico);

    printf("CARTA 02\n");

    printf(" Estado: %c\n Codigo da Cidade: %s\n Nome da Cidade: %s\n População: %d\n", estado, codigo_cidade, nome_cidade, populacao);
    printf(" Área da Cidade: %.2f\n Pib da Cidade: %.2f\n Número de Pontos Turísticos: %d\n", area_cidade, pib, ponto_turistico);
    return 0;
}
