#include <stdio.h>
#include <string.h>

struct Carta {
    char estado;                        // Estado (A-H)
    char codigo[4];                     // Código (ex: A01)
    char nomeCidade[50];                // Nome da cidade
    int populacao, pontosTuristicos;    // População, Número de pontos turísticos      
    float area, pib;                    // Área em km² e PIB
};

// Função para remover o '\n' do fgets
void removerQuebraLinha(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    struct Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta1.estado);
    getchar(); // limpa o '\n' do buffer

    printf("Digite o código da carta (ex: A01): ");
    fgets(carta1.codigo, sizeof(carta1.codigo), stdin);
    removerQuebraLinha(carta1.codigo);

    printf("Digite o nome da cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    removerQuebraLinha(carta1.nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    getchar(); // limpa o buffer para a próxima carta

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta2.estado);
    getchar();

    printf("Digite o código da carta (ex: B03): ");
    fgets(carta2.codigo, sizeof(carta2.codigo), stdin);
    removerQuebraLinha(carta2.codigo);

    printf("Digite o nome da cidade: ");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    removerQuebraLinha(carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
