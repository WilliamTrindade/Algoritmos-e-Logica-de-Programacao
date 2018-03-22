#include<stdio.h>

main(){
	int numero, p;
	printf("Digite um Numero: \n");
	scanf("%d", &numero);
	numero % 2 == 0 ? printf("numero par") : printf("numero impar");
}
