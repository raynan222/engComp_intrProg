#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	float h,p;

	scanf("%d",&n);
	scanf("%f",&h);
	scanf("%f",&p);
	
	printf("NUMBER = %d\n",n);
	printf("SALARY = U$ %.2f\n",h*p);

	return 0;
}