/*
Fun��o: calcular aumento de salario
Autor: Rafaela Petelin 
Data de cria��o: 29/09/2019
Data de altera��o: 29/09/2019
*/
 
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float salario = 0, percentual = 0, novosalario = 0;
        setlocale(LC_ALL, "");
	printf("informe o salario atual: \n");
	scanf("%f", &salario);
	printf("informe o percentual de aumento: \n");
	scanf("%f", &percentual );
	novosalario = salario + (salario * (percentual / 100));
	printf("O novo salario � %f \n\n\n", novosalario);
	system("pause");
}