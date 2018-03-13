#include<stdio.h>
int main(){

	printf("----------------------------------------\n");
	printf("------------Media do a aluno------------\n");
	printf("----------------------------------------\n");
	printf("\n");
	printf("Digite o nome do aluno:\n");
	char nomeAluno[50];
	scanf("%[^\n]s", nomeAluno);
	
	float nota1,nota2 = 0;
	printf("Digite a nota 1 do aluno %s:\n", nomeAluno);
	scanf("%f",&nota1);
	printf("Digite a nota 2 do aluno: %s:\n", nomeAluno);
	scanf("%f",&nota2);
			
	printf("\nAluno:\t%s\n",nomeAluno);
	printf("Nota 1:\t\t%.2f\n",nota1);
	printf("Nota 2:\t\t%.2f\n",nota2);
	printf("Media:\t\t%.2f\n",((2*nota1)+(3*nota2))/5);
	printf("\nAprovado:\t%s\n",((((2*nota1)+(3*nota2))/5) >= 7 ?"True":"False"));
	printf("Final:\t\t%s\n",((((2*nota1)+(3*nota2))/5) >= 7 ?"False":"True"));
	
return 0;	
}
