/*
Fun��o: calcular preco de venda de terreno
Autor: Rafaela Petelin 
Data de cria��o: 25/09/2019
Data de altera��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float frente = 0, lado = 0, metro = 0, terreno = 0, preco = 0;
    setlocale(LC_ALL, "");
	printf("informe o valor da frente: \n");
	scanf("%f", &frente);
	printf("informe o valor do lado: \n");
	scanf("%f", &lado);
        printf("informe o valor do metro quadrado: \n");
	scanf("%f", &metro);
	terreno = frente * lado;
        preco = terreno * metro;
	printf("o pre�o de venda � %f ", preco);
	system("pause");
}
