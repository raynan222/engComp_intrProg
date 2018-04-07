#include <stdio.h>
#include <stdlib.h>
int main(){ 
	
	unsigned n1,n2,n3;
	unsigned q, r;

	unsigned n,aux;
	int inv = 0;

	scanf("%d",&n);
		
	while(n > 0){

	    q = (n >> 1) + (n >> 2);
	    q = q + (q >> 4);
	    q = q + (q >> 8);
	    q = q + (q >> 16);
	    q = q >> 3;
	    r = n - (((q << 2) + q) << 1);
	    n1 = q + (r > 9);
	    
	    n3 = (n1 << 3) + (n1 << 1);

	    n2 = n - n3;
		
		inv = (inv << 3) + (inv << 1);

		inv += (n2 << 3) + (n2 << 1);

		q = (inv >> 1) + (inv >> 2);
	    q = q + (q >> 4);
	    q = q + (q >> 8);
	    q = q + (q >> 16);
	    q = q >> 3;
	    r = inv - (((q << 2) + q) << 1);
	    inv = q + (r > 9);
		
		

		inv = (inv << 3) + (inv << 1);

		q = (n >> 1) + (n >> 2);
	    q = q + (q >> 4);
	    q = q + (q >> 8);
	    q = q + (q >> 16);
	    q = q >> 3;
	    r = n - (((q << 2) + q) << 1);
	    n = q + (r > 9);
	    	    
	}
	q = (inv >> 1) + (inv >> 2);
	    q = q + (q >> 4);
	    q = q + (q >> 8);
	    q = q + (q >> 16);
	    q = q >> 3;
	    r = inv - (((q << 2) + q) << 1);
	    inv = q + (r > 9);

	printf("%d\n",inv);

return 0;
}