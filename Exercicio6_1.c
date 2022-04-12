# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>



void pontomedio(float x1,float x2,float y1,float y2 ){
    float mediox,medioy;
    mediox= (x1+x2)/2;
    medioy= (y1+y2)/2;
    printf("os pontos medios xm=%.2f ym=%.2f",mediox,medioy);
}

void baricentro(float x1,float x2,float x3,float y1,float y2,float y3){
    float mediox,medioy;
    mediox= (x1+x2+x3)/3;
    medioy= (y1+y2+y3)/3;
    printf("o ponto do baricentro x=%.2f y=%.2f",mediox,medioy);

}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x1,y1;
	float x2,y2;
	float x3,y3;
	printf("valores do vertice A\n");
    printf("digite um numero x ");
    scanf("%f",&x1);
    printf("digite um numero y ");
    scanf("%f",&y1);
    printf("\n");
    printf("valores do vertice B\n");
    printf("digite um numero x ");
    scanf("%f",&x2);
    printf("digite um numero y ");
    scanf("%f",&y2);
    printf("\n");
    printf("valores do vertice C\n");
    printf("digite um numero x ");
    scanf("%f",&x3);
    printf("digite um numero y ");
    scanf("%f",&y3);
    printf("\n");


    pontomedio(x1,x2,y1,y2);
    printf("\n");
    baricentro(x1,x2,y1,y2,x3,y3);

	getch();
	return 0;
}