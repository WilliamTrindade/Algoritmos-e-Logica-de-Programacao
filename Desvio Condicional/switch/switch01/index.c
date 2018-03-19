#include <stdio.h>
#include <stdlib.h>
main(){
	int s;
	printf("1. Feminino \n");
	printf("2. Masculino \n");
	scanf("%d", &s);
	
	switch(s){
		case 1: {
			printf("Feminino \n");
			break;
		}
		case 2:{
			printf("Masculino \n");
			break;
		}
		default:{
			printf("valor padrao");
		}
	}
}
