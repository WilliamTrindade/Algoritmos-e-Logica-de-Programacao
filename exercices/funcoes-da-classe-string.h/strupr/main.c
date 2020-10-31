#include<stdio.h>
main(){
	char palavra[50] = {};
	int i;
	gets(palavra);
	for(i=0;palavra[i] != '\0';i++){
		if(palavra[i] >= 97 && palavra[i] <= 122) palavra[i] -= 32;
	}
	puts(palavra);
}
