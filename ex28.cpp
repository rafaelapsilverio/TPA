/*
Fun��o: calcular e mostrar a tabuada do n�mero informado pelo usu�rio
Autor: Rafaela Petelin 
Data de cria��o: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int resultado = 0, c = 0, n = 0;
        setlocale(LC_ALL, "");
        printf("Informe um n�mero: \n");
         scanf("%i", &n);
         for(c==0; c <= 10;c++){
         	resultado = n * c;
         	printf("%i x %i �: %i \n", n, c, resultado);
		 }
        

          system ("pause");
        
}

