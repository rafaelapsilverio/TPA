/*
Fun��o: ler 10 n�meros e escrever quantos s�o negativos
Autor: Rafaela Petelin 
Data de cria��o: 29/11/2019
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
         	printf("%i valores s�o negativos\n", negativos);
         	printf("\n");
          system ("pause");
        
}


