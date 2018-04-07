#include <stdio.h>
#define INT_MAX 2147483647
int main(){

	int maior = -INT_MAX;
	int meio; 
	int menor = INT_MAX;
	
	int x,y,z;
		
	printf("Entre com 3 numero diferentes entre si.(n1 n2 n3)\n");	
	scanf("%d %d %d",&x,&y,&z);

	if(x > maior)
		maior = x;
	if(y > maior)
		maior = y;
	if(z > maior)
		maior = z; 	


	if(x < menor)
		menor = x;
	if(y < menor)
		menor = y;
	if(z < menor)
		menor = z; 	

	if(x !=  menor && x != maior)
		meio = x;
	if(y !=  menor && y != maior)
		meio = y;
	if(z !=  menor && z != maior)
		meio = z; 	

	printf("%d %d %d\n",menor,meio,maior);

	return 0;
}