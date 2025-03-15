#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
} Carta;

// Função para comparar a população de duas cartas
void compararCartas(Carta c1, Carta c2) {
    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s: %d\n", c1.nome, c1.populacao);
    printf("Carta 2 - %s: %d\n", c2.nome, c2.populacao);
    
    if (c1.populacao > c2.populacao) {
        printf("\nResultado: %s venceu!\n", c1.nome);
    } else if (c2.populacao > c1.populacao) {
        printf("\nResultado: %s venceu!\n", c2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

int main() {
    Carta cartas[3] = {
        {"São Paulo", 12300000, 1521.0},
        {"Rio de Janeiro", 6000000, 1200.0},
        {"Belo Horizonte", 2500000, 331.0}
    };
    
    int escolha1, escolha2;
    
    printf("Escolha duas cartas para comparar:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d - %s\n", i + 1, cartas[i].nome);
    }
    
    printf("Digite o número da primeira carta: ");
    scanf("%d", &escolha1);
    printf("Digite o número da segunda carta: ");
    scanf("%d", &escolha2);
    
    compararCartas(cartas[escolha1 - 1], cartas[escolha2 - 1]);
    
    return 0;
}
