/*
Função: calcular e mostrar a tabuada do 7
Autor: Rafaela Petelin 
Data de criação: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int resultado = 0, c = 0;
        setlocale(LC_ALL, "");
         for(c==0; c <= 10;c++){
         	resultado = 7 * c;
         	printf("7 x %i é: %i \n", c, resultado);
		 }
        

          system ("pause");
        
}

