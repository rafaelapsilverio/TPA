/*
Função: calcular cubo de valor inteiro caso ele seja maior que 5 e menor que 20
Autor: Rafaela Petelin 
Data de criação: 29/09/2019
Data de alteração: 29/09/2019
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
        printf("O cubo de %i é: %i \n\n\n", valor, cubo); 
        }
        else{
        printf("O número não pertence ao intervalo. \n\n\n"); 
        }
        system("pause");
}