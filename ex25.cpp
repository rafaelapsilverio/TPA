/*
Função: calcular o fatorial de um número
Autor: Rafaela Petelin 
Data de criação: 23/10/2019
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
        printf("Informe um número: \n");
        scanf("%i", &n);
        while(n > 1){
         f = f * n;
         n = n - 1;
		}
        printf("O fatorial é %i \n", f);
        

          system ("pause");
        
}

