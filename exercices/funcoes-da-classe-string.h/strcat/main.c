#include<stdio.h>
#include<string.h>
main(){
	 char a[20] = {"de algoritimo"};
	 char b[20] = {"aula "};
	 int i, j;
	 for(i=0; b[i] != '\0'; i++);
	 for(j=0; a[j] != '\0'; j++){
		b[i+j] = a[j];
	 }
	 puts(b);
}
