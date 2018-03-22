#include<stdio.h>

main(){
	int numero, p;
	printf("Digite um Numero: \n");
	scanf("%d", &numero);
	p = numero % 2;
	p == 0 ? printf("numero par") : printf("numero impar");
}
