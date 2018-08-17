#include<stdio.h>
//STRUCT
struct disciplina{
	char nome[50];
	float nota1, nota2;
	float media;
};
//TYPEDEF DISC
typedef struct disciplina disc;
//FUNÇÃO COM RETORNO TIPO disc
//registros() RECEBE OS DADOS DO ALUNO
disc registros(){
	disc al;
	printf("Digite o Nome do Aluno\n");
	gets(al.nome);
	system("cls");
	printf("Digite as Notas do %s\n", al.nome);
	scanf("%f %f", &al.nota1, &al.nota2);
	system("cls");
	return al;
}

main(){
//VARIAVEL ALUNO TIPO DISC
	disc aluno;
	int i;
//COLOCAMOS OS DADOS OBTIDOS EM registros() NA VARIÁVEL aluno	
	aluno = registros();
//FAZEMOS A media E MOSTRAMOS	
	aluno.media = (aluno.nota1 + aluno.nota2) / 2;
	puts(aluno.nome);
	printf("%.2f\n\n", aluno.media);
	system("pause");
}
