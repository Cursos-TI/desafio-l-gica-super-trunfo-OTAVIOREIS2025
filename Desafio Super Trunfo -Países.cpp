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