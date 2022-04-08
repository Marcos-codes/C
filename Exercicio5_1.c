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
// Comentario aqui
printf ("*p3 = %d p4 = %d \n", *p3, p4);
// comentario Aqui
printf ("p5 = %d p6 = %d\n\n", *p5, p6);
// Comentario aqui 
p1 = p5; 
printf ("p1 = %d\n", *p1);
// Comentrario aqui
p2 = *p3;
printf ("p2 = %d\n", p2);
// Comentrario aqui
p3 = &p4; 
printf ("p3 = %d\n", p3);
// Comentrario aqui 
p4 = 11;
printf ("p4 = %d\n", p4);
// Comentrario aqui 
p5 = &p2;
printf ("p5 = %d\n", *p5); 
// Comentario aqui 
*p5 = 21;
printf ("p5 = %d\n", *p5); 
// Comentario aqui 
p6 = p2; 
printf ("p5 = %d\n", p6);
// Comentario aqui 
p7 = &p3;
// Comentario aqui

p2 = 59; // comentario aqui 
printf ("*p1 = %d p2 = %d \n", *p1,p2);
// Comentario aqui
printf ("*p3 = %d p4 = %d \n", *p3, p4); 
// Comentario aqui
printf ("*p5 = %d p6 = %d\n\n", *p5, p6);
// Comentario aqui
printf ("**p7 = %d",**p7);  
// Comentario qui 
return 0;}