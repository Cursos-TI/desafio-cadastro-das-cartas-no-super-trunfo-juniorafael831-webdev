#include <stdio.h>

// Declaração das Variaveis
struct Cidade {
    char Estado;
    char Carta[10];
    char Codigo[10];
    char Nome[50];
    int Habitantes;
    float Area;
    float PIB;
    int Pontos;
};

int main() {
    struct Cidade c1, c2;

    // ---- Cadastro da primeira cidade ----
    printf("Digite o Estado em uma letra: ");   //Solicita que o usuario digite o estado
    scanf(" %c", &c1.Estado);                   //Usuario digita o estado via terminal



    printf("Digite a Carta em apenas um numero: ");   //Solicita que o usuario digite a carta
    scanf("%s", c1.Carta);                            //Usuario digita a carta via terminal




    printf("Digite o Codigo da carta: ");         //Solicita que o usuario digite o codigo da carta
    scanf("%s", c1.Codigo);                       //Usuario digita o codigo da carta




    printf("Digite o Nome da Cidade: ");           //Solicita que o usuario digiite o nome da cidade
    scanf(" %[^\n]", c1.Nome);                     //Usuario digita o nome da cidade



    printf("Digite o numero de habitantes: ");      //Solicita que o usuario digite o numero de habitantes
    scanf("%d", &c1.Habitantes);                    //Usuario digita o numero  de habitantes




    printf("Digite a Area em km²: ");                // Solicita que o usuario digite a area em km²
    scanf("%f", &c1.Area);                           //Usuario digita a area em km²




    printf("Digite o PIB em bilhoes: ");             //Solicita que o usuario digite o PIB
    scanf("%f", &c1.PIB);                            //Usuario digita o PIB



    
    printf("Digite os pontos turisticos em numero: ");    //Solicita que o usuario digite o numero de pontos turisticos 
    scanf("%d", &c1.Pontos);                              //Usuario digita o numero de pontos turisticos 


    // ---- Cadastro da segunda cidade ----
    printf("\n--- Agora vamos cadastrar outra cidade ---\n");       //Usei para deixar o programa mais organizado

    printf("Digite o Estado em uma letra: ");                       //Solicita que o usuario digite a letra do segundo estado
    scanf(" %c", &c2.Estado);                                       //Usuario digita a letra do segundo estado

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

    printf("Digite o PIB em bilhao: ");
    scanf("%f", &c2.PIB);

    printf("Digite os pontos turisticos em numero: ");
    scanf("%d", &c2.Pontos);


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

    printf("\nCidade 2:\n");
    printf("Estado: %c\n", c2.Estado);
    printf("Carta: %s\n", c2.Carta);
    printf("Codigo: %s\n", c2.Codigo);
    printf("Nome: %s\n", c2.Nome);
    printf("Habitantes: %d\n", c2.Habitantes);
    printf("Area: %.2f km²\n", c2.Area);
    printf("PIB: %.2f bilhões\n", c2.PIB);
    printf("Pontos Turisticos: %d\n", c2.Pontos);

    return 0;            //Encerra o Programa
}
