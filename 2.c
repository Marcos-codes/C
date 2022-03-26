//2-Faça um programa que leia dois números inteiros e exiba o resto da divisão do primeiro pelo segundo. 

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
int a, b, resto;
printf("Digite um número inteiro ");
scanf("%i",&a);
printf("Digite um número inteiro ");
scanf("%i",&b);
resto=a%b;
printf("O resto da divisão de %d por %d é %d",a,b,resto);
	getch();
	return 0;
}
