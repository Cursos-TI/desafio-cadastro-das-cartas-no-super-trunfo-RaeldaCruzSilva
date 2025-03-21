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
    //Iniciamos o código com a declaração das variáveis, definindo o tipo de cada uma.
    char estado;
    char codigo_cidade[10];
    char nome_cidade[15];
    int populacao;
    float area_cidade;
    float pib;
    int ponto_turistico;
    float dens_populacional;
    float pib_per_capita;

    printf("CADASTRO CARTA 01\n");
    
    //nesta sessão, são capturadas as infomrações das variáveis, através da função scanf indicando os especificadores de formatos.
    //utilizamos afunção printf para especificar quais as informações são requeridas para cada variável.
    
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
    //cálculo da densidade populacional, com a divisão do número de habitantes pela área da cidade
    dens_populacional = populacao / area_cidade;

    pib_per_capita = pib / populacao;
    
    printf("CARTA 01\n");
    //nesta seção, são impressas as informações coletadas, através da função printf.
    printf(" Estado: %c\n Codigo da Cidade: %s\n Nome da Cidade: %s\n População: %d habitantes\n", estado, codigo_cidade, nome_cidade, populacao);
    printf(" Área da Cidade: %.2f km²\n Pib da Cidade: R$ %.2f Reais\n Número de Pontos Turísticos: %d\n", area_cidade, pib, ponto_turistico);
    printf(" Densidade Populacional: %.2f\n", dens_populacional);
    printf(" Pib per Capita: %.2f\n", pib_per_capita);

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

    dens_populacional = populacao / area_cidade;
    pib_per_capita = pib / populacao;

    printf("CARTA 02\n");

    printf(" Estado: %c\n Codigo da Cidade: %s\n Nome da Cidade: %s\n População: %d Habitantes\n", estado, codigo_cidade, nome_cidade, populacao);
    printf(" Área da Cidade: %.2f km²\n Pib da Cidade: R$ %.2f Reais\n Número de Pontos Turísticos: %d\n", area_cidade, pib, ponto_turistico);
    printf(" Densidade Populacional: %.2f\n", dens_populacional);
    printf(" Pib per Capita: %.2f\n", pib_per_capita);
    
    return 0;
}
