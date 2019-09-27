/*
Função: somar dois números
Autor e autor : Mikaela da Silva e Rafaela Petelin 
Data de criação: 25/09/2019
Data de alteração: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>

int main(){
	int num1 = 0, num2 = 0, soma = 0;
	printf("informe um numero inteiro: ");
	//leia(num1);
	scanf("%i", &num1);
	printf("informe o segundo numero inteiro: ");
	//leia(num2);
	scanf("%i", &num2);
	soma = num1 + num2;
	printf("soma = %i + %i = %i \n\n\n", num1, num2, soma);
	system("pause");
}
