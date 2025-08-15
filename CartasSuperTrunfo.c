#include <stdio.h>

int main(){
    int pontos;
    int habitantes;   
    float area;
    float pib; 
    char inicial;
    char codigo;
    char cidade[20];

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Digite os habitantes: \n");
    scanf("%d", &habitantes);

    printf("Digite a área: \n");
    scanf("%f", &area); 

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Digite a Inicial: \n");
    scanf("%s", &inicial);

    printf("Digite o Código: \n");
    scanf("%s", &codigo);

    printf("Digite a Cidade:\n");
    scanf("%s", cidade);

    printf("nome da cidade: %s - inicial: %s - código da carta: %s", cidade, inicial, codigo);
    printf("pontos turísticos: %d - população: %d - km2: %f - Pib: %f", pontos, habitantes, area, pib);


    return 0;




     

}