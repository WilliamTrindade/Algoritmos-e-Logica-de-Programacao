//TYPEDEF NA STRUCT
#include<stdio.h>

struct estoque{
	int Codigo;
};
typedef struct estoque est;

int main(){
	est a;
	a.Codigo = 10;
	printf("%d", a.Codigo);
}
