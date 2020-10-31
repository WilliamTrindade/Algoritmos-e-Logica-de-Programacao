#include<stdio.h>
main(){
	char mat[3][3] = {};
	int x, y, v, i, j, z, ganhador;
	while(ganhador == 0){
		if(ganhador == 0){
			printf("%d\n", ganhador);
			printf("\tJOGO DA VELHA 1.0 by William Trindade\n\n");
			
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("\t");
					printf("%c", mat[i][j]);
				}
				printf("\n\t\n\n");
			}
			if(v%2==0) z=1;
			if(v%2!=0) z=2;
			printf("Digite as coordenadas jogador %d :\n",z);
			scanf("%d %d", &x ,&y);	
			if(z==2) mat[x-1][y-1] = 'X';
			if(z==1) mat[x-1][y-1] = 'O';
			
			if(z==1){
				for(i=0;i<3;i++){
					
				}
			}
			
			
			
			/*
				if(mat[1][1] == 1 && mat[2][1] == 1 && mat[3][1] == 1){
					ganhador = 1; 
				}else if(mat[1][2] == 1 && mat[2][2] == 1 && mat[3][2] == 1){	
					ganhador = 1; 
				}else if(mat[1][3] == 1 && mat[2][3] == 1 && mat[3][3] == 1){
					ganhador = 1;
				}else if(mat[1][1] == 1 && mat[1][2] == 1 && mat[1][3] == 1){
					ganhador = 1; 
				}else if(mat[2][1] == 1 && mat[2][2] == 1 && mat[2][3] == 1){
					ganhador = 1; 
				}else if(mat[3][1] == 1 && mat[3][2] == 1 && mat[3][3] == 1){
					ganhador = 1; 
				}else if(mat[1][1] == 1 && mat[2][2] == 1 && mat[3][3] == 1){
					ganhador = 1; 
				}else if(mat[1][3] == 1 && mat[2][2] == 1 && mat[3][1] == 1){
					ganhador = 1;	
				}else if(mat[1][1] == 2 && mat[2][1] == 2 && mat[3][1] == 2){
					ganhador = 2; 
				}else if(mat[1][2] == 2 && mat[2][2] == 2 && mat[3][2] == 2){
					ganhador = 2; 
				}else if(mat[1][3] == 2 && mat[2][3] == 2 && mat[3][3] == 2){
					ganhador = 2; 
				}else if(mat[1][1] == 2 && mat[1][2] == 2 && mat[1][3] == 2){
					ganhador = 2; 
				}else if(mat[2][1] == 2 && mat[2][2] == 2 && mat[2][3] == 2){
					ganhador = 2; 
				}else if(mat[3][1] == 2 && mat[3][2] == 2 && mat[3][3] == 2){
					ganhador = 2; 
				}else if(mat[1][1] == 2 && mat[2][2] == 2 && mat[3][3] == 2){
					ganhador = 2; 
				}else if(mat[1][3] == 2 && mat[2][2] == 2 && mat[3][1] == 2){
					 ganhador = 2; 	
				}	
				*/
		}
		v++;
		system("cls");
	}
	if(ganhador == 1 || ganhador == 2){
		printf("\n\t______________________ \n\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("\t");
				printf("| %d |", mat[i][j]);
			}
			printf("\n\t______________________\n\n");
		}
		printf(" \tO Ganhador e o jogador %d\n\n", ganhador);
	}else if(ganhador == 3){
		printf("\n\t______________________ \n\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("\t");
				printf("| %d |", mat[i][j]);
			}
			printf("\n\t______________________\n\n");
		}
		printf(" \tDeu Velha %d\n\n", ganhador);
	}
	system("pause");	
}
