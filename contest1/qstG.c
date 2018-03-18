
#include <stdio.h>

int main()
{
    int i, k=0, aux;
    char x[60], y[60];
    scanf("%s", x);
    for(i=0; x[i]; i++){
		
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
            y[k] = x[i];
            k++;
        }
    }
    y[k] = '\0';
    aux = strlen(y);
    for(i=0, k=aux-1; i < aux; i++, k--)
    {
        if(y[i] != y[k]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}