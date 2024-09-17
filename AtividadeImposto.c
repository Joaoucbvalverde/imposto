/*João Paulo Araujo Valverde de Souza
UC24101226*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void LinhaEspaco (){
	printf("|-----------------------------------------|\n");
	}
	
	
int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	float Valor1;
	int estado;
	float imposto;
	
	LinhaEspaco();
	
	printf(" DIGITE O VALOR DESEJADO;\n");
	scanf("%f", &Valor1);
	
	LinhaEspaco();
	
	printf(" DIGITE O NUMERO DO ESTADO DESEJADO;\n");
	printf(" 1-MG\n 2-SP\n 3-RJ\n 4-MS\n");
	scanf("%d", &estado);
	
	LinhaEspaco();
	switch(estado)
	{
		case 1:
			{
				imposto = Valor1 * 7 / 100;
				Valor1 = Valor1 + imposto;
				printf(" O VALOR DO IMPOSTO E DE; %.2f\n E O VALOR TOTAL DO PRODUTO COM IMPOSTO E DE; %.2f\n", imposto, Valor1);
				break;
			}
		case 2:
			{
				imposto = Valor1 * 12 / 100;
				Valor1 = Valor1 + imposto;
				printf(" O VALOR DO IMPOSTO E DE; %.2f\n E O VALOR TOTAL DO PRODUTO COM IMPOSTO E DE; %.2f\n", imposto, Valor1);
				break;
			}
		case 3:
			{
				imposto = Valor1 * 15 / 100;
				Valor1 = Valor1 + imposto;
				printf(" O VALOR DO IMPOSTO E DE; %.2f\n E O VALOR TOTAL DO PRODUTO COM IMPOSTO E DE; %.2f\n", imposto, Valor1);
				break;
			}
		case 4:
			{
				imposto = Valor1 * 8 / 100;
				Valor1 = Valor1 + imposto;
				printf(" O VALOR DO IMPOSTO E DE; %.2f\n E O VALOR TOTAL DO PRODUTO COM IMPOSTO E DE; %.2f\n", imposto, Valor1);
				break;
			}
	
	
	system ("pause");
	return 0;
	}
}
