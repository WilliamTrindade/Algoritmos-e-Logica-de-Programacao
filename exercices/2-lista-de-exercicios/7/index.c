#include <stdio.h>
main(){
	int n1;
	int n2;
	printf("Digite 2 numeros inteiros \n");
	scanf("%d %d", &n1, &n2);
	
	if( n1%2==0 && n2%2==0 ){
		printf("OS DOIS SAO PARES");
	}else if( !(n1%2==0)&& !(n2%2==0) ) {
		printf("OS DOIS SAO IMPARES");
	}else if( n1%2==0 && !(n2%2==0) ){
		printf("O PRIMEIRO E PAR E O SEGUNDO E IMPAR");
	}else{
		printf("O PRIMEIRO E IMPAR E O SEGUNDO E PAR");
	}
}
