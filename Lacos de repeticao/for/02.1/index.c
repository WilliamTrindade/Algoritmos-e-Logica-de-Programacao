#include<stdio.h>
main(){
	int i = 1;
	for(; i<10;i++){
		i%2==0 ? printf("%d \n",i) : printf("");
	}
}
