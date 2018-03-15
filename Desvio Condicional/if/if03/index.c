#include <stdio.h>
main(){
	int v1;
	printf("Digite o valor \n");
	scanf("%d", &v1);
	if(v1 > 0){
		printf("POSITIVO \n");
	}
	if(v1 < 0 ){
		printf("NEGATIVO \n");
	}
	system("pause");
}
