#include <stdio.h>
#include <math.h>
main(){
	quadrado(18);
}
quadrado(int k){
	int i;
	for(i = 1; i <= k ; i++){
		printf("%.0f \n", pow(i,2));
	}
}
