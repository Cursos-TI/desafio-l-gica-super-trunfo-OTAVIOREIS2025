#include <cstdio>
#include <cstring>

// Estrutura para armazenar os dados da cidade/país
struct Carta {
    char codigo[5];      // Código da carta (ex: A01)
    char nome[30];       // Nome da cidade/pais
    int populacao;       // População
    float area;          // Área em km²
    float pib;           // PIB em bilhões
};

int main() {
    Carta carta1, carta2;
    int escolha;

    printf("=== Super Trunfo - Cadastro de Cartas ===\n\n");

    // ============================
    // Cadastro da carta1
    // ============================
    printf("Digite o codigo da cidade 1: ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade/pais 1: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (km²) da cidade 1: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes) da cidade 1: ");
    scanf("%f", &carta1.pib);

    printf("\n");

     // ============================
    // Cadastro da carta2
    // ============================
    printf("Digite o codigo da cidade 2: ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade/pais 2: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Digite a populacao da cidade 2: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (km²) da cidade 2: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes) da cidade 2: ");
    scanf("%f", &carta2.pib);

    printf("\n");

