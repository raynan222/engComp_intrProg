#include<stdio.h>
int main() {
	printf("\n---------------------\n PALINDROMO DE BITS\n---------------------\n\n");
	
	
	int contador = 9;
	int flag1, flag2 = 0;

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
	
			
	printf("\n---------------------\nO texto:\t\t%s\n", bits);
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 1] != '\0'? 0 : 1));
	bits1[7] = (flag2 == 0? bits[contador-1]:bits[0]);
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 2] != '\0'? 0 : 1));
	bits1[6] =( flag2 == 0? bits[contador - 2]:bits[1] );
		
	flag2 = (flag2 == 1? 1 : (bits[contador - 3] != '\0'? 0 : 1));
	bits1[5] =(flag2 == 0? bits[contador - 3]:bits[2] );
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 4] != '\0'? 0 : 1));
	bits1[4] =(flag2 == 0? bits[contador - 4]:bits[3] );
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 5] != '\0'? 0 : 1));
	bits1[3] =( flag2 == 0? bits[contador - 5]:bits[4] );
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 6] != '\0'? 0 : 1));
	bits1[2] =(flag2 == 0? bits[contador - 6]:bits[5] );
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 7] != '\0'? 0 : 1)); 
	bits1[1] =( flag2 == 0? bits[contador - 7]:bits[6] );
	
	flag2 = (flag2 == 1? 1 : (bits[contador - 8] != '\0'? 0 : 1)); 
	bits1[0] =(flag2 == 0? bits[contador - 8]:bits[7] );
			
	printf("---------------------\nO inverso do texto:\t%s\n---------------------\n", bits1);


	if(bits[0] == bits1[0] && bits[1] == bits1[1] && bits[2] == bits1[2] && bits[3] == bits1[3] && bits[4] == bits1[4] && bits[5] == bits1[5] && bits[6] == bits1[6] && bits[7] == bits1[7])
		printf("Sao palindromos!\n");
	else
		printf("Nao sao palindromos\n");
	
	return 0;
} 
