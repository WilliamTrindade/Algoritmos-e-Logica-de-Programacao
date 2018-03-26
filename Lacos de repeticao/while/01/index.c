#include<stdio.h>
#include<stdlib.h>
main(){
	int i ;
	while(i < 10){
		i%2==0 ? printf("%d \n",i) :i ;
		i++;
	}
	system("pause");
}
