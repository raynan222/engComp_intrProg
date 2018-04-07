#include <stdio.h>
#

int main(int argc, char const *argv[]){
	
	int a,b,c;
	float delta;
	float x1,x2;

	printf("Digite A,B e C(n1 n2 n3).\n");
	scanf("%d %d %d",&a,&b,&c);

    delta = b*b -4*a*c;
    float raiz = delta;

    if(delta > 0){
	    //Método de Newton-Raphson
	   	int n;
	    for (n = 0; n < 10; ++n)
	          raiz = raiz/2 + raiz/(2*raiz);

	   	x1 = (-b + raiz)/2*a;
	   	x2 = (-b - raiz)/2*a;

	   	   printf("Existem raizes reais.\n");
	   	   printf("x1 = %f.\n",x1);
	   	   printf("x2 = %f.\n",x2);


	}	

	 if(delta < 0){
	    printf("Nao existem raizes reais.\n");
	}	
  


	return 0;
}
