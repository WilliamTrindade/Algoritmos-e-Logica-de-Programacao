#include<stdio.h>
main(){
	int i, j;
	float vet [3][3] = 	{1.0,2.3,3.5, 4.6,5.7,6.2, 4.6,5.7,6.2};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i==0 && j==0) || (i==2 && j==2)){
				printf("%.2f \n", vet[i][j]);
			} 
		}
	}
}
