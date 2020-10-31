#include <stdio.h>
main(){
	int n;
	printf("Digite um numero interiro \n");
	scanf("%d", &n);
	
	if (n%2==0){
		printf("O numero e par ");
		if(n%3==0){
			printf("e totalmente divisivel por 3");
		}
	}else{
		printf("Ele nao e par");
	}
}
