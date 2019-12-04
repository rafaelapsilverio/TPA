/*
Função: ler 10 números e escrever quantos são negativos
Autor: Rafaela Petelin 
Data de criação: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c, negativos, n = 0;
        setlocale(LC_ALL, "");
         for(c==1; c <= 10;c++){
           printf("Informe um valor: \n");
             scanf("%i", &n);
            if(n < 0){
            	negativos = negativos + 1;
			}
         }
         	printf("%i valores são negativos\n", negativos);
         	printf("\n");
          system ("pause");
        
}


