/*
Fun��o: area de um retangulo
Autor: Rafaela Petelin 
Data de cria��o: 25/09/2019
Data de altera��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float area = 0, base = 0, altura = 0;
    setlocale(LC_ALL, "");
	printf("informe a base: \n");
	scanf("%f", &base);
	printf("informe a altura: \n");
	scanf("%f", &altura );
	area = base * altura;
	printf("a area do retangulo � %f ", area);
	system("pause");
}
