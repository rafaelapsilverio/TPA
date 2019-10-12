/*
Função: exibir o quociente e o resto da divisão de um numero por outro
Autor: Rafaela Petelin 
Data de criação: 29/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int dividendo = 0, divisor = 0, quociente = 0, resto = 0;
        setlocale(LC_ALL, "");
	printf("informe o dividendo: \n");
	scanf("%i", &dividendo);
	printf("informe o divisor: \n");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
        resto = dividendo - (divisor * quociente);
	printf("O quociente é: %i \n\n\n", quociente); 
        printf("O resto é: %i \n\n\n", resto); 
        system("pause");
}