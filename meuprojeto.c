#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(Carta c) {
    return c.populacao / c.area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(Carta c) {
    return c.pib / c.populacao;
}

// Função para comparar duas cartas com base em um atributo
void compararCartas(Carta c1, Carta c2) {
    // Escolha do atributo para comparação (altere conforme necessário)
    char atributo[] = "PIB per capita";
    float valor1 = calcularPIBPerCapita(c1);
    float valor2 = calcularPIBPerCapita(c2);
    
    printf("\nComparação de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%s): %.2f\n", c1.nome, c1.estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", c2.nome, c2.estado, valor2);
    
    if (valor1 > valor2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", c1.nome);
    } else if (valor2 > valor1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", c2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

int main() {
    // Definição de duas cartas pré-cadastradas
    Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.0, 2200000000000.0, 50};
    Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6000000, 1200.0, 1400000000000.0, 40};
    
    // Chamar a função de comparação
    compararCartas(carta1, carta2);
    
    return 0;
}
