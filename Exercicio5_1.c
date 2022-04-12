/* Os valores exibidos serão 
*p1 = 41 p2 = 17 
*p3 = 95 p4 = 29 
p5 = 33 p6 = 33

p1 = 33
p2 = 95
p3 = 6422280
p4 = 11
p5 = 95
p5 = 21
p5 = 21
*p1 = 21 p2 = 59
*p3 = 11 p4 = 11
*p5 = 59 p6 = 21

**p7 = 11

*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

main ( ){
int *p1,p2,*p3,p4,*p5,p6,**p7 ;
p1 = ( int * ) malloc (sizeof (int));
*p1 = 41;
p2 = 17;
p3 = ( int *) malloc ( sizeof ( int ) );
*p3 = 95;
p4 = 29;
p5 = &p6;
p6 = 33;  
printf ("*p1 = %d p2 = %d \n", *p1,p2); 
// Mostra que *p1 = 41 p2 = 17 
printf ("*p3 = %d p4 = %d \n", *p3, p4);
// Mostra que *p3 = 95 p4 = 29
printf ("*p5 = %d p6 = %d\n\n", *p5, p6);
// Mostra que *p5 = 33 p6 = 33
p1 = p5; 
printf ("p1 = %d\n", *p1);
// Mostra o valor de ponteiro 1 = 33
p2 = *p3;
printf ("p2 = %d\n", p2);
// Mostra o valor de p2 = 95
p3 = &p4; 
printf ("p3 = %d\n", p3);
// Mostra o valor de p4 = 6422280
p4 = 11;
printf ("p4 = %d\n", p4);
// Mostra o valor p4 = 11
p5 = &p2;
printf ("p5 = %d\n", *p5); 
// Mostra o valor ponteiro 2 = 95
*p5 = 21;
printf ("p5 = %d\n", *p5); 
// Mostra o valor ponteiro 5= 21
p6 = p2; 
printf ("p6 = %d\n", p6);
// Mostra o valor de p2 = 21
p7 = &p3;
// Insere o valor de p3 em p7

p2 = 59; // define o valor de p2 59
printf ("*p1 = %d p2 = %d \n", *p1,p2);
// Mostra que e *p1 = 21 p2 = 59
printf ("*p3 = %d p4 = %d \n", *p3, p4); 
// Mostra que e *p3 = 11 p4 = 11
printf ("*p5 = %d p6 = %d\n\n", *p5, p6);
// Mostra que e *p3 = 11 p4 = 11
printf ("**p7 = %d",**p7);  
// Mostra que e **p7 = 11
return 0;}