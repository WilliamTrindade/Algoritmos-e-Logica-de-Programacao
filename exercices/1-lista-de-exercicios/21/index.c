#include <stdio.h>
#include <math.h>
main(){
	float valor;
	float porcentagem;
	printf("Qual seu salario do trabalhador ? \n");
	scanf("%f", &valor);
	printf("Qual o valor do percentual de reajuste a ser atribuido? \n");
	scanf("%f", &porcentagem);
	printf("O novo salario e : R$ %.2f \n", valor = valor + (valor * porcentagem / 100) );
	system("pause");
}
