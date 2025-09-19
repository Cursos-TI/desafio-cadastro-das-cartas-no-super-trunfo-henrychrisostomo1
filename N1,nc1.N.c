#include <stdio.h>

int main(){

    /*int escolhacarta1, escolhacarta2;
    int pontos1 = 50, pontos2 = 30;
    int habitantes1 = 1232500, habitantes2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;  
    float densidade1 = 1810.26, densidade2 = 15622.16;
    float percapita1 = 1762.53, percapita2 = 22455.91;
    float superpoder1 = 1234770.38, superpoder2 = 6749530.50;88 */

     int resultado1, resultado2;
     char primeiroAtributo, segundoAtributo;
     int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2, superpoder1, superpoder2

     ataque1 = 1; 

     // Inicio do Jogo
     printf("Bem- Vind ao jogo! \n");
     printf("Escolha o primeiro Atributo. \n");
     printf("A. Ataque \n");
     printf("D. Defesa \n");
     printf("R. Recuo \n");
     printf("S. Super Poder \n");

     printf("Escolha a comparação: \n");
     scanf("%c", &primeiroAtributo);

     switch (primeiroAtributo)
     {
     case 'A':
     case 'a':
         printf("Você escolheu a opção Ataque! \n");
         resultado1 = ataque1 > ataque2 ? 1 : 0;
         break;
     case 'D':
     case 'd':
         printf("Você escolheu a opção Defesa! \n");
         resultado1 = defesa1 > defesa2 ? 1 : 0;
         break;
    case 'R':
    case 'r':
         printf("Você escolheu a opção Recuo! \n");
         resultado1 = recuo1 > recuo2 ? 1 : 0;
         break;
    case 'S':
    case 's':
         printf("Você escolheu a opção Super Poder! \n");
         resultado1 = recuo1 > recuo2 ? 1 : 0;
         break;
    default:
         printf("Opção de Jogo Inválida \n");
         break;
     }

     printf("Escolha o segundo Atributo. \n");
     printf("Atenção: Você deve escolher um atributo diferente do primeiro. \n");
     printf("A. Ataque \n");
     printf("D. Defesa \n");
     printf("R. Recuo \n");
     printf("S. Super Poder \n");

     printf("Escolha a comparação: \n");
     scanf("%c", &segundoAtributo);

     if(primeiroAtributo == segundoAtributo)
     {
         printf("Você escolheu o mesme atributo! \n");
     } else {
          switch (segundoAtributo)
          {
     case 'A':
     case 'a':
         printf("Você escolheu a opção Ataque! \n");
         resultado2 = ataque1 > ataque2 ? 1 : 0;
         break;
     case 'D':
     case 'd':
         printf("Você escolheu a opção Defesa! \n");
         resultado2 = defesa1 > defesa2 ? 1 : 0;
         break;
    case 'R':
    case 'r':
         printf("Você escolheu a opção Recuo! \n");
         resultado2 = recuo1 > recuo2 ? 1 : 0;
         break;
    case 'S':
    case 's':
         printf("Você escolheu a opção Super Poder! \n");
         resultado2 = recuo1 > recuo2 ? 1 : 0;
         break;
    default:
         printf("Opção de Jogo Inválida \n");
         break;
     }

     if (resultado1 && resultado2)
     {
        printf("***Parabéns, Carta1 São Paulo Venceu*** \n");
     } else if (resultado1 != resultado2){
         printf("Empatou! \n");
     } else {
        printf("*** Parabéns, Carta2 Rio de Janeiro venceu*** \n");
     }
      
}