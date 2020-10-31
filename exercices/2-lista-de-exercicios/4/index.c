#include<stdio.h>
main(){
	int n;
	printf("Digite um numero inteiro \n");
	scanf("%d",&n) && n%7==0 ? printf("Ele é totalmente divisivel por 7!") : printf("Ele não é totalmente divisivel por 7!");
}
