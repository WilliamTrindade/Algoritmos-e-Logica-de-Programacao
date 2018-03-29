#include<stdio.h>
main(){
	soma();
}
soma(){
	int a, b, r;
	printf("Informe o valor de a \n");
	scanf("%d", &a);
	printf("Informe o valor de b \n");
	scanf("%d", &b);
	
	r=a+b;
	
	printf("Resultado da Soma: %d \n", r);
	system("pause");	
}
