#include<stdio.h>
main(){
	int i, j;
	int mata[4][5] = {};
	int vetb[4] = {}, soma;
	for(i=0;i<4;i++){
		printf("\tDigite os elemento da linha %d da Matriz A\n", i+1);
		for(j=0;j<5;j++){
			scanf("  %d", &mata[i][j]);
		}
		system("cls");
	}
	printf("\tMatriz A \n\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("  %d", mata[i][j]);
			vetb[i] += mata[i][j];
		}
		printf("\n");		
	}
	printf("\tSoma de cada linha da Matriz A \n\n");
	for(i=0;i<4;i++){
			printf("  %d\n", vetb[i]);
			soma += vetb[i];
	}
	printf("\tSoma dos elementos do Vetor B \n\n");
	printf("  %d\n", soma);
}
