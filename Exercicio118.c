#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char nomes[10][20];
  int i, j;
  char aux[20];

  for(i=0;i<10;i++){
		printf("Digite o nome de seu amigo ");
		gets(nomes[i]);
	}

  for (i = 1; i < 10; i++)
  {
    strcpy(aux, nomes[i]);
    j = i - 1;
    while (j >= 0 && strcmp(aux, nomes[j]) < 0)
    {
      strcpy(nomes[j + 1], nomes[j]);
      j--;
    }
    strcpy(nomes[j + 1], aux);
  }
  for (i = 0; i < 10; i++)
  {
    printf("%s\n", nomes[i]);
  }
  return 0;
}