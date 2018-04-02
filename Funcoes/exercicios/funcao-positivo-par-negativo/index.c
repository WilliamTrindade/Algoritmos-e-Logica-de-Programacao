#include<stdio.h>
main(){
	verifica(0);
}
verifica(n){
	if(n>0){
		if(n%2==0){
			printf("POSITIVO E PAR \n");
		}else{
			printf("IMPAR \n");
		}
	}else if(n==0){
		printf("ZERO E PAR \n");
	}else{
		printf("NEGATIVO \n");
	}
}
