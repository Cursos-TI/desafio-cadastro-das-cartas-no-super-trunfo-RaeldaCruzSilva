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
    char estadoC1, estadoC2;
    char codigo_cidadeC1[10], codigo_cidadeC2[10];
    char nome_cidadeC1[15], nome_cidadeC2[15];
    int populacaoC1, populacaoC2;
    float area_cidadeC1, area_cidadeC2;
    float pibC1, pibC2;
    int ponto_turisticoC1, ponto_turisticoC2;
    float dens_populacionalC1, dens_populacionalC2;
    float pib_per_capitaC1, pib_per_capitaC2;
    float superpoderC1, superpoderC2;

    printf("CADASTRO CARTA 01\n");
    
    //nesta sessão, são capturadas as infomrações das variáveis, através da função scanf indicando os especificadores de formatos.
    //utilizamos afunção printf para especificar quais as informações são requeridas para cada variável.
    
    printf("Estado:");
    scanf("%c", &estadoC1);

    printf("Código da Cidade: ");
    scanf("%s", codigo_cidadeC1);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidadeC1);

    printf("População: ");
    scanf("%d", &populacaoC1);

    printf("Digita Área da Cidade: ");
    scanf("%f", &area_cidadeC1);

    printf("Pib da Cidade: ");
    scanf("%f", &pibC1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turisticoC1);

     //cálculo da Densidade populacional, PIB Per Capita e Superpoder.
    dens_populacionalC1 = populacaoC1 / area_cidadeC1;
    pib_per_capitaC1 = pibC1 / populacaoC1;
    superpoderC1 = populacaoC1 + area_cidadeC1 + pibC1 + ponto_turisticoC1 + pib_per_capitaC1 + (1 / dens_populacionalC1);
    
    printf("CARTA 01\n");
    //nesta seção, são impressas as informações coletadas, através da função printf.
    printf(" Estado: %c\n Codigo da Cidade: %s\n Nome da Cidade: %s\n População: %d habitantes\n", estadoC1, codigo_cidadeC1, nome_cidadeC1, populacaoC1);
    printf(" Área da Cidade: %.2f km²\n Pib da Cidade: R$ %.2f Reais\n Número de Pontos Turísticos: %d\n", area_cidadeC1, pibC1, ponto_turisticoC1);
    printf(" Densidade Populacional: %.2f Hab/km²\n", dens_populacionalC1);
    printf(" Pib per Capita: %.2f Reais/Hab\n", pib_per_capitaC1);
    printf("Super Poder: %.2f\n", superpoderC1);
    
    printf("CADASTRO CARTA 02\n");
    
    printf("Estado:");
    scanf(" %c", &estadoC2);
    printf("Código da Cidade: ");
    scanf("%s", codigo_cidadeC2);

    printf("Nome da Cidade: ");
    scanf("%s", nome_cidadeC2);

    printf("População: ");
    scanf("%d", &populacaoC2);

    printf("Digita Área da Cidade: ");
    scanf("%f", &area_cidadeC2);

    printf("Pib da Cidade: ");
    scanf("%f", &pibC2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turisticoC2);
    //cálculo da Densidade populacional, PIB Per Capita e Superpoder.
    dens_populacionalC2 = populacaoC2 / area_cidadeC2;
    pib_per_capitaC2 = pibC2 / populacaoC2;
    superpoderC2 = populacaoC2 + area_cidadeC2 + pibC2 + ponto_turisticoC2 + pib_per_capitaC2 + (1 / dens_populacionalC2);

    printf("CARTA 02\n");

    printf(" Estado: %c\n Codigo da Cidade: %s\n Nome da Cidade: %s\n População: %d Habitantes\n", estadoC2, codigo_cidadeC2, nome_cidadeC2, populacaoC2);
    printf(" Área da Cidade: %.2f km²\n Pib da Cidade: R$ %.2f Reais\n Número de Pontos Turísticos: %d\n", area_cidadeC2, pibC2, ponto_turisticoC2);
    printf(" Densidade Populacional: %.2f Hab/km²\n", dens_populacionalC2);
    printf(" Pib per Capita: %.2f Reais/Hab\n", pib_per_capitaC2);
    printf("Super Poder: %.2f\n", superpoderC2);

    //resultados do comparativo dos atributos de cada carta.
    printf("População CARTA 01 é maior que da CARTA 02? %d\n", populacaoC1 > populacaoC2);
    printf("A área da CARTA 01 é maior que da CARTA 02? %d\n", area_cidadeC1 > area_cidadeC2);
    printf("O PIB da CARTA 01 é maior que da CARTA 02: %d\n", pibC1 > pibC2);
    printf("CARTA 01 tem mais pontos Turísticos que a CARTA 02? %d\n", ponto_turisticoC1 > ponto_turisticoC2);
    printf("A CARTA 01 tem maior densidade Populacional que a CARTA 02? %d\n", dens_populacionalC1 > dens_populacionalC2);
    printf("A CARTA 01 tem maior PIB Per Capita que a CARTA 02? %d\n", pib_per_capitaC1 > pib_per_capitaC2);
    printf("A CARTA 01 tem maior Super Poder que a CARTA 02? %d\n", superpoderC1 > superpoderC2);
    
    return 0;
}


