#include <stdio.h>
#include <stdlib.h>
main(){
	int nome;
	int idade;	
	int diasamais;
	printf("Digite sua idade \n");
	scanf("%d", &idade);
	diasamais=idade/4;
	printf("voce tem %d dias vividos !", idade*365);
}
