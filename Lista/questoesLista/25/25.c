#include<stdio.h>
int main(){
	printf("Digite um numero inteiro:\n");
	int n1 = 0;
	scanf("%d",&n1);
	float f = n1;
	printf("O numero %d em formato OCTAL:\t\t\t%o\n",n1,n1);
	printf("O numero %d em formato HEXA:\t\t\t%x\n",n1,n1);
	printf("O numero %d em formato de FLOAT:\t\t%.2f\n",n1,f);
	printf("O numero com %d quatro zeros a esquerda:\t%04d\n",n1,n1);
return 0;
}