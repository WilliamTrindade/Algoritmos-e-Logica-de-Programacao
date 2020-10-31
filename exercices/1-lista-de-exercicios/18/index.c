#include <stdio.h>
main(){
	float dolar;
	float real;
	float valor;
	printf("\n........Programa de Conversao de moeda R$ para US$ ........\n");
	
	printf("Quantos dolares voce tem ? \n");
	scanf("%f", &dolar);
	printf("Qual o valor da cotacao do dolar hoje ? \n");
	scanf("%f", &valor);
	
	printf("Voce tem R$ %.2f . ", real = dolar * valor);
}
