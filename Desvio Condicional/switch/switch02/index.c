#include <stdio.h>
#include <stdlib.h>
main(){
	int sexo;
	float h, peso;
  	
  	printf("1. Masculino \n");
	printf("2. Feminino \n");
	scanf("%d", &sexo);
	
	printf("Digite sua Altura \n");
	scanf("%f", &h);
	
	switch(sexo){
		case 1: {
			peso = (72.7 * h) - 58;
			printf("Peso ideal %.2f", peso);
			break;
		}
		case 2:{
			peso = (62.1 * h) - 44;
			printf("Peso ideal %.2f", peso);
			break;
		}
		default:{
			printf("Respeito sua Opinião!");
		}
	}
}
