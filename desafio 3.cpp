#include <stdio.h>
/*
Presquisa no Google "Tabela INSS 2023" - Resultado:
Como funciona o desconto do INSS em 2023? As al�quotas s�o:
de 7,5% para aqueles que ganham at� R$ 1.320,00;
de 9% para quem ganha entre R$ 1.320,01 at� R$ 2.571,29;
de 12% para os que ganham entre R$ 2.571,30 at� R$ 3.856,94;
e de 14% para quem ganha de R$ 3.856,95 at� R$ 7.507,29.
Quem ganha acima de 7.507,29 desconta o TETO 1.051,02
*/
int main(){
	float salario, inss; //Declara��o de vari�veis
	printf("Digite seu sal�rio:");
	scanf("%f",&salario); //Entrada
	//Processamento
	if(salario < 1320.01) inss = salario * 0.075;
	else if(salario < 2571.30) inss = salario * 0.09;
	else if(salario < 3856.95) inss = salario * 0.12;
	else if(salario < 7507.29) inss = salario * 0.14;
	else inss = 1051.02;
	//Sa�da
	printf("O desconto de INSS = %.2f\n",inss);
	printf("O sal�rio l�quido ser� de = %.2f\n",salario - inss);
	return 0;
}
