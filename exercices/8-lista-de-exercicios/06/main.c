#include<stdio.h>
main(){
	int i, j, z=0;
	char ver = 1;
	float mat[4][3] = {};
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("Digite os 12 valores para a Matriz 4x3 \n");
			z++;
			printf("%d : ", z);
			scanf("%f", &mat[i][j]);
			system("cls");
		}
	}	
	while(ver == 1){
		printf("Quer verificar uma Posicao? 1 = sim | 0 = nao \n");
		scanf("%d", &ver);
		if(ver == 1){
			printf("Digite as coordenadas : \n");
			printf("Linha : ");
			scanf("%d",&i);
			printf("Coluna : ");
			scanf("%d",&j);
			printf("O Elemento da posicao %d x %d e : %.2f \n",i, j, mat[i][j]);
		}		
	}
	printf("Obrigado!");
	
}
