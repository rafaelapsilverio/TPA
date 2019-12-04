/*
Função: somar todos os ímpares entre 1 e o valor digitado pelo usuário
Autor: Rafaela Petelin 
Data de criação: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n = 0, cont = 1, soma = 0;
        setlocale(LC_ALL, "");
        printf("Informe um número: \n");
        scanf("%i", &n);
        while(cont <= n){
         if(cont-(cont/2*2)==1){
         	soma = soma + cont;
		 }
		 cont = cont + 1;
		}
        printf("A soma é %i \n", soma);
        

          system ("pause");
        
}

