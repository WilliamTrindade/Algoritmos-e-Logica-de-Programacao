#include<stdio.h>
#include<string.h>
main(){
	int x = 0;
	char usuario[20] = {"Cel.Jhon"};
	char camposenha[50];
	while(x==0){
		printf("\tDigite a senha : %s \n\t", usuario);
		gets(camposenha);
		if(strlen(camposenha) > 8){
			printf("senha correta! \n");
			x=1;
			system("pause");
		}else{
			printf("senha curta demais!\n");
			system("pause");
		}
		system("cls");
	}
}
