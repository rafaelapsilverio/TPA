/*
Função: quadrado da soma de tres numeros
Autor: Rafaela Petelin 
Data de criação: 25/09/2019
Data de alteração: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int n1 = 0, n2 = 0, n3 = 0, soma = 0, quadrado = 0;
        setlocale(LC_ALL, "");
	printf("informe o primeiro numero : \n");
	scanf("%i", &n1);
        printf("informe o segundo numero : \n");
	scanf("%i", &n2);
        printf("informe o terceiro numero : \n");
	scanf("%i", &n3);
	soma = n1 + n2 + n3;
        quadrado = soma * soma
	printf("o quadrado da soma é igual a: %i \n\n\n", quadrado);
	system("pause");
}