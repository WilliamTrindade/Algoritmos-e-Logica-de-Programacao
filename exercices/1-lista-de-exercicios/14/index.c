#include <stdio.h>
#include <math.h>
main(){
	float a;
	float b;
	int aux;
	printf("Digite o Valor A \n");
	scanf("%f", &a);
	printf("Digite o Valor B \n");
	scanf("%f", &b);		
	aux=a;
	a=b;
	b=aux;	
	printf("\n O valor A e : %.2f",a);
	printf("\n O valor B e : %.2f",b);
	
}
