/*
Fun��o: calcular cubo de valor inteiro caso ele seja maior que 5 e menor que 20
Autor: Rafaela Petelin 
Data de cria��o: 29/09/2019
Data de altera��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int valor = 0, cubo = 0;
        setlocale(LC_ALL, "");
	printf("informe o valor inteiro: \n");
	scanf("%i", &valor);
	if(valor > 5) and (valor < 20){
        cubo = valor * valor * valor
        printf("O cubo de %i �: %i \n\n\n", valor, cubo); 
        }
        else{
        printf("O n�mero n�o pertence ao intervalo. \n\n\n"); 
        }
        system("pause");
}