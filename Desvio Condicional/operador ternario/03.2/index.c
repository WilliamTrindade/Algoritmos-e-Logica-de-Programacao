#include<stdio.h>
main(){
	float salario;
	printf("Qual seu salario \n");	
	scanf("%f", &salario) && salario <= 2000 ? printf("Seu salario e: %.2f", salario+=500) :  printf("Seu salario e: %.2f", salario+=200);
}
