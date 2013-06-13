#include <stdio.h>
#include <string.h>

typedef struct {
	int matricula;
	char nome[100];
	float nota1;
	float nota2;
} Aluno;


int main(){
	Aluno aluno;
	aluno.matricula = 201328; //<1>
	strncpy(aluno.nome, "Maria Bonita", sizeof(aluno.nome)); //<2>
	aluno.nota1 = 8.0; //<1>
	aluno.nota2 = 9.0; //<1>

	printf("\n%d %s %1.2f %1.2f", aluno.matricula, aluno.nome, // <3>
		aluno.nota1, aluno.nota2); //<3>

	getchar();
	return 0;
}
