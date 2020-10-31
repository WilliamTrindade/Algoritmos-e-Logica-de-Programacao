#include<stdio.h>
main(){
	char palavra[50] = {};
	int i;
	gets(palavra);
	for(i=0;palavra[i] != '\0';i++){
		if(palavra[i] >= 65 && palavra[i] <= 90) palavra[i] += 32;
	}
	puts(palavra);
}
