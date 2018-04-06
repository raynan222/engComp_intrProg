#include <stdio.h>
int main()
{	
	float altC = 150,altZ = 110;
	int anos = 0;

	while(altC > altZ){
		altC += 20;
		altZ += 30;
		anos++;		
	}

	printf("A quantidades de anos necessaria eh: %d.\n",anos);
	return 0;
}