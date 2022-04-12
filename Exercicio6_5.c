# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[15][5];

	int i;
	for(i=0;i<5;i++){
		printf("Digite o nome ");
		gets(n[i]);
	}
	printf("\nNome: \n");
	
		printf("%s\n",n[0]);
    
    printf("\nNome: ");
	
		printf("%s\n",n[1]);
    printf("\nNome: ");
	
		printf("%s\n",n[2]);
    printf("\nNome: ");
	
		printf("%s\n",n[3]);
    printf("\nNome: ");
	
		printf("%s\n",n[4]);
    
   
	

	getch();
	return 0;
}