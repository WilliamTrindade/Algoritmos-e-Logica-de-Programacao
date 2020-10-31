#include <stdio.h>
main(){
	float volume;
	float altura;
	float comprimento;
	float largura;
	
	printf("\n::::::Programa de Calculo de volume de uma caixa retangular:::::\n");
	printf("Qual a comprimento da caixa?\n");
	scanf("%f", &comprimento);	
	printf("Qual a largura da caixa?\n");
	scanf("%f", &largura);
	printf("Qual a altura da caixa?\n");
	scanf("%f", &altura);
	printf("O volume da caixa e : %.2f cm³ \n", volume = comprimento * largura * altura);
	system("pause");	
}
