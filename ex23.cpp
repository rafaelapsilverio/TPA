/*
Função: calcular e mostrar o quadrado de um numero informado pelo usuário e sair do programa quando for digitado 0
Autor: Rafaela Petelin 
Data de criação: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int cont = 0, numero = 1, quadrado = 0;
        setlocale(LC_ALL, "");
        printf("********************* \n");
        printf("Quadrado de um número\n");
        printf("********************* \n");
        while(numero != 0){
		printf("informe um número inteiro: \n");
        	scanf("%i", &numero);
        quadrado = numero * numero;
        printf("O quadrado de %i é %i \n", numero, quadrado);
         cont = cont + 1;
    }
          system ("pause");
        
}

