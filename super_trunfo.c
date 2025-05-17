#include <stdio.h>
#include <string.h>


int main(){
	printf("--------Super Trunfo de Países--------\n");
	printf("Insira duas cartas. \n");
	
	char estado1;
	char codigo_carta1[5];
	char cidade1[30];
	int populacao1;
	int pontos_turisticos1;
	float area1; 
 	float pib1;
 	
 	char estado2;
	char codigo_carta2[5];
	char cidade2[30];
	int populacao2;
	int pontos_turisticos2;
	float area2;
	float pib2; 
	
	printf("Digite uma letra para a Carta 1:");
	scanf(" %c", &estado1);;
	
	printf("Digite outra letra para a Carta 2:");
	scanf(" %c", &estado2);
	
	printf("Digite o código da Carta 1:");
	scanf("%s",&codigo_carta1);
	
	printf("Digite o código da Carta 2:");
	scanf("%s",&codigo_carta2);
	
	getchar();
	printf("Digite o nome da primeira cidade:");
	fgets(cidade1, sizeof(cidade1), stdin);
	cidade1[strcspn(cidade1, "\n")] = '\0';
		
	printf("Digite o nome da segunda cidade:");
	fgets(cidade2, sizeof(cidade2), stdin);
	cidade2[strcspn(cidade2, "\n")] = '\0';
	
	printf("Digite o número de habitantes da primeira cidade:");
	scanf("%d", &populacao1);
	
	printf("Digite o número de habitantes da segunda cidade:");
	scanf("%d", &populacao2);
	
	printf("Digite a área em km quadrados da primeira cidade:");
	scanf("%f", &area1);
	printf("Digite a área em km quadrados da segunda cidade:");
	scanf("%f", &area2);
	
	printf("Digite o PIB da cidade da Carta 1:");
	scanf("%f", &pib1);
	
	printf("Digite o PIB da cidade da Carta 2:");
	scanf("%f", &pib2);
	
	printf("Digite a quantidade de Pontos Turísticos da cidade da Carta 1:");
	scanf("%d", &pontos_turisticos1);
	
	printf("Digite a quantidade de Pontos Turísticos da cidade da Carta 2:");
	scanf("%d", &pontos_turisticos2);
	
	
	printf("\n-----------------------------------------------------\n");
	
	printf("CARTA 1:\n");
	printf("Estado: %c\nCódigo:%s\n", estado1, codigo_carta1);
	printf("Cidade:%s\nPopulação:%d\n", cidade1, populacao1);
	printf("Área:%.2fKM²\nPIB:R$ %.2f bilhões de reais\n", area1, pib1);
	printf("Número de Pontos Turísticos:%d\n", pontos_turisticos1);
	
	printf("-----------------------------------------------------\n");
	printf("CARTA 2:\n");
	printf("Estado: %c\nCódigo:%s\n", estado2, codigo_carta2);
	printf("Cidade:%s\nPopulação:%d\n", cidade2, populacao2);
	printf("Área:%.2fKM²\nPIB:R$ %.2f bilhões de reais\n", area2, pib2);
	printf("Número de Pontos Turísticos:%d\n", pontos_turisticos2);
	
	return 0;
}
