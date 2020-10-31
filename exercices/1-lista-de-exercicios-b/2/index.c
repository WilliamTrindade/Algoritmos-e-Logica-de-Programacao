#include <stdio.h>
main(){
	float paes;
	float broas;
	float total;
	int qtdpaes;
	int qtdbroas;
	float porcentagem;
	
	paes = 0.12;
	broas = 1.50;
	printf("Padaria Hotpao \n");
	printf("Quantos paes foram vendidos hoje ? \n");
	scanf("%d", &qtdpaes);
	printf("Quantas broas foram vendidas hoje ? \n");
	scanf("%d", &qtdbroas);
	total = (qtdpaes * paes) + (qtdbroas * broas);	
	porcentagem = (total * 10) / 100;
	
	printf("Voce arrecadou um total de R$ %.2f \n", total);
	printf("Voce de guardar R$ %.2f na poupanca \n", porcentagem);
}
