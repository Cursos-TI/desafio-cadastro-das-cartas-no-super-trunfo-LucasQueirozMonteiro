#include <stdio.h>

int main(){

    char estado[20];
    char codigo[20], cidade[20];
    unsigned long int turismo, populacao;
    float area, pib, densidade, percapita;

    printf("Digite o nome do Estado (sem espaços): \n");
    scanf("%s", &estado);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade (sem espaços): \n");
    scanf("%s", &cidade);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);
    printf("Digite a área da cidade(Km²): \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    densidade = (float) populacao / area;
    percapita = (float) pib / populacao;
    
    printf("PIB per capita: %f \n", percapita);
    printf("Densidade Populacional: %f \n", densidade);
    printf("Estado: %s \n", estado);
    printf("Cósigo da carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("Número de habitantes: %d \n", populacao);
    printf("Pontos turísticos: %d \n", turismo);
    printf("Área da cidade: %f \n", area);
    printf("PIB: %f \n", pib);
    
    return 0;
    }