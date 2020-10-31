#include <stdio.h>
main(){
	/*
	P=10
	M=12
	G=15
	*/
	float qtdp;
	float qtdm;
	float qtdg;
	printf("Digite a quantidade de Camisetas Pequenas \n");
	scanf("%f", &qtdp);
	printf("Digite a quantidade de Camisetas Médias \n");
	scanf("%f", &qtdm);
	printf("Digite a quantidade de Camisetas Grandes \n");
	scanf("%f", &qtdg);
	printf("O valor arrecadado foi R$ %.2f \n ", qtdp * 10 + qtdm * 12 + qtdg * 15 );
}
