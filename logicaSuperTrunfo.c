#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("**Desafio Supertrunfo**\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int carta1, carta2;
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    int area1, area2;
    float PIB1, PIB2;
    int pontos_tur1, pontos_tur2;
    float densidade_pop1, densidade_pop2;
    float PIB_percapita1, PIB_percapita2;
    float super_poder1, super_poder2;

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o númeiro da carta 1:\n");
    scanf("%d", &carta1);
    printf("Digite o estado 1:\n");
    scanf("%s", estado1);
    printf("Digite o código da carta 1:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1:\n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1:\n");
    scanf("%ld", &populacao1);
    printf("Digite a área da cidade 1:\n");
    scanf("%d", &area1);
    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos da cidade 1:\n");
    scanf("%d", &pontos_tur1);

    printf("Digite o númeiro da carta 2:\n");
    scanf("%d", &carta2);
    printf("Digite o estado 2:\n");
    scanf("%s", estado2);
    printf("Digite o código da carta 2:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2:\n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2:\n");
    scanf("%ld", &populacao2);
    printf("Digite a área da cidade 2:\n");
    scanf("%d", &area2);
    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos da cidade 2:\n");
    scanf("%d", &pontos_tur2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    densidade_pop1 = (populacao1 / area1);
    PIB_percapita1 = (PIB1 / populacao1);
    super_poder1 = (populacao1 + area1 + PIB1 + pontos_tur1 + (1 / densidade_pop1) + PIB_percapita1);

    densidade_pop2 = (populacao2 / area2);
    PIB_percapita2 = (PIB2 / populacao2);
    super_poder2 = (populacao2 + area2 + PIB2 + pontos_tur2 + (1 / densidade_pop2) + PIB_percapita2);

    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld Habitantes\n", populacao1);
    printf("Área: %d Km²\n", area1);
    printf("PIB: R$ %.2f \n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_tur1);
    printf("Densidade populacional: %.2f Hab/Km²\n", densidade_pop1);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita1);
    printf("Super Poder: %.3f\n", super_poder1);

    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld Habitantes\n", populacao2);
    printf("Área: %d Km²\n", area2);
    printf("PIB: R$ %.2f \n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_tur2);
    printf("Densidade populacional: %.2f Hab/Km²\n", densidade_pop2);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita2);
    printf("Super Poder: %.3f\n", super_poder2);

    /*
    1.Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, 
    área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

    2.Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. 
    Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.

    3.Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação 
    (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
    */

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = pontos_tur1 > pontos_tur2;
    resultado5 = densidade_pop1 < densidade_pop2;
    resultado6 = PIB_percapita1 > PIB_percapita2;
    resultado7 = super_poder1 > super_poder2;

    printf("*** Comparação Carta 1 vs Carta 2 ***\n");
    printf("** Resultado: 1 para verdadeiro – Carta 1 vence | 0 para falso – Carta 2 vence **\n");
    printf("População: %d\n", resultado1);
    printf("Área: %d\n", resultado2);
    printf("PIB: %d\n", resultado3);
    printf("Pontos Turisticos: %d\n", resultado4);
    printf("Densidade Populacional: %d\n", resultado5);
    printf("PIB percapita: %d\n", resultado6);
    printf("Super Poder: %d\n", resultado7);

    /*
    1. Comparar um atributo escolhido: Você deverá escolher apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita)
    para realizar a comparação entre as duas cartas. Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.

    2. Determinar a carta vencedora:
 
        2.1) Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
        2.2) Para Densidade Populacional, a carta com o menor valor vence.
    
    3. Exibir o resultado da comparação: O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado
    na comparação e os valores das duas cartas para aquele atributo. Exemplo:

        Comparação de cartas (Atributo: População):
 
            Carta 1 - São Paulo (SP): 12.300.000
            Carta 2 - Rio de Janeiro (RJ): 6.000.000
            Resultado: Carta 1 (São Paulo) venceu!
    */

    printf("Comparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s (%s): %ld\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %ld\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2){
        printf("Carta 1 (%s) venceu!\n", cidade1);  
    } else if (populacao1 == populacao2) {
        printf("Empate '-'\n");
    } else {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}

