#include <stdio.h>
main(){
	char letra;
	printf("Digite uma letra : \n");
	scanf("%c", &letra);
	if(letra >= 97 && letra <= 101){
		printf("passou \n");
	}else{
		printf("Errou \n");
	}	
}
