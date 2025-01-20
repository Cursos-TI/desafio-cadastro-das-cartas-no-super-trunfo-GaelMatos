#include <stdio.h>

int main() {

    // Variáveis para armazenar os dados de cada cidade
    char estado;
    int cidade;
    int populacao;  
    float area, pib;
    int pontos_turisticos;

    // Informações para a carta A01
    printf("Cadastro da 1ª Carta de Cidade\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);  
    printf("Digite a área (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("--- Carta de Cidade 1 --- Estado: %c Cidade: %d População: %d Área: %.2f km² PIB: %.2f Pontos turísticos: %d\n", 
           estado, cidade, populacao, area, pib, pontos_turisticos);

    // Informações para a carta A02
    printf("\nCadastro da 2ª Carta de Cidade\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);  // População como int
    printf("Digite a área (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("--- Carta de Cidade 2 --- Estado: %c Cidade: %d População: %d Área: %.2f km² PIB: %.2f Pontos turísticos: %d\n", 
           estado, cidade, populacao, area, pib, pontos_turisticos);

    // Informações para a carta A03
    printf("\nCadastro da 3ª Carta de Cidade\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);  
    printf("Digite a área (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("--- Carta de Cidade 3 --- Estado: %c Cidade: %d População: %d Área: %.2f km² PIB: %.2f Pontos turísticos: %d\n", 
           estado, cidade, populacao, area, pib, pontos_turisticos);

    // Informações para a carta A04
    printf("\nCadastro da 4ª Carta de Cidade\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);  
    printf("Digite a área (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("--- Carta de Cidade  --- Estado: %c Cidade: %d População: %d Área: %.2f km² PIB: %.2f Pontos turísticos: %d\n", 
           estado, cidade, populacao, area, pib, pontos_turisticos);

    return 0;
}
