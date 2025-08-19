#include <stdio.h>

int main(){
    int pontos;
    int habitantes = 1232500;  
    float area = 1521.11;
    float pib = 699.28;  
    char inicial;
    char codigo;
    char cidade[20];
    float Densidade = 810.26;
    float percapita = 1762.53;
    float quociente1 = (float) habitantes / area;
    float quociente2 = (float) habitantes / pib;

    printf("Quociente: %.2f\n", quociente2);  



    printf("Quociente: %.2f\n", quociente1);  

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Digite os habitantes: \n");
    scanf("%d", &habitantes);

    printf("Digite a km: \n");
    scanf("%f", &area);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Digite a Inicial: \n");
    scanf("%s", &inicial);

    printf("Digite o Código: \n");
    scanf("%s", &codigo);

    printf("Digite a Cidade:\n");
    scanf("%s", cidade);

    

    return 0;




     

}