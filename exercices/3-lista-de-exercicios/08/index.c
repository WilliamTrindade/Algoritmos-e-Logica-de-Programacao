#include<stdio.h>
main(){
	int j, i=0;
	float soma,n1, n2, n3;
	printf("\n SERIE DE FIBONACCI \n");
	while(i==0){
		if(j<2){
			soma = 0.1;
			n1 = 0.1;
			n2=0.1;
		}else{
			soma = n1 + n2;
			n3 = n1;
			n1 = soma;
			n2 = n3;
		}
		j++;
		printf(" %d : %.1f \n", j, soma);
		system("pause");
		system("cls");
	}
}
