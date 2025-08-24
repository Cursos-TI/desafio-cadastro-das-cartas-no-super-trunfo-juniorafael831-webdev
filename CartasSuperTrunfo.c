#include <stdio.h>

// Declaração das Variaveis
struct Cidade {
    char Estado;
    char Carta[10];
    char Codigo[10];
    char Nome[50];
    int Habitantes;
    float Area;
    float PIB;   // PIB em bilhões
    int Pontos;
};

int main() {
    struct Cidade c1, c2;

    // ---- Cadastro da primeira cidade ----
    printf("Digite o Estado em uma letra: ");
    scanf(" %c", &c1.Estado);

    printf("Digite a Carta em apenas um numero: ");
    scanf("%s", c1.Carta);

    printf("Digite o Codigo da carta: ");
    scanf("%s", c1.Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", c1.Nome);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &c1.Habitantes);

    printf("Digite a Area em km²: ");
    scanf("%f", &c1.Area);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &c1.PIB);

    printf("Digite os pontos turisticos em numero: ");
    scanf("%d", &c1.Pontos);

    // ---- Cadastro da segunda cidade ----
    printf("\n--- Agora vamos cadastrar outra cidade ---\n");

    printf("Digite o Estado em uma letra: ");
    scanf(" %c", &c2.Estado);

    printf("Digite a Carta em numero: ");
    scanf("%s", c2.Carta);

    printf("Digite o Codigo da carta: ");
    scanf("%s", c2.Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", c2.Nome);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &c2.Habitantes);

    printf("Digite a Area em km²: ");
    scanf("%f", &c2.Area);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &c2.PIB);

    printf("Digite os pontos turisticos em numero: ");
    scanf("%d", &c2.Pontos);

    // ---- Calculos ----
    float densidade1 = c1.Habitantes / c1.Area;
    float pibPerCapita1 = (c1.PIB * 1000000000.0) / c1.Habitantes;

    float densidade2 = c2.Habitantes / c2.Area;
    float pibPerCapita2 = (c2.PIB * 1000000000.0) / c2.Habitantes;

    // ---- Mostrar os resultados ----
    printf("\n===== Dados Cadastrados =====\n");

    printf("\nCidade 1:\n");
    printf("Estado: %c\n", c1.Estado);
    printf("Carta: %s\n", c1.Carta);
    printf("Codigo: %s\n", c1.Codigo);
    printf("Nome: %s\n", c1.Nome);
    printf("Habitantes: %d\n", c1.Habitantes);
    printf("Area: %.2f km²\n", c1.Area);
    printf("PIB: %.2f bilhões\n", c1.PIB);
    printf("Pontos Turisticos: %d\n", c1.Pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f R$\n", pibPerCapita1);

    printf("\nCidade 2:\n");
    printf("Estado: %c\n", c2.Estado);
    printf("Carta: %s\n", c2.Carta);
    printf("Codigo: %s\n", c2.Codigo);
    printf("Nome: %s\n", c2.Nome);
    printf("Habitantes: %d\n", c2.Habitantes);
    printf("Area: %.2f km²\n", c2.Area);
    printf("PIB: %.2f bilhões\n", c2.PIB);
    printf("Pontos Turisticos: %d\n", c2.Pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f R$\n", pibPerCapita2);

    return 0;
}

