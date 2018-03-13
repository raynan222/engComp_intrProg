#include<stdio.h>
int main() {
	char texto[11];
	
	printf("\n---------------------\n      MAIUSCULA\n---------------------\n\n");
	
	
	int contador ,flag1, flag2 = 0;
	printf("Digite um texto.\n");
	scanf("%[^\n]s",texto);
	

	
	printf("\n---------------------\n Texto original: %s\n---------------------\n", texto);
	
	texto[0] = (texto[0] != '\0'?texto[0] - 32: texto[0]);
			
	printf("\n---------------------\n Texto com a 1 maiuscula: %s\n---------------------\n", texto);
	
	return 0;
}	