/*
Fun��o: area de um circulo
Autor: Rafaela Petelin 
Data de cria��o: 25/09/2019
Data de altera��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float PI = 3.1416, raio = 0, area = 0;
    setlocale(LC_ALL, "");
	printf("informe o raio do circulo: \n");
	scanf("%f", &raio);
	area = raio * raio * PI;
	printf("a area do circulo � %f \n", area);
	system("pause");
}
