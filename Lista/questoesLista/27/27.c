#include<stdio.h>
int main(){

	printf("Digite uma letra.\n");
	char ch;
	scanf(" %c", &ch);
	printf("O ASCII do da letra %c é %d.\n", ch,ch);
	printf("O ASCII do da letra %c é %d.\n", ch-32,ch-32);

}
