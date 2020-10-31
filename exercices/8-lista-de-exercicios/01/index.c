#include <stdio.h>
main(){
	int i, j;
	int veta[4][4];
	int vetb[4][4];
	int vets[4][4];
	printf("Vetor A \n");
	printf("Digite os numeros \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d", &veta[i][j]);
		}
	}
	printf("Vetor B \n");
	printf("Digite os numeros \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d", &vetb[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			vets[j][i] = veta[j][i] + vetb[j][i];
		}
	}
	printf(" \n Soma : \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" \n %d", vets[i][j]);
		}
	}	
}
