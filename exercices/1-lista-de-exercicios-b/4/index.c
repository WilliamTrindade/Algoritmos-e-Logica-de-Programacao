#include <stdio.h>
#include <stdlib.h>
main(){
	float preco;
	float valor;
	printf("Qual preco da gasolina? \n");
	scanf("%f", &preco);
	printf("Qual valor colocado ? \n");
	scanf("%f", &valor);
	printf("Voce conseguio colocar %.2f litros",valor/preco);
}
