#include <stdio.h>
int main(){
	
	int n1,n2 = 0;
	float f = 0;

	printf("Digite dois numeros inteiros(n1,n2):\n");
	scanf("%d,%d", &n1,&n2);
	f = (n1+n2);
	f = f/2;
	printf("A media aritimetica dos número %d e %d é igual a %.2f\n", n1, n2,f);
	
	return 0;
}