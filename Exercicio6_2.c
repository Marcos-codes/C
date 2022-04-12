# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


void separa(float num, int *x, float *y) {
    *x = (int)num;
    *y = num - *x;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num, frac;
    int inteira;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    separa(num, &inteira, &frac);
    printf("%f: %i e %f", num, inteira, frac);
    
	getch();
	return 0;
}