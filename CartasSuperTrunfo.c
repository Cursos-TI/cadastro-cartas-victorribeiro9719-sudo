#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1; //variável do tipo char para um letra
    char CodigoCarta1[4]; //variável do tipo char para string de até 3 caracteres
    char NomeCidade1[50]; //variável do tipo char para string de até 49 caracteres
    int Populacao1; //variável do tipo inteiro
    float AreaCidade1; //variável do tipo ponto flutuante
    float PIBCidade1; //idem
    int PontosTuristicos1; //variável do tipo inteiro

    char Estado2;
    char CodigoCarta2[4];
    char NomeCidade2[50];
    int Populacao2;
    float AreaCidade2;
    float PIBCidade2;
    int PontosTuristicos2;
  // Área para entrada de dados
printf("\n ===== Carta 1: =====\n"); //simples espaçador gráfico


    printf("Escolha uma letra entre 'A' a 'H': "); //saída de comando
    scanf(" %c", &Estado1); //entrada de valor

    printf("Insira um numero de 01 a 04: ");
    scanf("%s", CodigoCarta1);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(NomeCidade1, 50, stdin); //entrada de valor específica para strings com espaços entre as palavras

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%i", &Populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &AreaCidade1);

    printf("Digite o valor do PIB da cidade: ");
    scanf("%f", &PIBCidade1);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%i", &PontosTuristicos1);



    printf("\n ===== Carta 2: ===== \n");



    printf("Escolha uma letra entre A e H: ");
    scanf(" %c", &Estado2);

    printf("Insira um numero de 01 a 04: ");
    scanf("%s", CodigoCarta2);

    getchar(); //zerar o buffer do char que pode estar sobrando na memória para inicializar o fgets abaixo

    printf("Digite o nome da cidade: ");
    fgets(NomeCidade2,50,stdin);

    printf("Digite o numero de habitantes: ");
    scanf("%i", &Populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &AreaCidade2);

    printf("Digite o valor do PIB da cidade: ");
    scanf("%f", &PIBCidade2);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%i", &PontosTuristicos2);

  // Área para exibição dos dados da cidade

    printf("\n ===== Informacoes da Carta 1: =====\n");


    printf("Estado: %c\n", Estado1); //apresentação de informações recolhidas acima
    printf("Codigo: %c%s\n", Estado1, CodigoCarta1);
    printf("Nome da Cidade: %s", NomeCidade1);
    printf("Populacao: %i\n", Populacao1);
    printf("Area: %.2fkm2\n", AreaCidade1); //%.2f limita a apresentação das casas decimais a duas dezenas
    printf("PIB: %.2f bilhoes de reais\n", PIBCidade1);
    printf("Numeros de Pontos Turisticos: %i\n", PontosTuristicos1);
    

    printf("\n ===== Informacoes da Carta 2: =====\n");


    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da Cidade: %s", NomeCidade2);
    printf("Populacao: %i\n", Populacao2);
    printf("Area: %.2fkm2\n", AreaCidade2);
    printf("PIB: %.2f bilhoes de reais\n", PIBCidade2);
    printf("Numeros de Pontos Turisticos: %i\n", PontosTuristicos2);


return 0;
} 
