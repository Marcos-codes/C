#include <stdio.h>
#define MAX 31

void main()
{
char str[MAX], copia[MAX];
int i = 0, compstr;

printf("\n\nEntre com uma palavra (max 30 caracteres): ");
gets(str);

/* Determina o comprimento da string atraves
   de um for sem conteudo : ao final dele, compstr
   contem a posicao do '\0' da string*/

for(compstr=0; str[compstr]; compstr++);

while (str[i] != '\0')
{
   copia[i] = str[compstr-i-1];   /* Linha em destaque */
   i++;
}
copia[i] = '\0';
printf("\n\nString Invertida: %s\n", copia);
}