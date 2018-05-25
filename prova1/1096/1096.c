#include <stdio.h>

int main(int argc, char const *argv[])
{

	int a = 1;
	int b = 7;
	for (int i = 0; a != 11; i++,a+=2)
	{
		b = 7;
		for (int j = 0; j < 3; j++,b--)
		{
			
			printf("I=%d J=%d\n",a,b);

		}
	}
	return 0;
}