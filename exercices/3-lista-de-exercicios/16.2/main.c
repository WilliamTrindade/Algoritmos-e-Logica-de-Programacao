#include <stdio.h>
#include <stdlib.h>
main(){
	int i,t;
	scanf("%d",&i);
	for(t=2; t<=10; t++) {
		if(!(i%t==0 && i!=t || i%5==0)) {
			printf("primo");
			break;			
		} else if(i==2 || i==3 ||i==5 || i==7) {
			printf("primo");
			break;
		} else {
			printf("n e primo");
			break;
		}
	}	
}
