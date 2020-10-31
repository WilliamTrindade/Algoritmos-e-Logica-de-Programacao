#include <stdio.h>
main(){
	float temperatura;
	printf("Digite sua Temperatura \n");
	scanf("%f",&temperatura);
	
	if (temperatura >= 37.5){
		printf("Esta com febre");
	}else{
		printf("Não Esta com febre");
	}
}
