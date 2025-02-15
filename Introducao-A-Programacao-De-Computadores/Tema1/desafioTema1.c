#include <stdio.h>

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[32]; // Array para armazenar as cidades
    printf("Cadastro de Cartas - Super Trunfo\n");
    // Cadastro das cidades
    for (int i = 0; i < 32; i++) {
        // Gerar o código da cidade automaticamente
        char estado = 'A' + (i / 4); // Determina a letra do estado (A, B, ..., H)
        int cidade = (i % 4) + 1;    // Determina o número da cidade no estado (1, 2, 3, 4)
        snprintf(cidades[i].codigo, sizeof(cidades[i].codigo), "%c%02d", estado, cidade);

        // Exibir o código da cidade e solicitar os dados
        printf("\n== Cadastro da Cidade %s ==\n", cidades[i].codigo);

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        printf("Área (em km2): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (em milhões): ");
        scanf("%f", &cidades[i].pib);

        printf("Pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    // Exibição das cidades cadastradas
    printf("\n=== Cartas cadastradas ===\n");
    for (int i = 0; i < 32; i++)
    {
        printf("\n== Cidade %s ==\n", cidades[i].codigo);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km2\n", cidades[i].area);
        printf("PIB: %.2f milhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0; // Fim do programa
}