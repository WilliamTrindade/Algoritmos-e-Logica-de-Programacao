#include<stdio.h>
#include<string.h>
main(){
	char usuario[20] = {"Cel.Jhon"}, senha[50] = {"nasa2000"}, camposenha[50];
	printf("Digite a senha : %s ", usuario);
	gets(camposenha);
	int i, x=0;
	for(i=0; senha[i] != '\0' || camposenha[i] != '\0'; i++){
		if(camposenha[i] != senha[i]) x=1;
	}
	x==0 ? printf("senha correta") : printf("senha incorreta");
}
