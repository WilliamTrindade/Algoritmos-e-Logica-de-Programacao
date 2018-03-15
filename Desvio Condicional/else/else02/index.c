#include <stdio.h>
main(){
	char letra;
	printf("Digite o valor \n");
	scanf("%c", &letra);
	if(letra == 'a'){
		printf("Digitou a \n");
	}else{
		printf("Digitou outra coisa \n");
	}
	system("pause");
}
