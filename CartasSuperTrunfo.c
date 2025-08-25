#include <stdio.h>

int main(){
    int c = 1;
    int pontos1 = 50, pontos2 = 30;
    int habitantes1 = 1232500, habitantes2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;  
    char inicial1[20] = "A", inicial2[20] = "B";
    char codigo1[20] = "A01", codigo2[20] = "B02";
    char cidade1[30] = "São Paulo", cidade2[30] = "Rio de Janeiro";
    float densidade1 = 1/810.26, densidade2 = 1/5622.16;
    float percapita1 = 1762.53, percapita2 = 22455.91;
    float superpoder1 = 1234770.38, superpoder2 = 6749530.50;

    float soma1 = pontos1 + habitantes1 + area1 + pib1 + densidade1;
    float soma2 = pontos2 + habitantes2 + area2 + pib2 + densidade2; 
 
    printf("Soma: %.2f\n", soma1);
    printf("Soma: %.2f\n", soma2);
    
    
    //Comparação de valores
    
    printf("pontos1 > pontos2:? %d\n", pontos1 > pontos2);
    printf("pontos1 < pontos2: ? %d\n", pontos1 < pontos2);
    printf("pontos1 == pontos2:? %d\n", pontos1 == pontos2);
    printf("pontos1 != pontos2:? %d\n", pontos1 != pontos2);

    printf("habitantes1 > habitantes2: ? %d\n", habitantes1 > habitantes2);
    printf("habitantes1 < habitantes2:? %d\n", habitantes1 < habitantes2);
    printf("habitantes1 == habitantes2:? %d\n", habitantes1 == habitantes2);
    printf("habitantes1 != habitantes2:? %d\n", habitantes1 != habitantes2);

    printf("Areakm1 > Areakm2:? %d\n", area1 > area2);
    printf("Areakm1 < Areakm:? %d\n", area1 < area2);
    printf("Areakm1 == Areakm2:? %d\n", area1 == area2);
    printf("Areakm1 != Areakm2:? %d\n", area1 != area2);

    printf("pib1 > pib2:? %d\n", pib1 > pib2);
    printf("pib1 < pib2:? %d\n", pib1 < pib2);
    printf("pib1 == pib2:? %d\n", pib1 == pib2);
    printf("pib1 != pib2:? %d\n", pib1 != pib2);

    printf("densidade1 > densidade2:? %d\n", densidade1 > densidade2);
    printf("densidade1 < densidade2:? %d\n", densidade1 < densidade2);
    printf("densidade1 == densidade2:? %d\n", densidade1 == densidade2);
    printf("densidade1 != densidade2:? %d\n", densidade1 != densidade2);

    printf("percapita1 > percapita2:? %d\n", percapita1 > percapita2);
    printf("percapita1 < percapita2:? %d\n", percapita1 < percapita2);
    printf("percapita1 == percapita2:? %d\n", percapita1 == percapita2);
    printf("percapita1 != percapita2:? %d\n", percapita1 != percapita2);

    printf("superpoder1 > superpoder2:? %d\n", superpoder1 > superpoder2);
    printf("superpoder1 < superpoder2:? %d\n", superpoder1 < superpoder2);
    printf("superpoder1 == superpoder2:? %d\n", superpoder1 == superpoder2);
    printf("superpoder1 != superpoder2:? %d\n", superpoder1 != superpoder2);




    
    

    

    return 0;




     

}