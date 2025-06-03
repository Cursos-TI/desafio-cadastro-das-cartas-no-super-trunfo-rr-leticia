#include <stdio.h>

// Desafio Super Trunfo - Cadastro de Cartas


int main() {
    //Desafio Super Trunfo - Países

    char Pais1[20], Pais2[20];
    char Codigo1[4], Codigo2[4];
    char Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int pontos1, pontos2;

    /*
    Estado = Nome do País
    Código = Código da carta 
    Código da carta = Letra inicial do país e número de 01 à 04 para identificar a cidade. A combinação forma o código da carta (ex: A01, B02).
    Cidade = Nome da cidade
    População = Número total de habitantes
    Area = Area em km²
    PIB = PIB
    Pontos = Número de pontos turísticos
    */

    printf("Bem-vindo ao Desafio Super Trunfo! \n");
    printf("Tema: Países \n \n");
    printf("Para iniciar, cadastre as informações da primeira carta abaixo: \n \n");

    printf("Digite o nome do País: \n");
    scanf("%s", Pais1);

    printf("Digite o código da carta: (A inicial do país + 1 número de 01 à 04) \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o número total de habitantes da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite o valor total da área da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o valor do PIB(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);

    printf("A primeira carta foi cadastrada com sucesso! \n \n");
    printf("Para continuar, cadastre as informações da segunda carta abaixo: \n \n");

    printf("Digite o nome do País: \n");
    scanf("%s", Pais2);

    printf("Digite o código da carta: (A inicial do país + 1 número de 01 à 04) \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite o número total de habitantes da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite o valor total da área da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o valor do PIB(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    printf("As cartas foram cadastradas com sucesso! Veja a seguir: \n \n");

    //Exibição da primeira carta

    printf("Carta 1: \n");
    printf("País: %s \n", Pais1);
    printf("Código da carta: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área em km²: %.2f \n", Area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de pontos turísticos: %d \n \n", pontos1);

    //Exibição da segunda carta

    printf("Carta 2: \n");
    printf("País: %s \n", Pais2);
    printf("Código da carta: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área em km²: %.2f \n", Area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de pontos turísticos: %d \n", pontos2);


    return 0;
}
