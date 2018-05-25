#include <stdio.h>
int main(int argc, char const *argv[])
{
	int aux = 0,aux2 = 0;
	int A[2010];
	int B[40010];

	for (int i = 0; i < 40001; i++)
	{
		A[i] = 0;
		B[i] = 0;
	}

	int N;
	scanf("%d",&N);

	while(N--){
		int num;
		scanf("%d",&num);

		A[num]++;
		B[aux++] = num;
		
	}

	int i,key,j;
   	for (i = 1; i < aux; i++)
   	{
   	    key = B[i];
    	   j = i-1;
	 
       	while (j >= 0 && B[j] > key)
	       {
	           B[j+1] = B[j];
	           j = j-1;
	       }
	       B[j+1] = key;
	}	

	for (int i = 0; i < aux;i++)
	{
		if (A[B[i]] != 0){
			printf("%d aparece %d vez(es)\n",B[i],A[B[i]]);
			A[B[i]] = 0;
		}
	}

	return 0;
}