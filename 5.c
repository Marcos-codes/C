/*	Faça um programa que converta uma temperatura em graus Celsius para Fahrenheit e 
Kelvin. 
F=(9C+160)/5  e K = C +273
C = Celsius
F = Fahrenheit
K = Kelvin,
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
float c, f, k;
printf("Digite a temperatura em graus Celsius ");
scanf("%f",&c);
f=(9*c+160)/5;
k=c+273;
printf("A temperatura de %.2f °C em Fahrenheit é %.2f °F e em Kelvin é %.2f K",c,f,k);
	getch();
	return 0;
}
