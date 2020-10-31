#include<stdio.h>
main(){
	float distancia;
	float tempo;
	float velocidademedia;
	printf("-Digite a distancia em Km\n-e em seguida o tempo de viajem em horas \n");
	scanf("%f %f", &distancia, &tempo);
	velocidademedia = distancia/tempo;
	if(velocidademedia > 110){
		printf("A velocidade Média foi superior a 110 kh/h");
	}else{
		printf("A velocidade Média nao foi superior a 110 kh/h");
	}
}
