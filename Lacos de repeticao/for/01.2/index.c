#include<stdio.h>
main(){
    //declara e atribui valor fora do for
	int i = 1;
	for(; i<=10;){
        //incrementa ( i = i +1 ) fora da condição.
		i++;
		printf("Imprimiu %d\n", i);
	}
}
