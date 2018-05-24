#include<stdio.h>
#include<string.h>
main(){
	char letra = 'A';
	printf("%c\n", letra);
	strlwr(&letra);
	printf("%c", letra);
}
