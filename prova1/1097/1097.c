#include <stdio.h>

int main(int argc, char const *argv[])
{

	int a = 1;
	int aux = 7,b = 7;

	for (int i = 0; a != 11; i++,a+=2)
	{
		;
		for (int j = 0; j < 3; j++,b--)
		{
			
			printf("I=%d J=%d\n",a,b);

		}
		aux += 2;
		b =aux;
	}
	return 0;
}