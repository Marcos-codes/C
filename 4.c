/*3-Faça um programa que calcule a velocidade média de um veículo.
vm=(sf-si)/(tf-ti)

vm = dp/vt

vm = velocidade média
sf = espaço final
si = espaço inicial
tf = tempo final
ti = tempo inicial
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float si, sf, ti, tf, vm;
//float dp, vt;
printf("Digite o valor do espaço inicial ");
scanf("%f",&si);
printf("Digite o valor do espaço final ");
scanf("%f",&sf);
printf("Digite o valor do tempo inicial ");
scanf("%f",&ti);
printf("Digite o valor do tempo final ");
scanf("%f",&tf);
//dp=sf-si
//vt=tf-ti
//vm=dp/vt
vm=(sf-si)/(tf-ti);
printf("O valor da velocidade média é %.2f",vm);
	getch();
	return 0;
}
