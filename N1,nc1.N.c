#include <stdio.h>

int main(){

    int escolhacarta1, escolhacarta2;
    int pontos1 = 50, pontos2 = 30;
    int habitantes1 = 1232500, habitantes2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;  
    float densidade1 = 1810.26, densidade2 = 15622.16;
    float percapita1 = 1762.53, percapita2 = 22455.91;
    float superpoder1 = 1234770.38, superpoder2 = 6749530.50;

    printf("*** São Paulo VS Rio de Janeiro *** /n");
    printf("Escolha uma opção: \n");
    printf("1. Pontos Turísticos  \n");
    printf("2. Habitantes  \n");
    printf("3. Área Km  \n");
    printf("4. Pib  \n");
    printf("5. Densidade Populacinal  \n");
    printf("6. Percapita  \n");
    printf("7. Super Poder  \n");
    scanf("%d", &escolhacarta1);

    printf("*** São Paulo VS Rio de Janeiro *** \n");
    printf("Escolha uma opção: \n");
    printf("1. Pontos Turísticos  \n");
    printf("2. Habitantes  \n");
    printf("3. Área Km  \n");
    printf("4. PIB  \n");
    printf("5. Densidade Populacinal  \n");
    printf("6. Percapita  \n");
    printf("7. Super Poder  \n");
    scanf("%d", &escolhacarta2);

    switch (escolhacarta1)
    {
    case 1:
      printf("Carta 1 SP: Pontos Turísticos \n");
      break;
    case 2:
      printf("Carta 1 SP: Habitantes \n");
      break;
    case 3:
      printf("Carta 1 SP: Área Km \n");
      break;
    case 4:
      printf("Carta 1 SP: PIB \n");
      break;
    case 5:
      printf("Carta 1 SP: Densidade Populacinal \n");
      break;
    case 6:
      printf("Carta 1 SP: Percapita \n");
      break;
    case 7:
      printf("Carta 1 SP: Super Poder \n");
      break;
    default:
      printf("Opção Inválida \n");
    }

    switch (escolhacarta2)
    {
    case 1:
      printf("Carta 2 RJ: Pontos Turísticos \n");
      break;
    case 2:
      printf("Carta 2 RJ: Habitantes \n");
      break;
    case 3:
      printf("Carta 2 RJ: Área Km \n");
      break;
    case 4:
      printf("Carta 2 RJ: PIB \n");
      break;
    case 5:
      printf("Carta 2 RJ: Densidade Populacinal \n");
      break;
    case 6:
      printf("Carta 2 RJ: Percapita \n");
      break;
    case 7:
      printf("Carta 2 RJ: Super Poder \n");
      break;
    default:
      printf("Opção Inválida \n");
    }

    if ((pontos1 == pontos2) && (pontos1 == habitantes2) ||
        (pontos1 == area2) && (pontos1 == pib2) || (pontos1 == densidade2)
     && (pontos1 == percapita2) || (pontos1 == superpoder2))
    {
        printf("### Jogo Empatou ### \n");
    } else if ((pontos1 > pontos2) && (pontos1 > habitantes2) ||
        (pontos1 > area2) && (pontos1 > pib2) || (pontos1 > densidade2)
     && (pontos1 > percapita2) || (pontos1 > superpoder2))
    {
        printf("### Carta 1, São Paulo Venceu! ### \n");
    } else if ((habitantes1 == habitantes2) && (habitantes1 == pontos2) ||
        (habitantes1 == area2) && (habitantes1 == pib2) || (habitantes1 == densidade2)
     && (habitantes1 == percapita2) || (habitantes1 == superpoder2))
    {
        printf("### Jogo Empatou ### \n");
    } else if ((habitantes1 > pontos2) && (habitantes1 > habitantes2) ||
        (habitantes1 > area2) && (habitantes1 > pib2) || (habitantes1 > densidade2)
     && (habitantes1 > percapita2) || (habitantes1 > superpoder2))
    {
        printf("### Carta 1, São Paulo Venceu! ### \n");
    } else if ((area1 == pontos2) && (area1 == habitantes2) ||
        (area1 == area2) && (area1 == pib2) || (area1 == densidade2)
     && (area1 == percapita2) || (area1 == superpoder2))
    {
        printf("### Jogo Empatou ### \n");
    } else if ((area1 > pontos2) && (area1 > habitantes2) ||
        (area1 > area2) && (area1 > pib2) || (area1 > densidade2)
     && (area1 > percapita2) || (area1 > superpoder2))
    {
      printf("### Carta 1, São Paulo Venceu! ### \n");
    } else if ((pib1 == pontos2) && (pib1 == habitantes2) ||
        (pib1 == area2) && (pib1 == pib2) || (pib1 == densidade2)
     && (pib1 == percapita2) || (pib1 == superpoder2))
    {
      printf("### Jogo Empatou ### \n");
    } else if ((pib1 > pontos2) && (pib1 > habitantes2) ||
        (pib1 > area2) && (pib1 > pib2) || (pib1 > densidade2)
     && (pib1 > percapita2) || (pib1 > superpoder2))
     {
      printf("### Carta 1, São Paulo Venceu! ### \n");
     } else if ((densidade1 == pontos2) && (densidade1 == habitantes2) ||
        (densidade1 == area2) && (densidade1 == pib2) || (densidade1 == densidade2)
     && (densidade1 == percapita2) || (densidade1 == superpoder2))
     {
       printf("### Jogo Empatou ### \n");
     } else if ((densidade1 > pontos2) && (densidade1 > habitantes2) ||
        (densidade1 > area2) && (densidade1 > pib2) || (densidade1 < densidade2)
     && (densidade1 > percapita2) || (densidade1 > superpoder2))
     {
       printf("### Carta 1, São Paulo Venceu! ### \n");
     } else if ((percapita1 == pontos2) && (percapita1 == habitantes2) ||
        (percapita1 == area2) && (percapita1 == pib2) || (percapita1 == densidade2)
     && (percapita1 == percapita2) || (percapita1 == superpoder2))
     {
       printf("### Jogo Empatou ### \n");
     } else if ((percapita1 > pontos2) && (percapita1 > habitantes2) ||
        (percapita1 > area2) && (percapita1 > pib2) || (percapita1 > densidade2)
     && (percapita1 > percapita2) || (percapita1 > superpoder2))
     {
       printf("### Carta 1, São Paulo Venceu! ### \n");
     } else if ((superpoder1 == pontos2) && (superpoder1 == habitantes2) ||
        (superpoder1 == area2) && (superpoder1 == pib2) || (superpoder1 == densidade2)
     && (superpoder1 == percapita2) || (superpoder1 == superpoder2))
     {
       printf("### Jogo Empatou ### \n");
     } else if ((superpoder1 > pontos2) && (superpoder1 > habitantes2) ||
        (superpoder1 > area2) && (superpoder1 > pib2) || (superpoder1 > densidade2)
     && (superpoder1 > percapita2) || (superpoder1 > superpoder2))
     {
       printf("### Carta 1, São Paulo Venceu! ### \n");
     } else {
       printf("### Carta 2, Rio de Janeiro Venceu! ### \n");
     }
  }