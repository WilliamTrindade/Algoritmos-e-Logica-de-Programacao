#include <stdio.h>
main(){
	char letra;
	printf("Digite uma letra : \n");
	scanf("%c", &letra);
	if(letra == 'a' || letra == 'b' || letra == 'c'){
		printf("passou \n");
	}else{
		printf("Nao passou \n");
	}	
}
