#include<stdio.h>
main(){
	char p ='%';
	float perpar=0, perimpar=0;
	int par=0, imp=0,  i, j, mat[10][7] = {{0,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7},
					{1,2,3,4,5,6,7}};
	for(i=0;i<10;i++){
		for(j=0;j<7;j++){
			mat[i][j] % 2 == 0 ? par++ : imp++;
		}
	}
	
	perpar =(100*par)/70;
	perimpar =(100*imp)/70;
	printf("Pares = %d \nImpares = %d\nTotal = 70\n\n\n", par, imp);
	printf("Pares = %.0f %c \nImpares = %.0f %c\nTotal = 100 %c", perpar, p, perimpar, p, p);
	
}
