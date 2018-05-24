#include<stdio.h>
#include<string.h>
main(){
	char letra = 'a';
	printf("%c\n", letra);
	strupr(&letra);
	printf("%c", letra);
}
