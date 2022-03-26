/*Escreva um programa em C para ler 10 palavras de no máximo 15 caracteres cada uma e apresente-as na tela na seguinte ordem: 1ª, 10ª, 2ª, 9ª, 3ª, 8ª, 4ª, 7ª, 5ª, 6ª. **/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[10][15];
	int i;
	for(i=0;i<10;i++){
		printf("Digite o nome ");
		gets(n[i]);
	}
	printf("\nNomes na 1ª posição \n");
	
		printf("%s\n",n[0]);
    printf("\nNomes na 10ª posição \n");
	
		printf("%s\n",n[9]);
    printf("\nNomes na 2ª posição \n");
	
		printf("%s\n",n[1]);
    printf("\nNomes na 9ª posição \n");
	
		printf("%s\n",n[8]);
    printf("\nNomes na 3ª posição \n");
	
		printf("%s\n",n[2]);
    printf("\nNomes na 8ª posição \n");
	
		printf("%s\n",n[7]);
    printf("\nNomes na 4ª posição \n");
	
		printf("%s\n",n[3]);

    printf("\nNomes na 7ª posição \n");
	
		printf("%s\n",n[6]);
    printf("\nNomes na 5ª posição \n");
	
		printf("%s\n",n[4]);
    printf("\nNomes na 6ª posição \n");
	
		printf("%s\n",n[5]);

	getch();
	return 0;
}
