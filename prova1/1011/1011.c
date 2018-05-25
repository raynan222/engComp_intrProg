#include <stdio.h>
int main(int argc, char const *argv[])
{
	int j = 1;
	for (int i = 60; i != 0; i =i-5)
	{	

		printf("I=%d J=%d\n",j,i);
		j +=3;
	}

	return 0;
}