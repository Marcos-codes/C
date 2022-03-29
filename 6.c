/*5-Faça um programa que calcule a área de um trapézio e escreva sua área.
A=((B+b)*h)/2
B = base maior
b=base menor
h= altura  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
float B, b, h, A;
printf("Digite o valor da base maior ");
scanf("%f",&B);
printf("Digite o valor da base menor ");
scanf("%f",&b);
printf("Digite o valor da altura ");
scanf("%f",&h);
A=(B+b)*h/2;
printf("O valor da área do trapézio é %.2f",A);
	getch();
	return 0;
}
