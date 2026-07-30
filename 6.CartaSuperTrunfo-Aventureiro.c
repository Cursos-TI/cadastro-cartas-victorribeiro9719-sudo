#include <stdio.h>
int main(){
// 1. Declaração de Variáveis
    // Nível Básico
    char Estado1; //variável do tipo char para um letra
    char CodigoCarta1[4]; //variável do tipo char para string de até 3 caracteres
    char NomeCidade1[50]; //variável do tipo char para string de até 49 caracteres
    int Populacao1; //variável do tipo inteiro
    float AreaCidade1; //variável do tipo ponto flutuante
    float PIBCidade1; //idem
    int PontosTuristicos1; //variável do tipo inteiro
    // Nível Aventureiro
    float DensidadePop1;
    float PIBperCap1;

    // Nível Básico
    char Estado2;
    char CodigoCarta2[4];
    char NomeCidade2[50];
    int Populacao2;
    float AreaCidade2;
    float PIBCidade2;
    int PontosTuristicos2;
    // Nível Aventureiro
    float DensidadePop2;
    float PIBperCap2;


// 2. Inserção de Valores das Cartas
    printf("\n ===== Carta 1: =====\n"); //simples espaçador gráfico


    printf("Escolha uma letra entre 'A' a 'H': "); //saída de comando
    scanf(" %c", &Estado1); // entrada de valor

    printf("Insira um número de 01 a 04: ");
    scanf("%s", CodigoCarta1);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(NomeCidade1, 50, stdin); //entrada de valor específica para strings com espaços entre as palavras

    printf("Digite o número de habitantes da cidade: ");
    scanf("%i", &Populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &AreaCidade1);

    printf("Digite o valor do PIB da cidade: ");
    scanf("%f", &PIBCidade1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &PontosTuristicos1);


    /* - - - - - - - - - - */


    printf("\n ===== Carta 2: ===== \n");


    printf("Escolha uma letra entre A e H: ");
    scanf(" %c", &Estado2);

    printf("Insira um número de 01 a 04: ");
    scanf("%s", CodigoCarta2);

    getchar(); //zerar o buffer do char que pode estar sobrando na memória para inicializar o fgets abaixo

    printf("Digite o nome da cidade: ");
    fgets(NomeCidade2,50,stdin);

    printf("Digite o número de habitantes: ");
    scanf("%i", &Populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &AreaCidade2);

    printf("Digite o valor do PIB da cidade: ");
    scanf("%f", &PIBCidade2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &PontosTuristicos2);


// 3. Apresentação dos Valores das Cartas

    printf("\n ===== Informacoes da Carta 1: =====\n");


    printf("Estado: %c\n", Estado1); //apresentação de informações recolhidas acima
    printf("Codigo: %c%s\n", Estado1, CodigoCarta1);
    printf("Nome da Cidade: %s", NomeCidade1);
    printf("Populacao: %i\n", Populacao1);
    printf("Area: %.2fkm2\n", AreaCidade1); //%.2f limita a apresentação das casas decimais a duas dezenas
    printf("PIB: %.2f bilhoes de reais\n", PIBCidade1);
    printf("Numeros de Pontos Turisticos: %i\n", PontosTuristicos1);
    // Nível Aventureiro
    DensidadePop1 = (Populacao1 / AreaCidade1); // Acima, fiz a declaração da variável; aqui, estou fazendo a atribuição de operação matemática da divisão entre variáveis.
    printf("Densidade Populacional: %.2f hab./km²\n", DensidadePop1); // Apresentação do valor com limite de até duas casas decimais.
    PIBperCap1 = (Populacao1 / PIBCidade1); 
    printf("PIB per Capita: %.2f reais\n", PIBperCap1);
    

    printf("\n ===== Informacoes da Carta 2: =====\n");


    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da Cidade: %s", NomeCidade2);
    printf("Populacao: %i\n", Populacao2);
    printf("Area: %.2fkm2\n", AreaCidade2);
    printf("PIB: %.2f bilhoes de reais\n", PIBCidade2);
    printf("Numeros de Pontos Turisticos: %i\n", PontosTuristicos2);
    // Nível Aventureiro
    DensidadePop2 = (Populacao2 / AreaCidade2);  // Acima, fiz a declaração da variável; aqui, estou fazendo a atribuição de operação matemática da divisão entre variáveis.
    printf("Densidade Populacional: %.2f hab./km²\n", DensidadePop2);// Apresentação do valor com limite de até duas casas decimais.
    PIBperCap2 = (Populacao2 / PIBCidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCap2);


    return 0; // retorne se tudo ocorrer bem
}