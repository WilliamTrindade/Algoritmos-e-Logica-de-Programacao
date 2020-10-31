#include<stdio.h>
main(){
	float vet[5] = {}, calculo, val, mat[5][3] = 
	{{1,1,1},
	{1,1,1}, 
	{1,1,1}, 
	{1,1,3}, 
	{1,2,3}};
	int l, c;
	printf(" \n\tSalao Beautiful Beast \n");
	for(l=0;l<5;l++){
		for(c=0;c<3;c++){
			if(c==0) val = 10.00;
			if(c==1) val = 15.00;
			if(c==2) val = 30.00;
			vet[l] = vet[l] + (mat[l][c] * val)	/ 2;		
		}
		printf("\n A funcionaria %d deve receber .........\tR$ %.2f \n ", l+1, vet[l]);
	}
	system("pause");
}
