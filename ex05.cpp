/*
Função: calcular prestacao
Autor: Rafaela Petelin 
Data de criação: 25/09/2019
Data de alteração: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float valor = 0, taxa = 0, prestacao = 0;
    int tempo;
    setlocale(LC_ALL, "");
	printf("informe o valor: \n");
	scanf("%f", &valor);
	printf("informe a taxa (por dia) de atraso: \n");
	scanf("%f", &taxa);
        printf("informe o tempo (em dias): \n");
	scanf("%i", &tempo);
	prestacao = valor + (valor + (taxa / 100) * tempo);
	printf("o valor final da prestacao é %f ", prestacao);
	system("pause");
}
