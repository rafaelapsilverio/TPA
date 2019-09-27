/*
Função: calcular media de 3 números
Autor e autor : Mikaela da Silva e Rafaela Petelin 
Data de criação: 25/09/2019
Data de alteração: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>

int main(){
	int num1 = 0, num2 = 0, num3 = 0, media = 0;
	printf("informe um numero inteiro: ");
	//leia(num1);
	scanf("%i", &num1);
	printf("informe o segundo numero inteiro: ");
	//leia(num2);
	scanf("%i", &num2);
	printf("informe o terceiro numero inteiro: ");
	//leia(num2);
	scanf("%i", &num3);
	media = ( num1 + num2 + num3 ) / 3;
	printf("media = ( %i + %i + %i )/ 3 = %i \n\n\n", num1, num2, num3, media);
	system("pause");
}
