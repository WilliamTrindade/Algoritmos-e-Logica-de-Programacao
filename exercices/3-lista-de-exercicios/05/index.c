#include<stdio.h>
main(){
	int n, i, x=0;
	for(i=0;n!=-999;i++){
		scanf("%d", &n);
		if(n%2!=0){
			x++;
		}
	}
	printf("%d \n", x);
}

