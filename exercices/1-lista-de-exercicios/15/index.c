#include <stdio.h>
main(){
	printf("Calculo da quantidade de Litros de combustivel gasta em uma viajem!\n");
	printf("Automovel faz 12km p/ litro\n");
	
	float tempogasto;
	float velocidademedia;
	float distancia;
	float litrosusados;
	
	printf("\nQual o tempo gasto durante a viajem ?\n");
	scanf("%f", &tempogasto);
	
	printf("Qual a valocidade media durante a viajem ?\n");
	scanf("%f", &velocidademedia);
	
	distancia = tempogasto* velocidademedia;
	litrosusados = distancia/12;
	
	printf("\n:::Dados Obtidos:::\n");
	printf("\nVelocidade Media : %.2f Km/h \n", velocidademedia);
	printf("Tempo gasto na viajem : %.2f h \n", tempogasto);
	printf("Distancia percorrida : %.2f Km \n", distancia);
	printf("Quantidade de litros utilizados : %.2f l \n", litrosusados);	
}
