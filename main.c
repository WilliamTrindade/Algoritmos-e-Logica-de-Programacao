#include<stdio.h>
#include<stdlib.h>
main(){
	int x, y, i, j, t=1;
	for(i=0;;i++){
		for(j=0;j<i;j++){
			t = t * 2;
			x=x+t;
		}
		printf(" %d ", x);
		system("pause");
		t=0;
	}
}
