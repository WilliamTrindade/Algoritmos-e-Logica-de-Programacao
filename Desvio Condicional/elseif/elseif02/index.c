#include <stdio.h>
#include <stdlib.h>
main(){
	int n1, n2, n3;
	
	printf("Digite o numero 1 \n");
	scanf("%d", &n1);
	printf("Digite o numero 2 \n");
	scanf("%d", &n2);
	printf("Digite o numero 3 \n");
	scanf("%d", &n3);
	
	if(n1>=n2 && n1>n3){
		printf("%d e Maior", n1);
	}else if(n2>n3){ //n2>n1 = n1>=n2
		printf("%d e Maior", n2);
	}
	else{
		printf("%d e Maior", n3);
	}
}
