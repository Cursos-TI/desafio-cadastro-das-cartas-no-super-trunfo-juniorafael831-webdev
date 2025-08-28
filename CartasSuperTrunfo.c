#include <stdio.h>

// Declaração da struct
struct Cidade {
    //DECLARÇÃO DE VARIAVEIS. USO DO STRUCT PARA FICAR MELHOR ESTRUTURADO
    
    char Estado;
    char Carta[10];
    char Codigo[10];
    char Nome[50];
    int Habitantes;
    float Area;
    float PIB;   
    int Pontos;
    float Densidade;
    float PIBperCapita;
    float SuperPoder;
};

int main() {
    struct Cidade c1, c2;

    //CHAMA AS VARIAVEIS 

    // ---- Cadastro da primeira cidade ----
    printf("Digite o Estado em uma letra: ");
    scanf(" %c", &c1.Estado);

    printf("Digite a Carta em apenas um numero: ");
    scanf("%9s", c1.Carta);

    printf("Digite o Codigo da carta: ");
    scanf("%9s", c1.Codigo);

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
    scanf("%9s", c2.Carta);

    printf("Digite o Codigo da carta: ");
    scanf("%9s", c2.Codigo);

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

    //PARTE DOS CALCULOS 
    c1.Densidade = (float)c1.Habitantes / c1.Area;
    c1.PIBperCapita = (c1.PIB * 1000000000.0f) / c1.Habitantes;
    c1.SuperPoder = (float)c1.Habitantes + c1.Area + (c1.PIB * 1000000000.0f) + 
                    c1.Pontos + c1.PIBperCapita + (1.0f / c1.Densidade);

    c2.Densidade = (float)c2.Habitantes / c2.Area;
    c2.PIBperCapita = (c2.PIB * 1000000000.0f) / c2.Habitantes;
    c2.SuperPoder = (float)c2.Habitantes + c2.Area + (c2.PIB * 1000000000.0f) + 
                    c2.Pontos + c2.PIBperCapita + (1.0f / c2.Densidade);

    // APRESENTAÇÃO DOS RESULTADOS 
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
    printf("Densidade Populacional: %.2f hab/km²\n", c1.Densidade);
    printf("PIB per Capita: %.2f R$\n", c1.PIBperCapita);
    printf("Super Poder: %.2f\n", c1.SuperPoder);

    printf("\nCidade 2:\n");
    printf("Estado: %c\n", c2.Estado);
    printf("Carta: %s\n", c2.Carta);
    printf("Codigo: %s\n", c2.Codigo);
    printf("Nome: %s\n", c2.Nome);
    printf("Habitantes: %d\n", c2.Habitantes);
    printf("Area: %.2f km²\n", c2.Area);
    printf("PIB: %.2f bilhões\n", c2.PIB);
    printf("Pontos Turisticos: %d\n", c2.Pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", c2.Densidade);
    printf("PIB per Capita: %.2f R$\n", c2.PIBperCapita);
    printf("Super Poder: %.2f\n", c2.SuperPoder);

    // ESPAÇO PARA FAZER AS COMPARAÇÕES
    printf("\n===== Comparações =====\n");

    printf("Habitantes: %d\n", (c1.Habitantes > c2.Habitantes));
    printf("Área: %d\n", (c1.Area > c2.Area));
    printf("PIB: %d\n", (c1.PIB > c2.PIB));
    printf("Pontos Turísticos: %d\n", (c1.Pontos > c2.Pontos));
    printf("PIB per Capita: %d\n", (c1.PIBperCapita > c2.PIBperCapita));
    printf("Densidade (menor vence): %d\n", (c1.Densidade < c2.Densidade));
    printf("Super Poder: %d\n", (c1.SuperPoder > c2.SuperPoder));

    return 0;
}



