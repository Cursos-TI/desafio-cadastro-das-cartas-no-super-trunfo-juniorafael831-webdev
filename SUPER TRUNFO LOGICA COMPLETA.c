#include <stdio.h>

// Declaração da struct
struct Cidade {
    char Estado[3];       
    char Codigo[10];
    char Nome[50];
    int Habitantes;
    float Area;
    float PIB;   
    int Pontos;
    float Densidade;
    float PIBperCapita;
};

int main() {
    struct Cidade c1, c2;

    // ---- Cadastro da primeira cidade ----
    printf("Digite o Estado (sigla): ");
    scanf("%2s", c1.Estado);

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

    printf("Digite o Estado (sigla): ");
    scanf("%2s", c2.Estado);

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

    // ---- Cálculos ----
    c1.Densidade = (float)c1.Habitantes / c1.Area;
    c1.PIBperCapita = (c1.PIB * 1000000000.0f) / c1.Habitantes;

    c2.Densidade = (float)c2.Habitantes / c2.Area;
    c2.PIBperCapita = (c2.PIB * 1000000000.0f) / c2.Habitantes;

    // ---- Exibir cartas antes da escolha ----
    printf("\n===== Carta 1 =====\n");
    printf("%s (%s)\n", c1.Nome, c1.Estado);
    printf("Habitantes: %d | Área: %.2f km² | PIB: %.2f bilhões\n", c1.Habitantes, c1.Area, c1.PIB);
    printf("Pontos turísticos: %d | Densidade: %.2f hab/km² | PIB per Capita: %.2f\n",
           c1.Pontos, c1.Densidade, c1.PIBperCapita);

    printf("\n===== Carta 2 =====\n");
    printf("%s (%s)\n", c2.Nome, c2.Estado);
    printf("Habitantes: %d | Área: %.2f km² | PIB: %.2f bilhões\n", c2.Habitantes, c2.Area, c2.PIB);
    printf("Pontos turísticos: %d | Densidade: %.2f hab/km² | PIB per Capita: %.2f\n",
           c2.Pontos, c2.Densidade, c2.PIBperCapita);

    // ---- Escolha dos atributos ----
    int escolha1, escolha2;

    // Primeiro menu (mostra tudo)
    printf("\n===== Escolha o primeiro atributo =====\n");
    printf("1 - População\n");
    printf("2 - Densidade Populacional\n");
    printf("3 - PIB\n");
    printf("4 - PIB per Capita\n");
    printf("5 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha1);

    // Segundo menu (remove a opção escolhida antes)
    printf("\n===== Escolha o segundo atributo =====\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Densidade Populacional\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - PIB per Capita\n");
    if (escolha1 != 5) printf("5 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha2);

    // ---- Comparação ----
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_c1 = c1.Habitantes; valor1_c2 = c2.Habitantes; break;
        case 2: valor1_c1 = c1.Densidade;  valor1_c2 = c2.Densidade;  break;
        case 3: valor1_c1 = c1.PIB;        valor1_c2 = c2.PIB;        break;
        case 4: valor1_c1 = c1.PIBperCapita; valor1_c2 = c2.PIBperCapita; break;
        case 5: valor1_c1 = c1.Pontos;     valor1_c2 = c2.Pontos;     break;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_c1 = c1.Habitantes; valor2_c2 = c2.Habitantes; break;
        case 2: valor2_c1 = c1.Densidade;  valor2_c2 = c2.Densidade;  break;
        case 3: valor2_c1 = c1.PIB;        valor2_c2 = c2.PIB;        break;
        case 4: valor2_c1 = c1.PIBperCapita; valor2_c2 = c2.PIBperCapita; break;
        case 5: valor2_c1 = c1.Pontos;     valor2_c2 = c2.Pontos;     break;
    }

    // ---- Soma dos valores ----
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    // ---- Exibir resultados ----
    printf("\n===== RESULTADO =====\n");
    printf("%s: %.2f + %.2f = %.2f\n", c1.Nome, valor1_c1, valor2_c1, soma_c1);
    printf("%s: %.2f + %.2f = %.2f\n", c2.Nome, valor1_c2, valor2_c2, soma_c2);

    if (soma_c1 > soma_c2)
        printf("\nVencedor: %s\n", c1.Nome);
    else if (soma_c2 > soma_c1)
        printf("\nVencedor: %s\n", c2.Nome);
    else
        printf("\nEmpate!\n");

    return 0;
}
