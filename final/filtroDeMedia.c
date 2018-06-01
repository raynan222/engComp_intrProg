#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void suvizarPixel(unsigned char **M,int x, int y,int m,int n){

    unsigned char media;

    media = M[x-1][y-1]/9+M[x-1][y]/9+M[x-1][y+1]/9+M[x][y-1]/9+M[x][y]/9+M[x][y+1]/9+M[x+1][y-1]/9+M[x+1][y]/9+M[x+1][y+1]/9;

    M[x][y] = media;
}

unsigned char** cria_matriz(int m, int n){
    int i = 0;
    unsigned char **matriz_temp;
    matriz_temp = (unsigned char*)malloc(n * sizeof(unsigned char));
    while(i != n){
        matriz_temp[i++] = (unsigned char*)malloc(m*sizeof(unsigned char));
    }
    return matriz_temp;
}

int main(){
    FILE *pgm;
    FILE *pgmborda;
    char pgmNome[30];
    char pgmbordaNome[30];
    int m, n, scale, element, limite;
    printf("Digite o nome do arquivo a ser suavizado: ");
    scanf("%s", pgmNome);
    printf("Digite o nome do arquivo a ser criado: ");
    scanf("%s", pgmbordaNome);

    pgm = fopen(pgmNome , "r");
    if(pgm == NULL){
        printf("Não pôde ser aberto");
        return 0;
    }
    fscanf(pgm, "%d %d %d", &m, &n, &scale);
    unsigned char **M;
    M = cria_matriz(m+2, n+2);
    int i, j;

    for(i = 0; i < n-2; i++){
        for(j = 0; j < m -2 ; j++){
            //suvizarPixel(M,i,j,m+2,n+2);
            printf("%d ",M[i][j]);
        }
    }
 
 
    fclose(pgm);
    fclose(pgmborda);
    for(i = 0; i < n+2; i++){
        free(M[i]);
    }
    free(M);
    return 0;
}