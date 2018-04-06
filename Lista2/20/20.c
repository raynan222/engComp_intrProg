#include <stdio.h>
int main()
{	
	float salIni = 2000;
	int anos =(2018 - 1997);
	float aumento =2000 * 0.015;
	while(anos--){
		salIni +=aumento;
		aumento *= 2;	
	}

	printf("O salario atual eh: %f.\n",salIni);
	return 0;
}