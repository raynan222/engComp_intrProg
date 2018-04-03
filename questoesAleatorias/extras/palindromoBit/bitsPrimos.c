#include<stdio.h>
int main() {

	int contador = 9;
	int nImpar = 0;

	char ch;
	char bits[9];	
	char bits1[9];
	bits[8] = '\0';
	bits1[8] = '\0';

	printf("Digite um caractere.\n");
	scanf(" %c",&ch);

	bits[7] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[6] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[5] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[4] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[3] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[2] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[1] = (ch%2 == 0?'0':'1');
	ch = ch/2;
	bits[0] = (ch%2 == 0?'0':'1');


	printf("\nO texto:\t\t\t%s", bits);
	
	nImpar += (bits[0]%2 == 0?0:1);
	nImpar += (bits[1]%2 == 0?0:1);
	nImpar += (bits[2]%2 == 0?0:1);
	nImpar += (bits[3]%2 == 0?0:1);
	nImpar += (bits[4]%2 == 0?0:1);
	nImpar += (bits[5]%2 == 0?0:1);
	nImpar += (bits[6]%2 == 0?0:1);
	nImpar += (bits[7]%2 == 0?0:1);
			
	int cont = 0;
		
	int nPar = 8 - nImpar;	

	cont = (nPar%2 != 0?cont : cont+1);
	cont = (nPar%3 != 0?cont : cont+1);
	cont = (nPar%4 != 0?cont : cont+1);
	cont = (nPar%5 != 0?cont : cont+1);
	cont = (nPar%6 != 0?cont : cont+1);
	cont = (nPar%7 != 0?cont : cont+1);
	cont = (nPar%8 != 0?cont : cont+1);
	cont = (nPar%9 != 0?cont : cont+1);
	
	printf("\nO numero de bits pares:\t\t%d\n",nPar);

	if(cont > 1)
		printf("\nNumero nao primo.\n");
	else	
		printf("\nNumero primo.\n");
	
	return 0;
} 
