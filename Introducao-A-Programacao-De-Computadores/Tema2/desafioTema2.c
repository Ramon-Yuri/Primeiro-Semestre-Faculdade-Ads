#include <stdio.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    char nome[50];        
    int populacao;        
    float area;           
    float pib;            
    int pontos_turisticos;
} Cidade;

// Função para calcular densidade populacional
float calcularDensidade(Cidade c) {
    return c.populacao / c.area;
}

// Função para calcular PIB per capita
float calcularPibPerCapita(Cidade c) {
    return c.pib / c.populacao;
}

int main() {
    Cidade cidades[2];
    printf("Cadastro de Cartas - Super Trunfo\n");
    
    // Cadastro das cidades
    for (int i = 0; i < 2; i++) {
        printf("\n== Cadastro da Cidade %d ==\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", cidades[i].nome);
        printf("População: ");
        scanf("%d", &cidades[i].populacao);
        printf("Área (em km2): ");
        scanf("%f", &cidades[i].area);
        printf("PIB (em milhões): ");
        scanf("%f", &cidades[i].pib);
        printf("Pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }
    
    // Escolha do atributo para comparação
    int atributo;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional (menor vence)\n6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &atributo);
    
    printf("\nComparando %s vs %s\n", cidades[0].nome, cidades[1].nome);
    
    if (atributo == 1) {
        if (cidades[0].populacao > cidades[1].populacao)
            printf("Vencedor: %s\n", cidades[0].nome);
        else if (cidades[0].populacao < cidades[1].populacao)
            printf("Vencedor: %s\n", cidades[1].nome);
        else
            printf("Empate!\n");
    } else if (atributo == 2) {
        if (cidades[0].area > cidades[1].area)
            printf("Vencedor: %s\n", cidades[0].nome);
        else if (cidades[0].area < cidades[1].area)
            printf("Vencedor: %s\n", cidades[1].nome);
        else
            printf("Empate!\n");
    } else if (atributo == 3) {
        if (cidades[0].pib > cidades[1].pib)
            printf("Vencedor: %s\n", cidades[0].nome);
        else if (cidades[0].pib < cidades[1].pib)
            printf("Vencedor: %s\n", cidades[1].nome);
        else
            printf("Empate!\n");
    } else if (atributo == 4) {
        if (cidades[0].pontos_turisticos > cidades[1].pontos_turisticos)
            printf("Vencedor: %s\n", cidades[0].nome);
        else if (cidades[0].pontos_turisticos < cidades[1].pontos_turisticos)
            printf("Vencedor: %s\n", cidades[1].nome);
        else
            printf("Empate!\n");
    } else if (atributo == 5) {
        float dens1 = calcularDensidade(cidades[0]);
        float dens2 = calcularDensidade(cidades[1]);
        if (dens1 < dens2)
            printf("Vencedor: %s\n", cidades[0].nome);
        else if (dens1 > dens2)
            printf("Vencedor: %s\n", cidades[1].nome);
        else
            printf("Empate!\n");
    } else if (atributo == 6) {
        float pib1 = calcularPibPerCapita(cidades[0]);
        float pib2 = calcularPibPerCapita(cidades[1]);
        if (pib1 > pib2)
            printf("Vencedor: %s\n", cidades[0].nome);
        else if (pib1 < pib2)
            printf("Vencedor: %s\n", cidades[1].nome);
        else
            printf("Empate!\n");
    } else {
        printf("Opção inválida!\n");
    }
    
    return 0;
}
