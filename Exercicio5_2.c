# include <stdlib.h>
int main(){
int *x, *y, *z;
x = (int * ) malloc ( sizeof ( int ));
y = (int * ) malloc ( sizeof ( int ));
*x = 27;
*y = 43; // ira mostrar que y é igual a 43
 	printf(" *x=%d *y=%d", *x, *y); //ira mostrar o resultado de x e y
 	*x = *y; // x e y são iguais 
 	printf(" *x=%d *y=%d", *x, *y);
*x = 71;
*y = 55; //mudara o numero de y que será 55

z = y; // z fica  igual a y 
y = x;//  y fica  igual a x
	printf(" *x=%d *y=%d *z=%d", *x, *y, *z);
	x = z; //que x é igual a z
	printf(" *x=%d *y=%d *z=%d", *x, *y, *z);
 	free ( x );
 	free ( y );
 	
 	getch();
return 0;
}