#include<stdio.h>
//STRUCT
struct disciplina{
	char nome[50];
	float nota1, nota2;
	float media;
};
//TYPEDEF DISC
typedef struct disciplina disc;
//FUNÇÃO QUE NÃO RETORNA CHAMADA REGISTROS FAZ A MEDIA
void registros (disc al){
	al.media = (al.nota1 + al.nota2) / 2;
	puts(al.nome);
	printf("A media e : %.2f \n", al.media);
}
//MAIN RECEBE OS DADOS DO ALUNO
main(){
	disc aluno;
	printf("Digite o nome do Aluno\n");
	gets(aluno.nome);
	system("cls");
	printf("Digite as 2 notas do %s\n", aluno.nome);
	scanf("%f %f", &aluno.nota1, &aluno.nota2);
	system("cls");
//CHAMA-SE A FUNÇÃO REGISTROS() SE PASSA OS DADOS DO ALUNO COMO PARÂMETRO
	registros(aluno);
	system("pause");
}
