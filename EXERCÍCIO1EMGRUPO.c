/*Faça um programa que ordene, em ordem alfabética crescente, o vetor Nomes que contém os seguintes dados: Miriam, Sueli, Ana, Miguel, Daniel, Tales, Humberto. Utilize o método de ordenação por trocas (bsort). * */



#include <stdio.h>
#include <string.h>

char nome [7][9] = {"Miriam","Sueli","Ana","Miguel","Daniel","Tales","Humberto"};

void ORDENA (){
    int x,y,r;
    char aux[9];
    for(x=0; x<=6; x++){
        for(y = x+1; y<=6; y ++){
            r = strcmp(nome[x], nome [y]);
            if(r > 0){
                strcpy(aux, nome[x]);
                strcpy(nome[x],nome[y]);
                strcpy(nome[y], aux);
            }
        }
    }
}
main()
{
    int x;
  
    

    ORDENA();

    printf("Nomes em ordem : \n");
    for(x = 0; x <= 9; x++){
        puts(nome [x]);
    }
    
}