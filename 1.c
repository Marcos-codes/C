//Faça um programa que leia dois valores reais e exiba o primeiro com acréscimo de 30%, e o segundo com desconto de 25%.*/
# include <stdio.h>
//# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, desc, acresc;
	printf("Digite o valor que sofrerá desconto ");
	scanf("%f",&n1);
	printf("Digite o valor que sofrerá acréscimo ");
	scanf("%f",&n2);
	desc=0.75*n1;
	acresc=1.30*n2;
	printf("O valor com desconto de 25%% é R$ %.2f\n\nO valor com acréscimo de 30%% é R$ %.2f",desc,acresc);
	//getch();
	return 0;
}
