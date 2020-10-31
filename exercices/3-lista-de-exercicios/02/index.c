#include<stdio.h>
int main(){
	int i;
	for(i=1; i<200;i++){
		i%4==0 ? printf("%d \n", i) : i;
	}
}
