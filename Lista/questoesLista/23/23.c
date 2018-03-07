#include <stdio.h>
int main(){
	
	int i;
	float f;
	
	printf("Digite um numero flutuante:\n");
	scanf("%f",&f);
	printf("Digite um numero inteiro:\n");
	scanf("%i", &i);
			
	printf("O produto do número %.2f e %i é igual a %.2f\n", f, i,((float)f * i));
	
	return 0;
}