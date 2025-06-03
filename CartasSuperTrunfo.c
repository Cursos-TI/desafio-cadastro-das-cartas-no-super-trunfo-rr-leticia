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
    Código da carta = O país é dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4). A combinação forma o código da carta (ex: A01, B02).
    Cidade = Nome da cidade
    População = Número total de habitantes
    Area = Area em km²
    PIB = PIB
    Pontos = Número de pontos turísticos
    */

    printf("Bem-vindo ao Desafio Super Trunfo! \n");
    printf("Tema: Países \n \n");
    printf("Para iniciar, cadastre as informações da primeira carta abaixo: \n");

    printf("Digite o nome do País: \n ");
    scanf("%s", Pais1);

    printf("Digite o código da carta: (A inicial do país + 1 número de 01 à 04) \n ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n ");
    scanf("%s", Cidade1);

    printf("Digite o número total de habitantes da cidade: \n ");
    scanf("%d", &Populacao1);

    printf("Digite o valor total da área da cidade em km²: \n ");
    scanf("%f", &Area1);

    printf("Digite o valor do PIB da cidade: \n ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n ");
    scanf("%d", &pontos1);

    return 0;
}
