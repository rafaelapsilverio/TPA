/*
Fun��o: calcular o fatorial de um n�mero
Autor: Rafaela Petelin 
Data de cria��o: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n = 0, f = 1;
        setlocale(LC_ALL, "");
         printf("****************\n");
        printf("Calcular Fatorial\n");
        printf("*****************\n");
        printf("Informe um n�mero: \n");
        scanf("%i", &n);
        while(n > 1){
         f = f * n;
         n = n - 1;
		}
        printf("O fatorial � %i \n", f);
        

          system ("pause");
        
}

