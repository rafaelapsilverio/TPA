/*
Fun��o: ler, calcular e mostrar a metade de 5 n�meros
Autor: Rafaela Petelin 
Data de cria��o: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  metade, n ;
        setlocale(LC_ALL, "");
         for(c==1; c <= 5;c++){
        printf("Informe um n�mero: \n");
             scanf("%f", &n);
         	metade = n / 2;
         	printf("A metade de %.2f �: %.2f \n", n, metade);
		 }
        

          system ("pause");
        
}

