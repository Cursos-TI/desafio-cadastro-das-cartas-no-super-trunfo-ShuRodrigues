#include <stdio.h>

int main() {
    int NumPontosTuristicos, Populacao, NumPontosTuristicos2, Populacao2;
    float Area, PIB, Area2, PIB2;
    char Nome[100], Estado[50], CodigodaCidade[100], Nome2[100], Estado2[50], CodigodaCidade2[100];

    printf("Ola. Agora vamos cadastrar as informações da cartas.\nNos Campos: TAMANHO DA POPULAÇÃO, AREA TOTAL DA CIDADE, PIB DA CIDADE e NUMERO DE PONTOS TURISTICOS, preencha somente com Numeros e pontos. \n");
    printf("\n");

    // Primeira Carta
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf(" %s", Estado);
    printf("\n");

    printf("Código Da Cidade: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", CodigodaCidade);
    printf("\n");

    printf("Nome Da Cidade: \n");
    scanf("%s", Nome);
    printf("\n");

    printf("Tamanho Da População: \n");
    scanf("%d", &Populacao);
    printf("\n");

    printf("Area Total Da Cidade: \n");
    scanf("%f", &Area);
    printf("\n");

    printf("PIB Da Cidade: \n");
    scanf("%f", &PIB);
    printf("\n");

    printf("Numero De Pontos Turisticos: \n");
    scanf("%d", &NumPontosTuristicos);
    printf("\n");

    printf("Resultado Final Da Primeira Carta: \n");
    printf("\n");

    printf("Estado: %s\n", Estado); 
    printf("Código Da Cidade: %s\n", CodigodaCidade);
    printf("Nome Da Cidade: %s\n", Nome);
    printf("Tamanho Da População: %d\n", Populacao);
    printf("Area Total Da Cidade: %.3f km²\n", Area);
    printf("PIB Da Cidade: R$%.3f\n", PIB);
    printf("Numero De Pontos Turisticos: %d\n", NumPontosTuristicos); 

    
    printf("\n");

    //Segunda Carta
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf(" %s", Estado2);
    printf("\n");

    printf("Código Da Cidade: (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03))\n");
    scanf("%s", CodigodaCidade2);
    printf("\n");

    printf("Nome Da Cidade: \n");
    scanf("%s", Nome2);
    printf("\n");

    printf("Tamanho Da População: \n");
    scanf("%d", &Populacao2);
    printf("\n");

    printf("Area Total Da Cidade: \n");
    scanf("%f", &Area2);
    printf("\n");

    printf("PIB Da Cidade: \n");
    scanf("%f", &PIB2);
    printf("\n");

    printf("Numero De Pontos Turisticos: \n");
    scanf("%d", &NumPontosTuristicos2);
    printf("\n");

    printf("Resultado Final Da Primeira Carta: \n");
    printf("\n");
    printf("Estado: %s\n", Estado2); 
    printf("Código Da Cidade: %s\n", CodigodaCidade2);
    printf("Nome Da Cidade: %s\n", Nome2);
    printf("Tamanho Da População: %d\n", Populacao2);
    printf("Area Total Da Cidade: %.3f km²\n", Area2);
    printf("PIB Da Cidade: R$%.3f\n", PIB2);
    printf("Numero De Pontos Turisticos: %d\n", NumPontosTuristicos2); 

    
    printf("\n");

    //Agora basicamente é só copiar o colar o código conforme a quantidade necessária de cartas. 




    return 0;
}
